﻿using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Reko.Scanning
{
    public class ScannerInLinq
    {
        // change @binary_size to simulate a large executable
        //private const int binary_size = 10;
        private Dictionary<long, instr> the_instrs;
        private List<link> the_links;

        private class instr
        {
            public long addr; // primary key not null,
            public int size;
            public char type;
            public long block_id;
            public int pred;
            public int succ;
        }

        private class link
        {
            public long first;
            public long second;

            public override bool Equals(object obj)
            {
                var that = obj as link;
                if (that == null)
                    return false;
                return that.first == this.first && that.second == this.second;
            }

            public override int GetHashCode()
            {
                return first.GetHashCode() ^ 13 * second.GetHashCode();
            }
        }

        private class block
        {
            public long id;
            public long component_id;
        }

        private class new_block
        {
            public link edge;
            public long block_id;
        }

        public void Doit()
        {
            int binary_size = 10;
            the_instrs = new Dictionary<long, instr>();
            // links betweeen instructions
            the_links = new List<link>();

            var the_excluded_edges = new HashSet<link>();

            // The following are work tables

            // newly discovered bad instructions
            var new_bad = new HashSet<long>();

            // Create a simulated program ----------------------------------------------------

            long @offset = 0x40000;
            long @end = @offset + @binary_size;
            while (@offset < @end)
            {
                AddInstr(1 + @offset, 1, 'l'); ;
                AddLink(1 + @offset, 2 + @offset);

                AddInstr(2 + @offset, 1, 'l'); ;
                AddLink(2 + @offset, 4 + @offset);

                AddInstr(3 + @offset, 1, 'C'); ; // Capital 'C' means this was called by someone.
                AddLink(3 + @offset, 4 + @offset);

                AddInstr(4 + @offset, 1, 'c');
                AddLink(4 + @offset, 5 + @offset);
                AddLink(4 + @offset, 6 + @offset);

                AddInstr(5 + @offset, 1, 'l');
                AddLink(5 + @offset, 6 + @offset);

                AddInstr(6 + @offset, 1, 'x');
                AddLink(6 + @offset, 2 + @offset);
                AddLink(6 + @offset, 7 + @offset);

                AddInstr(7 + @offset, 1, 'l');
                AddLink(7 + @offset, 8 + @offset);

                AddInstr(8 + @offset, 1, 'l');
                AddLink(8 + @offset, 9 + @offset);

                AddInstr(9 + @offset, 1, 'l');
                AddLink(9 + @offset, 10 + @offset);

                AddInstr(10 + @offset, 1, 'l');

                @offset = @offset + 20;

            }

            // Find transitive closure of bad instructions ------------------------

            for (;;)
            {

                new_bad = new HashSet<long>(
                    (from item in the_instrs.Values
                     join link in the_links on item.addr equals link.second
                     join pred in the_instrs.Values on link.first equals pred.addr
                     where item.type == 'x' && pred.type != 'x'
                     select pred.addr).Concat(
                    from item in the_instrs.Values
                    join link in the_links on item.addr equals link.first
                    join succ in the_instrs.Values on link.second equals succ.addr
                    where item.type == 'x' && succ.type != 'x'
                    select succ.addr));
                if (new_bad.Count == 0)
                    break;

                foreach (var n in new_bad)
                {
                    the_instrs[n].type = 'x';
                }
            }

            // Compute all basic blocks -----------------------------------------------

            // count the # of predecessors and successors for each instr

            Dump(the_instrs.Values);
            foreach (var cSucc in
                    from link in this.the_links
                    group link by link.first into g
                    select new { addr = g.Key, Count = g.Count() })
            {
                the_instrs[cSucc.addr].succ = cSucc.Count;
            }
            foreach (var cPred in
                    from link in this.the_links
                    group link by link.second into g
                    select new { addr = g.Key, Count = g.Count() })
            {
                the_instrs[cPred.addr].pred = cPred.Count;
            }
            Dump(the_instrs.Values);
            Dump(the_links);

            while (true)
            {
                // find all instructions succ that have a single predecessor pred
                // such that pred has succ as its single successor and they 
                // are consecutive in memory.

                // newly discovered instrctions that need to be added to basic blocks.
                var new_blocks =
                    (from link in the_links
                     join pred in the_instrs.Values on link.first equals pred.addr
                     join succ in the_instrs.Values on link.second equals succ.addr
                     where pred.succ == 1 && succ.pred == 1  &&
                         pred.addr + pred.size == succ.addr &&
                         pred.block_id != succ.block_id
                     select new new_block { edge = new link { first = pred.addr, second = succ.addr }, block_id = pred.block_id })
                     .ToList();
                if (new_blocks.Count == 0)
                    break;
                Dump(new_blocks);

                foreach (var b in new_blocks)
                {
                    the_instrs[b.edge.second].block_id = b.block_id;
                    if (!the_excluded_edges.Contains(b.edge))
                    {
                        the_excluded_edges.Add(b.edge);
                    }
                }
            }

            // Build global block graph
            var the_blocks =
                     the_instrs
                     .Select(i => i.Value.block_id)
                     .Distinct()
                     .ToDictionary(k => k, v => new block { id = v, component_id = v });
            the_links = the_links
                .Where(l => !the_excluded_edges.Contains(l))
                .ToList();

            // Compute all weakly connected components -------------------------------------------------

            while (true)
            {

                // Find all links that connect instructions that have different components
                var components_to_merge =
                (from link in the_links
                 join t1 in the_blocks.Values on link.first equals t1.id
                 join t2 in the_blocks.Values on link.second equals t2.id
                 where t1.component_id != t2.component_id
                 select new link { first = t1.component_id, second = t2.component_id })
                .Distinct()
                .ToList();
                // ensure symmetricity (only for WCC, SCC should remove this)
                //insert into #components_to_merge
                //select component2, component1 from #components_to_merge).ToList(); 

                if (components_to_merge.Count == 0)
                    break;

            }
            //select top 300 'I' as Instrs, * from the_instrs
            //select top 300 'L' as Links, * from the_links
            //select top 300 'B' as Blocks, * from the_blocks

        }

        private void Dump(IEnumerable<link> edges)
        {
            foreach (var link in edges)
            {
                Debug.Print("[{0:X8} -> {1:X8}]", link.first, link.second);
            }
        }

        private void Dump(IEnumerable<new_block> new_blocks)
        {
            foreach (var b in new_blocks)
            {
                Debug.Print("[{0:X8} -> {1:X8}] {2:X8}", b.edge.first, b.edge.second, b.block_id);
            }
        }

        private void Dump(IEnumerable<instr> blocks)
        {
            foreach (var i in blocks)
            {
                Debug.Print("{0:X8} {1} {2} {3:X8} {4,2} {5,2}]",
                    i.addr, i.size, i.type, i.block_id, i.pred, i.succ);
            }
        }

        private void AddInstr(long addr, int size, char type)
        {
            the_instrs.Add(addr, new instr
            {
                addr = addr,
                size = size,
                type = type,
                block_id = addr,
            });
        }

        private void AddLink(long from, long to)
        {
            the_links.Add(new link { first = from, second = to });
        }
    }

}
