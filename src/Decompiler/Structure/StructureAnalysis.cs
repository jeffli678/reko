/* 
 * Copyright (C) 1999-2009 John K�ll�n.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */

using Decompiler.Core;
using Decompiler.Core.Absyn;
using Decompiler.Core.Code;
using Decompiler.Core.Output;
using Decompiler.Core.Lib;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;

namespace Decompiler.Structure
{
    public class StructureAnalysis
    {
        // This routine is called after all the other structuring has been done. It detects
        // conditionals that are in fact the head of a jump into/outof a loop or into a case body. 
        // Only forward jumps are considered as unstructured backward jumps will always be generated nicely.
        private void DetectUnstructuredConditionals(ProcedureStructure curProc)
        {
            foreach (StructureNode curNode in curProc.Ordering)
            {
                List<StructureNode> oEdges = curNode.OutEdges;

                // consider only conditional headers that have a follow and aren't case headers
                if ((curNode.GetStructType() == structType.Cond || curNode.GetStructType() == structType.LoopCond) &&
                        curNode.CondFollow != null && curNode.CondType != condType.Case)
                {
                    // define convenient aliases for the relevant loop and case heads and the out edges
                    StructureNode myLoopHead = (curNode.GetStructType() == structType.LoopCond ? curNode : curNode.LoopHead);
                    StructureNode follLoopHead = curNode.CondFollow.LoopHead;

                    // analyse whether this is a jump into/outof a loop
                    if (myLoopHead != follLoopHead)
                    {
                        // we want to find the branch that the latch node is on for a jump
                        // out of a loop
                        if (myLoopHead != null)
                        {
                            StructureNode myLoopLatch = myLoopHead.LatchNode;

                            // does the then branch goto the loop latch?
                            if (oEdges[StructureNode.THEN].IsAncestorOf(myLoopLatch) || oEdges[StructureNode.THEN] == myLoopLatch)
                            {
                                curNode.UnstructType = UnstructuredType.JumpInOutLoop;
                                curNode.CondType = condType.IfElse;
                            }
                            // does the else branch goto the loop latch?
                            else if (oEdges[StructureNode.ELSE].IsAncestorOf(myLoopLatch) || oEdges[StructureNode.ELSE] == myLoopLatch)
                            {
                                curNode.UnstructType = UnstructuredType.JumpInOutLoop;
                                curNode.CondType = condType.IfThen;
                            }
                        }

                        if (curNode.UnstructType == UnstructuredType.Structured && follLoopHead != null)
                        // find the branch that the loop head is on for a jump into a loop body. If a branch has
                        // already been found, then it will match this one anyway
                        {
                            // does the else branch goto the loop head?
                            if (oEdges[StructureNode.THEN].IsAncestorOf(follLoopHead) || oEdges[StructureNode.THEN] == follLoopHead)
                            {
                                curNode.UnstructType = UnstructuredType.JumpInOutLoop;
                                curNode.CondType = condType.IfElse;
                            }
                            // does the else branch goto the loop head?
                            else if (oEdges[StructureNode.ELSE].IsAncestorOf(follLoopHead) || oEdges[StructureNode.ELSE] == follLoopHead)
                            {
                                curNode.UnstructType = UnstructuredType.JumpInOutLoop;
                                curNode.CondType = condType.IfThen;
                            }
                        }
                    }

                    // this is a jump into a case body if either of its children don't have the same
                    // same case header as itself
                    if (curNode.UnstructType == UnstructuredType.Structured &&
                         (curNode.CaseHead != curNode.OutEdges[StructureNode.THEN].CaseHead ||
                          curNode.CaseHead != curNode.OutEdges[StructureNode.ELSE].CaseHead))
                    {
                        StructureNode myCaseHead = curNode.CaseHead;
                        StructureNode thenCaseHead = curNode.OutEdges[StructureNode.THEN].CaseHead;
                        StructureNode elseCaseHead = curNode.OutEdges[StructureNode.ELSE].CaseHead;
                        if (thenCaseHead == myCaseHead && (myCaseHead == null || elseCaseHead != myCaseHead.CondFollow))
                        {
                            curNode.UnstructType = UnstructuredType.JumpIntoCase;
                            curNode.CondType = condType.IfElse;
                        }
                        else if (elseCaseHead == myCaseHead && (myCaseHead == null || thenCaseHead != myCaseHead.CondFollow))
                        {
                            curNode.UnstructType = UnstructuredType.JumpIntoCase;
                            curNode.CondType = condType.IfThen;
                        }
                    }
                }

                // for 2 way conditional headers that don't have a follow (i.e. are the source of a back
                // edge) and haven't been structured as latching nodes, set their follow to be the
                // non-back edge child.
                if (curNode.GetStructType() == structType.Cond && curNode.CondFollow == null &&
                     curNode.UnstructType == UnstructuredType.Structured && curNode.CondType != condType.Case)
                {
                    // latching nodes will already have been reset to Seq structured type
                    Debug.Assert(HasABackEdge(curNode));

                    if (curNode.HasBackEdgeTo(curNode.OutEdges[StructureNode.THEN]))
                    {
                        curNode.CondType = condType.IfThen;
                        curNode.CondFollow = curNode.OutEdges[StructureNode.ELSE];
                    }
                    else
                    {
                        curNode.CondType = condType.IfElse;
                        curNode.CondFollow = curNode.OutEdges[StructureNode.THEN];
                    }
                }
            }
        }

        // Structures all conditional headers (i.e. nodes with more than one outedge)
        private void StructConds(ProcedureStructure curProc)
        {
            List<StructureNode> order = curProc.Ordering;

            // Process the nodes in order
            for (int i = 0; i < order.Count; i++)
            {
                StructureNode curNode = order[i];

                // does the current node have more than one out edge?
                if (curNode.OutEdges.Count > 1)
                {
                    // if the current conditional header is a two way node and has a back edge, 
                    // then it won't have a follow
                    if (HasABackEdge(curNode) && curNode.BlockType == bbType.cBranch)
                    {
                        curNode.SetStructType(structType.Cond);
                        continue;
                    }

                    // set the follow of a node to be its immediate post dominator
                    curNode.CondFollow = curNode.ImmPDom;

                    // set the structured type of this node
                    curNode.SetStructType(structType.Cond);

                    // if this is an bbType.nway header, then we have to tag each of the nodes
                    // within the body of the bbType.nway subgraph
                    if (curNode.CondType == condType.Case)
                    {
                        CaseFinder cf = new CaseFinder(curNode, curNode.CondFollow);
                        cf.SetCaseHead(curNode);
                    }
                }
            }
        }

        private bool HasABackEdge(StructureNode curNode)
        {
            for (int i = 0; i < curNode.OutEdges.Count; i++)
                if (curNode.HasBackEdgeTo(curNode.OutEdges[i]))
                    return true;
            return false;
        }


        public void Structure(Procedure proc)
        {
            ProcedureStructureBuilder cfgs = new ProcedureStructureBuilder();

            Dictionary<Block, StructureNode> blockNodes = new Dictionary<Block, StructureNode>();
            cfgs.BuildNodes(proc, blockNodes);
            cfgs.DefineEdges(proc, blockNodes);
            ProcedureStructure curProc = cfgs.DefineCfgs(proc, blockNodes);
            cfgs.SetTimeStamps(curProc);

            cfgs.BuildDerivedSequences(curProc);

            FindStructures(curProc);

            GenerateHighLevelCode(curProc, proc.Body);
        }

        public void FindStructures(ProcedureStructure curProc)
        {
            PostDominatorGraph g = new PostDominatorGraph();
            g.FindImmediatePostDominators(curProc);
            StructConds(curProc);
            StructLoops(curProc);
            DetectUnstructuredConditionals(curProc);
        }

        private void StructLoops(ProcedureStructure curProc)
        {
            for (int gLevel = 0; gLevel < curProc.DerivedGraphs.Count; gLevel++)
            {
                DerivedGraph curGraph = curProc.DerivedGraphs[gLevel];

                // process each of the intervals in the current derived graph
                foreach (IntNode curInt in curGraph.Intervals)
                {

                    // find the G0 basic block node at the head of this interval
                    StructureNode headNode = curInt;
                    for (int k = 0; k <= gLevel; k++)
                        headNode = ((IntNode) headNode).Nodes[0];

                    // find the cfg nodes that belong in the current interval.
                    bool[] cfgNodes = new bool[curProc.Nodes.Count];

                    curInt.FindNodesInInt(cfgNodes, gLevel);

                    StructureNode latch = FindGreatestEnclosingBackEdgeInInterval(headNode, cfgNodes);

                    // if this is a loop header (i.e. a latch was found) then tag the nodes in the loop
                    // and determine its type
                    if (latch != null)
                    {
                        // ensure that the latch does not belong to another loop
                        if (latch.LoopHead == null)
                        {
                            CreateLoop(curProc, headNode, cfgNodes, latch);
                        }
                    }
                }
            }
        }

        private StructureNode FindGreatestEnclosingBackEdgeInInterval(StructureNode headNode, bool[] cfgNodes)
        {
            StructureNode latch = null;
            // find the greatest enclosing back edge (if any) from a node within the same interval
            for (int k = 0; k < headNode.InEdges.Count; k++)
            {
                StructureNode pred = headNode.InEdges[k];
                if (pred.HasBackEdgeTo(headNode) && cfgNodes[pred.Order] &&
                    (latch == null || latch.Order > pred.Order))
                    latch = pred;
            }
            return latch;
        }

        private void CreateLoop(ProcedureStructure curProc, StructureNode headNode, bool[] cfgNodes, StructureNode latch)
        {
            // define the map that maps each node to whether or not it is within the current loop
            bool[] loopNodes = new bool[curProc.Nodes.Count];

            // if the head node has already been determined as a loop header then the nodes
            // within this loop have to be untagged and the latch reset to its original type
            if (headNode.LatchNode != null)
            {
                StructureNode oldLatch = headNode.LatchNode;

                // reset the latch node's structured class. Only need to do this for a 2 way latch
                if (oldLatch.BlockType == bbType.cBranch)
                    oldLatch.SetStructType(structType.Cond);

                // untag the nodes
                for (int i = headNode.Order - 1; i >= oldLatch.Order; i--)
                    if (curProc.Ordering[i].LoopHead == headNode)
                        curProc.Ordering[i].LoopHead = null;
            }

            headNode.LatchNode = latch;

            // the latching node will already have been structured as a conditional header. If it is not
            // also the loop header (i.e. the loop is over more than one block) then reset
            // it to be a sequential node otherwise it will be correctly set as a loop header only later
            if (latch != headNode)
                latch.SetStructType(structType.Seq);

            // set the structured type of this node
            headNode.SetStructType(structType.Loop);

            curProc.Dump();

            LoopFinder lf = new LoopFinder();
            lf.TagNodesInLoop(headNode, curProc.Ordering, cfgNodes, loopNodes);
            lf.DetermineLoopType(headNode);
            lf.FindLoopFollow(headNode, curProc.Ordering, loopNodes);
        }

        // generate the structured HLL code and only perform the goto removal post
        // processor if required by the command line arguments
        public void CodeGen(ProcedureStructure curProc, string fname)
        {
            using (TextWriter outFile = new StreamWriter(fname + ".hll"))
            {
                // write out procedure header
                outFile.WriteLine("{0}()", curProc.Name);
                outFile.WriteLine("{");

                List<AbsynStatement> stms = new List<AbsynStatement>();
                GenerateHighLevelCode(curProc, stms);

                CodeFormatter cf = new CodeFormatter(outFile);
                cf.WriteStatementList(stms);

                // write out procedure tail
                outFile.WriteLine("}");
            }
        }

        public void GenerateHighLevelCode(ProcedureStructure curProc, List<AbsynStatement> stms)
        {
            List<StructureNode> followSet = new List<StructureNode>();
            List<StructureNode> gotoSet = new List<StructureNode>();

            AbsynCodeGenerator cg = new AbsynCodeGenerator();
            AbsynStatementEmitter emitter = new AbsynStatementEmitter(stms);
            cg.WriteCode(curProc.EntryNode, 1, null, followSet, gotoSet, emitter);
        }

    }

    public class StructureAnalysisOld
    {
        private Procedure proc;
        private DominatorGraph domGraph;

        private static TraceSwitch trace = new TraceSwitch("CodeStructure", "Traces the flow of code structuring");

        public StructureAnalysisOld(Procedure proc)
        {
            int cBlocks = proc.RpoBlocks.Count;
            this.proc = proc;
            domGraph = new DominatorGraph(proc);
        }

        private BitSet AllBlocks(Procedure proc)
        {
            BitSet b = proc.CreateBlocksBitset();
            b.SetAll(true);
#if BOGUS
			for (int i = 0; i < proc.RpoBlocks.Count; ++i)
			{
				Block block = proc.RpoBlocks[i];
				if (block.Statements.Count > 0)
					b[i] = true;
			}
#endif
            return b;
        }

        private void FindLoops()
        {
            DominatorGraph dom = new DominatorGraph(proc);
            //			IntervalFinder intf = new IntervalFinder(proc);
            //while (intf.Intervals.Count != intCount)
            //{
            //    intCount = intf.Intervals.Count;
            //    foreach (Interval I in intf.Intervals)
            //    {
            //        LoopFinder lrw = new LoopFinder(proc, dom);
            //        Loop loop = lrw.FindLoop(I);
            //        if (loop != null)
            //            lrw.BuildLoop(loop);
            //    }
            //    proc.Dump(trace.TraceVerbose, false);
            //    dom = new DominatorGraph(proc);
            //    intf = new IntervalFinder(proc);
            //} 
        }

        public void FindStructures()
        {
            CompoundConditionCoalescer ccc = new CompoundConditionCoalescer(proc);
            ccc.Transform();
            Debug.WriteLineIf(trace.TraceWarning, "Finding structure in " + proc.Name);
            FindLoops();
            Linearizer lin = new Linearizer(proc, new BlockLinearizer(null));
            lin.ProcedureExit = proc.ExitBlock;
            proc.Body.AddRange(lin.Linearize(AllBlocks(proc), false));
        }


    }
}