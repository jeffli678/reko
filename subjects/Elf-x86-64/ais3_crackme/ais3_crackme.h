// ais3_crackme.h
// Generated by decompiling ais3_crackme
// using Reko decompiler version 0.6.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4005C5 Eq_17 t4005C5) (400620 Eq_20 t400620) (4006B0 Eq_21 t4006B0) (600DF8 (arr Eq_299) a600DF8) (600E08 word64 qw600E08) (600FE0 word64 qw600FE0) (601038 byte b601038))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in call_gmon_start : ptr64)
	T_3 (in signature of call_gmon_start : void)
Eq_6: (fn void ())
	T_6 (in rdx : (ptr Eq_6))
	T_22 (in rtld_fini : (ptr (fn void ())))
Eq_9: (fn void (ptr64))
	T_9 (in __align : ptr64)
Eq_15: (fn int32 ((ptr Eq_17), Eq_18, (ptr (ptr char)), (ptr Eq_20), (ptr Eq_21), (ptr Eq_6), (ptr void)))
	T_15 (in __libc_start_main : ptr64)
	T_16 (in signature of __libc_start_main : void)
Eq_17: (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))
	T_17 (in main : (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))))
	T_24 (in 0x00000000004005C5 : word64)
Eq_18: (union "Eq_18" (int32 u0) (word64 u1))
	T_18 (in argc : int32)
	T_25 (in qwArg00 : word64)
Eq_20: (fn void ())
	T_20 (in init : (ptr (fn void ())))
	T_27 (in 0x0000000000400620 : word64)
Eq_21: (fn void ())
	T_21 (in fini : (ptr (fn void ())))
	T_28 (in 0x00000000004006B0 : word64)
Eq_34: (fn void ())
	T_34 (in __hlt : ptr64)
Eq_50: (union "Eq_50" (word32 u0) ((ptr code) u1))
	T_50 (in eax : word32)
Eq_77: (union "Eq_77" (word32 u0) ((ptr code) u1))
	T_77 (in 0x00000000 : word32)
Eq_83: (union "Eq_83" (int64 u0) (uint64 u1))
	T_83 (in rdx_13 : Eq_83)
	T_87 (in rax_4 >> 0x0000000000000003 >> 0x000000000000003F : word64)
Eq_85: (union "Eq_85" (int64 u0) (uint64 u1))
	T_85 (in rax_4 >> 0x0000000000000003 : word64)
Eq_88: (union "Eq_88" (int64 u0) (uint64 u1))
	T_88 (in rax_4 >> 0x0000000000000003 : word64)
Eq_89: (union "Eq_89" (int64 u0) (uint64 u1))
	T_89 (in (rax_4 >> 0x0000000000000003) + rdx_13 : word64)
Eq_94: (union "Eq_94" (int64 u0) (uint64 u1))
	T_94 (in rdx_45 : Eq_94)
	T_96 (in DPB(rdx_13, 0x00000000, 0) : word64)
	T_97 (in 0x0000000000000000 : word64)
Eq_112: (union "Eq_112" (word32 u0) ((ptr code) u1))
	T_112 (in 0x00000000 : word32)
Eq_120: (fn word64 (word64))
	T_120 (in deregister_tm_clones : ptr64)
	T_121 (in signature of deregister_tm_clones : void)
Eq_141: (fn void (word64))
	T_141 (in register_tm_clones : ptr64)
	T_142 (in signature of register_tm_clones : void)
	T_165 (in register_tm_clones : ptr64)
Eq_144: (union "Eq_144" (word32 u0) ((ptr code) u1))
	T_144 (in 0x00000000 : word32)
	T_145 (in eax : word32)
Eq_156: (union "Eq_156" (ptr64 u0) (word32 u1))
	T_156 (in rbp : word64)
	T_157 (in dwLoc04 : word32)
	T_158 (in qwLoc04 : word64)
	T_159 (in DPB(qwLoc04, dwLoc04, 0) : word64)
	T_162 (in fp - 0x0000000000000004 : word64)
Eq_194: (struct "Eq_194" (0 byte b0000) (601020 byte b601020))
	T_194 (in DPB(rax_59, (int16) (byte) dwLoc08_104, 0) : word64)
Eq_230: (struct "Eq_230" (8 word64 qw0008))
	T_230 (in rsi : (ptr Eq_230))
Eq_239: (fn word64 (word64))
	T_239 (in verify : ptr64)
	T_240 (in signature of verify : void)
Eq_246: (fn int32 ((ptr char)))
	T_246 (in puts : ptr64)
	T_247 (in signature of puts : void)
	T_255 (in puts : ptr64)
	T_261 (in puts : ptr64)
Eq_266: (fn void ())
	T_266 (in _init : ptr64)
	T_267 (in signature of _init : void)
Eq_299: (union "Eq_299" (word32 u0) ((ptr code) u1))
	T_299 (in r12_7[rbx_47 * 0x00000008] : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in call_gmon_start : ptr64)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_4 ()))
T_3: (in signature of call_gmon_start : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in call_gmon_start() : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in rax : word64)
  Class: Eq_5
  DataType: word64
  OrigDataType: word64
T_6: (in rdx : (ptr Eq_6))
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn void ()))
T_7: (in qwArg00 : word64)
  Class: Eq_7
  DataType: word64
  OrigDataType: word64
T_8: (in dwArg04 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in __align : ptr64)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_13 (T_12)))
T_10: (in fp : ptr64)
  Class: Eq_10
  DataType: ptr64
  OrigDataType: ptr64
T_11: (in 0x0000000000000008 : word64)
  Class: Eq_11
  DataType: int64
  OrigDataType: int64
T_12: (in fp + 0x0000000000000008 : word64)
  Class: Eq_12
  DataType: ptr64
  OrigDataType: ptr64
T_13: (in __align(fp + 0x0000000000000008) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in rax_21 : word64)
  Class: Eq_14
  DataType: word64
  OrigDataType: word64
T_15: (in __libc_start_main : ptr64)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_32 (T_24, T_25, T_26, T_27, T_28, T_6, T_31)))
T_16: (in signature of __libc_start_main : void)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: 
T_17: (in main : (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: 
T_18: (in argc : int32)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: 
T_19: (in ubp_av : (ptr (ptr char)))
  Class: Eq_19
  DataType: (ptr (ptr char))
  OrigDataType: 
T_20: (in init : (ptr (fn void ())))
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: 
T_21: (in fini : (ptr (fn void ())))
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: 
T_22: (in rtld_fini : (ptr (fn void ())))
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: 
T_23: (in stack_end : (ptr void))
  Class: Eq_23
  DataType: (ptr void)
  OrigDataType: 
T_24: (in 0x00000000004005C5 : word64)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char)))))
T_25: (in qwArg00 : word64)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: (union (int32 u1) (word64 u0))
T_26: (in fp + 0x0000000000000008 : word64)
  Class: Eq_19
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (ptr char))
T_27: (in 0x0000000000400620 : word64)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn void ()))
T_28: (in 0x00000000004006B0 : word64)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn void ()))
T_29: (in 0x0000000000000004 : word64)
  Class: Eq_29
  DataType: int64
  OrigDataType: int64
T_30: (in fp + 0x0000000000000004 : word64)
  Class: Eq_30
  DataType: ptr64
  OrigDataType: ptr64
T_31: (in DPB(qwArg00, fp + 0x0000000000000004, 0) : word64)
  Class: Eq_23
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_32: (in __libc_start_main(&globals->t4005C5, qwArg00, fp + 0x0000000000000008, &globals->t400620, &globals->t4006B0, rdx, DPB(qwArg00, fp + 0x0000000000000004, 0)) : int32)
  Class: Eq_32
  DataType: int32
  OrigDataType: int32
T_33: (in DPB(rax, __libc_start_main(&globals->t4005C5, qwArg00, fp + 0x0000000000000008, &globals->t400620, &globals->t4006B0, rdx, DPB(qwArg00, fp + 0x0000000000000004, 0)), 0) : word64)
  Class: Eq_14
  DataType: word64
  OrigDataType: word64
T_34: (in __hlt : ptr64)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (fn T_35 ()))
T_35: (in __hlt() : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in rax_4 : word64)
  Class: Eq_36
  DataType: word64
  OrigDataType: word64
T_37: (in 0000000000600FE0 : ptr64)
  Class: Eq_37
  DataType: (ptr word64)
  OrigDataType: (ptr (struct (0 T_40 t0000)))
T_38: (in 0x0000000000000000 : word64)
  Class: Eq_38
  DataType: word64
  OrigDataType: word64
T_39: (in 0x0000000000600FE0 + 0x0000000000000000 : word64)
  Class: Eq_39
  DataType: ptr64
  OrigDataType: ptr64
T_40: (in Mem0[0x0000000000600FE0 + 0x0000000000000000:word64] : word64)
  Class: Eq_36
  DataType: word64
  OrigDataType: word64
T_41: (in 0x0000000000000000 : word64)
  Class: Eq_36
  DataType: word64
  OrigDataType: word64
T_42: (in rax_4 == 0x0000000000000000 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in rsp_17 : word64)
  Class: Eq_43
  DataType: word64
  OrigDataType: word64
T_44: (in SCZO_18 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in rax_19 : word64)
  Class: Eq_45
  DataType: word64
  OrigDataType: word64
T_46: (in SZO_20 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in C_21 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in Z_22 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in eax_23 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in eax : word32)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_51: (in rsp : ptr64)
  Class: Eq_51
  DataType: ptr64
  OrigDataType: word64
T_52: (in r8 : word64)
  Class: Eq_52
  DataType: word64
  OrigDataType: word64
T_53: (in rax : word64)
  Class: Eq_53
  DataType: word64
  OrigDataType: word64
T_54: (in 0x0060103F : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in DPB(rax, 0x0060103F, 0) : word64)
  Class: Eq_55
  DataType: uint64
  OrigDataType: uint64
T_56: (in 0x000000000000000E : word64)
  Class: Eq_55
  DataType: uint64
  OrigDataType: uint64
T_57: (in DPB(rax, 0x0060103F, 0) > 0x000000000000000E : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in rax_37 : word64)
  Class: Eq_58
  DataType: word64
  OrigDataType: word64
T_59: (in 0x00000000 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in DPB(rax, 0x00000000, 0) : word64)
  Class: Eq_58
  DataType: word64
  OrigDataType: word64
T_61: (in 0x0000000000000000 : word64)
  Class: Eq_58
  DataType: word64
  OrigDataType: word64
T_62: (in rax_37 == 0x0000000000000000 : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in fp : ptr64)
  Class: Eq_63
  DataType: ptr64
  OrigDataType: ptr64
T_64: (in 0x0000000000000004 : word64)
  Class: Eq_64
  DataType: int64
  OrigDataType: int64
T_65: (in fp + 0x0000000000000004 : word64)
  Class: Eq_51
  DataType: ptr64
  OrigDataType: ptr64
T_66: (in rsp_44 : ptr64)
  Class: Eq_51
  DataType: ptr64
  OrigDataType: word64
T_67: (in eax_45 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in rbp_46 : word64)
  Class: Eq_68
  DataType: word64
  OrigDataType: word64
T_69: (in r8_47 : word64)
  Class: Eq_69
  DataType: word64
  OrigDataType: word64
T_70: (in SCZO_48 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in rax_49 : word64)
  Class: Eq_71
  DataType: word64
  OrigDataType: word64
T_72: (in CZ_50 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in SZO_51 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in C_52 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in Z_53 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in edi_54 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in 0x00000000 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_78: (in r8 : word64)
  Class: Eq_78
  DataType: word64
  OrigDataType: word64
T_79: (in rax_4 : int64)
  Class: Eq_79
  DataType: int64
  OrigDataType: int64
T_80: (in rax : word64)
  Class: Eq_80
  DataType: word64
  OrigDataType: word64
T_81: (in 0x00601038 : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in DPB(rax, 0x00601038, 0) : word64)
  Class: Eq_79
  DataType: int64
  OrigDataType: word64
T_83: (in rdx_13 : Eq_83)
  Class: Eq_83
  DataType: Eq_83
  OrigDataType: (union (int64 u1) (uint64 u0))
T_84: (in 0x0000000000000003 : word64)
  Class: Eq_84
  DataType: word64
  OrigDataType: word64
T_85: (in rax_4 >> 0x0000000000000003 : word64)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: (union (int64 u0) (uint64 u1))
T_86: (in 0x000000000000003F : word64)
  Class: Eq_86
  DataType: word64
  OrigDataType: word64
T_87: (in rax_4 >> 0x0000000000000003 >> 0x000000000000003F : word64)
  Class: Eq_83
  DataType: Eq_83
  OrigDataType: uint64
T_88: (in rax_4 >> 0x0000000000000003 : word64)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: (union (int64 u1) (uint64 u0))
T_89: (in (rax_4 >> 0x0000000000000003) + rdx_13 : word64)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: (union (int64 u1) (uint64 u0))
T_90: (in 0x0000000000000001 : word64)
  Class: Eq_90
  DataType: word64
  OrigDataType: word64
T_91: (in (rax_4 >> 0x0000000000000003) + rdx_13 >> 0x0000000000000001 : word64)
  Class: Eq_91
  DataType: int64
  OrigDataType: int64
T_92: (in 0x0000000000000000 : word64)
  Class: Eq_91
  DataType: int64
  OrigDataType: word64
T_93: (in (rax_4 >> 0x0000000000000003) + rdx_13 >> 0x0000000000000001 != 0x0000000000000000 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in rdx_45 : Eq_94)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: (union (int64 u1) (uint64 u0))
T_95: (in 0x00000000 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_96: (in DPB(rdx_13, 0x00000000, 0) : word64)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: (union (int64 u1) (uint64 u0))
T_97: (in 0x0000000000000000 : word64)
  Class: Eq_94
  DataType: int64
  OrigDataType: word64
T_98: (in rdx_45 == 0x0000000000000000 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in rsp_53 : word64)
  Class: Eq_99
  DataType: word64
  OrigDataType: word64
T_100: (in eax_54 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in rbp_55 : word64)
  Class: Eq_101
  DataType: word64
  OrigDataType: word64
T_102: (in r8_56 : word64)
  Class: Eq_102
  DataType: word64
  OrigDataType: word64
T_103: (in SCZO_57 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in rax_58 : word64)
  Class: Eq_104
  DataType: word64
  OrigDataType: word64
T_105: (in rdx_59 : word64)
  Class: Eq_105
  DataType: word64
  OrigDataType: word64
T_106: (in Z_60 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in edx_61 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in SZO_62 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in C_63 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in rsi_64 : word64)
  Class: Eq_110
  DataType: word64
  OrigDataType: word64
T_111: (in edi_65 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in 0x00000000 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_113: (in r8 : word64)
  Class: Eq_52
  DataType: word64
  OrigDataType: word64
T_114: (in 0000000000601038 : ptr64)
  Class: Eq_114
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_117 t0000)))
T_115: (in 0x0000000000000000 : word64)
  Class: Eq_115
  DataType: word64
  OrigDataType: word64
T_116: (in 0x0000000000601038 + 0x0000000000000000 : word64)
  Class: Eq_116
  DataType: ptr64
  OrigDataType: ptr64
T_117: (in Mem0[0x0000000000601038 + 0x0000000000000000:byte] : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in 0x00 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_119: (in *&globals->b601038 != 0x00 : bool)
  Class: Eq_119
  DataType: bool
  OrigDataType: bool
T_120: (in deregister_tm_clones : ptr64)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: (ptr (fn T_122 (T_113)))
T_121: (in signature of deregister_tm_clones : void)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: 
T_122: (in deregister_tm_clones(r8) : word64)
  Class: Eq_122
  DataType: word64
  OrigDataType: word64
T_123: (in 0x01 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in 0000000000601038 : ptr64)
  Class: Eq_124
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_127 t0000)))
T_125: (in 0x0000000000000000 : word64)
  Class: Eq_125
  DataType: word64
  OrigDataType: word64
T_126: (in 0x0000000000601038 + 0x0000000000000000 : word64)
  Class: Eq_126
  DataType: ptr64
  OrigDataType: ptr64
T_127: (in Mem17[0x0000000000601038 + 0x0000000000000000:byte] : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_128: (in r8 : word64)
  Class: Eq_78
  DataType: word64
  OrigDataType: word64
T_129: (in fp : ptr64)
  Class: Eq_129
  DataType: ptr64
  OrigDataType: ptr64
T_130: (in rsp : word64)
  Class: Eq_129
  DataType: ptr64
  OrigDataType: ptr64
T_131: (in 0000000000600E08 : ptr64)
  Class: Eq_131
  DataType: (ptr word64)
  OrigDataType: (ptr (struct (0 T_134 t0000)))
T_132: (in 0x0000000000000000 : word64)
  Class: Eq_132
  DataType: word64
  OrigDataType: word64
T_133: (in 0x0000000000600E08 + 0x0000000000000000 : word64)
  Class: Eq_133
  DataType: ptr64
  OrigDataType: ptr64
T_134: (in Mem0[0x0000000000600E08 + 0x0000000000000000:word64] : word64)
  Class: Eq_134
  DataType: word64
  OrigDataType: word64
T_135: (in 0x0000000000000000 : word64)
  Class: Eq_135
  DataType: word64
  OrigDataType: word64
T_136: (in *&globals->qw600E08 - 0x0000000000000000 : word64)
  Class: Eq_136
  DataType: word64
  OrigDataType: word64
T_137: (in cond(*&globals->qw600E08 - 0x0000000000000000) : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in SCZO : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_139: (in Z : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_140: (in Test(EQ,Z) : bool)
  Class: Eq_140
  DataType: Eq_140
  OrigDataType: 
T_141: (in register_tm_clones : ptr64)
  Class: Eq_141
  DataType: (ptr Eq_141)
  OrigDataType: (ptr (fn T_143 (T_128)))
T_142: (in signature of register_tm_clones : void)
  Class: Eq_141
  DataType: (ptr Eq_141)
  OrigDataType: 
T_143: (in register_tm_clones(r8) : void)
  Class: Eq_143
  DataType: void
  OrigDataType: void
T_144: (in 0x00000000 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in eax : word32)
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: word32
T_146: (in rax : word64)
  Class: Eq_146
  DataType: ui64
  OrigDataType: ui64
T_147: (in DPB(rax, eax, 0) : word64)
  Class: Eq_146
  DataType: ui64
  OrigDataType: word64
T_148: (in rax & rax : word64)
  Class: Eq_148
  DataType: ui64
  OrigDataType: ui64
T_149: (in cond(rax & rax) : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_150: (in SZO : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_151: (in false : bool)
  Class: Eq_151
  DataType: bool
  OrigDataType: bool
T_152: (in C : byte)
  Class: Eq_151
  DataType: bool
  OrigDataType: bool
T_153: (in Test(EQ,Z) : bool)
  Class: Eq_153
  DataType: Eq_153
  OrigDataType: 
T_154: (in 0x0000000000000004 : word64)
  Class: Eq_154
  DataType: ui64
  OrigDataType: ui64
T_155: (in fp - 0x0000000000000004 : word64)
  Class: Eq_129
  DataType: ptr64
  OrigDataType: ptr64
T_156: (in rbp : word64)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: ptr64
T_157: (in dwLoc04 : word32)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: (union (ptr64 u0) (word32 u1))
T_158: (in qwLoc04 : word64)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: word64
T_159: (in DPB(qwLoc04, dwLoc04, 0) : word64)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: word64
T_160: (in 0x00600E08 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in edi : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_162: (in fp - 0x0000000000000004 : word64)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: ptr64
T_163: (in 0x0000000000000004 : word64)
  Class: Eq_163
  DataType: int64
  OrigDataType: int64
T_164: (in fp + 0x0000000000000004 : word64)
  Class: Eq_129
  DataType: ptr64
  OrigDataType: ptr64
T_165: (in register_tm_clones : ptr64)
  Class: Eq_141
  DataType: (ptr Eq_141)
  OrigDataType: (ptr (fn T_166 (T_128)))
T_166: (in register_tm_clones(r8) : void)
  Class: Eq_143
  DataType: void
  OrigDataType: void
T_167: (in rax : (ptr byte))
  Class: Eq_167
  DataType: (ptr byte)
  OrigDataType: word64
T_168: (in rdi : word64)
  Class: Eq_168
  DataType: word64
  OrigDataType: word64
T_169: (in dwLoc08_104 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in 0x00000000 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_171: (in rax_100 : (ptr byte))
  Class: Eq_167
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_177 t0000)))
T_172: (in rax_27 : (ptr byte))
  Class: Eq_172
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_177 t0000)))
T_173: (in (int64) dwLoc08_104 : int64)
  Class: Eq_173
  DataType: int64
  OrigDataType: int64
T_174: (in rdi + (int64) dwLoc08_104 : word64)
  Class: Eq_172
  DataType: (ptr byte)
  OrigDataType: word64
T_175: (in 0x0000000000000000 : word64)
  Class: Eq_175
  DataType: word64
  OrigDataType: word64
T_176: (in rax_27 + 0x0000000000000000 : word64)
  Class: Eq_176
  DataType: word64
  OrigDataType: word64
T_177: (in Mem0[rax_27 + 0x0000000000000000:byte] : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in (word32) *rax_27 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in (byte) (word32) *rax_27 : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_180: (in 0x00 : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_181: (in (byte) (word32) *rax_27 != 0x00 : bool)
  Class: Eq_181
  DataType: bool
  OrigDataType: bool
T_182: (in rax_59 : (ptr byte))
  Class: Eq_182
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_188 t0000)))
T_183: (in (int64) dwLoc08_104 : int64)
  Class: Eq_183
  DataType: int64
  OrigDataType: int64
T_184: (in rdi + (int64) dwLoc08_104 : word64)
  Class: Eq_182
  DataType: (ptr byte)
  OrigDataType: word64
T_185: (in al_64 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in 0x0000000000000000 : word64)
  Class: Eq_186
  DataType: word64
  OrigDataType: word64
T_187: (in rax_59 + 0x0000000000000000 : word64)
  Class: Eq_187
  DataType: word64
  OrigDataType: word64
T_188: (in Mem0[rax_59 + 0x0000000000000000:byte] : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_189: (in (word32) *rax_59 : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in dwLoc08_104 ^ (word32) (*rax_59) : word32)
  Class: Eq_190
  DataType: ui32
  OrigDataType: ui32
T_191: (in (byte) (dwLoc08_104 ^ (word32) (*rax_59)) : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_192: (in (byte) dwLoc08_104 : byte)
  Class: Eq_192
  DataType: byte
  OrigDataType: byte
T_193: (in (int16) (byte) dwLoc08_104 : int16)
  Class: Eq_193
  DataType: int16
  OrigDataType: int16
T_194: (in DPB(rax_59, (int16) (byte) dwLoc08_104, 0) : word64)
  Class: Eq_194
  DataType: (ptr Eq_194)
  OrigDataType: (ptr (struct (0 T_188 t0000) (601020 T_197 t601020)))
T_195: (in 0x0000000000601020 : word64)
  Class: Eq_195
  DataType: word64
  OrigDataType: word64
T_196: (in DPB(rax_59, (int16) (byte) dwLoc08_104, 0) + 0x0000000000601020 : word64)
  Class: Eq_196
  DataType: ptr64
  OrigDataType: ptr64
T_197: (in Mem0[DPB(rax_59, (int16) (byte) dwLoc08_104, 0) + 0x0000000000601020:byte] : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_198: (in (word32) DPB(rax_59, (int16) (byte) dwLoc08_104, 0)[6295584] : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_199: (in (byte) (word32) DPB(rax_59, (int16) (byte) dwLoc08_104, 0)[6295584] : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_200: (in (word32) al_64 : word32)
  Class: Eq_200
  DataType: int32
  OrigDataType: int32
T_201: (in 0x00000008 : word32)
  Class: Eq_201
  DataType: word32
  OrigDataType: word32
T_202: (in 0x00000009 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in dwLoc08_104 ^ 0x00000009 : word32)
  Class: Eq_203
  DataType: ui32
  OrigDataType: ui32
T_204: (in 0x00000003 : word32)
  Class: Eq_204
  DataType: ui32
  OrigDataType: ui32
T_205: (in (dwLoc08_104 ^ 0x00000009) & 0x00000003 : word32)
  Class: Eq_205
  DataType: ui32
  OrigDataType: ui32
T_206: (in 0x00000008 - ((dwLoc08_104 ^ 0x00000009) & 0x00000003) : word32)
  Class: Eq_206
  DataType: word32
  OrigDataType: word32
T_207: (in (byte) (0x00000008 - ((dwLoc08_104 ^ 0x00000009) & 0x00000003)) : byte)
  Class: Eq_207
  DataType: byte
  OrigDataType: byte
T_208: (in (word32) al_64 >> (byte) (0x00000008 - ((dwLoc08_104 ^ 0x00000009) & 0x00000003)) : word32)
  Class: Eq_208
  DataType: int32
  OrigDataType: int32
T_209: (in (word32) al_64 : word32)
  Class: Eq_209
  DataType: ui32
  OrigDataType: ui32
T_210: (in 0x00000009 : word32)
  Class: Eq_210
  DataType: word32
  OrigDataType: word32
T_211: (in dwLoc08_104 ^ 0x00000009 : word32)
  Class: Eq_211
  DataType: ui32
  OrigDataType: ui32
T_212: (in 0x00000003 : word32)
  Class: Eq_212
  DataType: ui32
  OrigDataType: ui32
T_213: (in (dwLoc08_104 ^ 0x00000009) & 0x00000003 : word32)
  Class: Eq_213
  DataType: ui32
  OrigDataType: ui32
T_214: (in (byte) ((dwLoc08_104 ^ 0x00000009) & 0x00000003) : byte)
  Class: Eq_214
  DataType: byte
  OrigDataType: byte
T_215: (in (word32) al_64 << (byte) ((dwLoc08_104 ^ 0x00000009) & 0x00000003) : word32)
  Class: Eq_215
  DataType: ui32
  OrigDataType: ui32
T_216: (in (word32) al_64 >> (byte) (0x00000008 - ((dwLoc08_104 ^ 0x00000009) & 0x00000003)) | (word32) al_64 << (byte) ((dwLoc08_104 ^ 0x00000009) & 0x00000003) : word32)
  Class: Eq_216
  DataType: ui32
  OrigDataType: ui32
T_217: (in (byte) ((word32) al_64 >> (byte) (0x00000008 - ((dwLoc08_104 ^ 0x00000009) & 0x00000003)) | (word32) al_64 << (byte) ((dwLoc08_104 ^ 0x00000009) & 0x00000003)) : byte)
  Class: Eq_217
  DataType: byte
  OrigDataType: byte
T_218: (in 0x08 : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in (byte) ((word32) al_64 >> (byte) (0x00000008 - ((dwLoc08_104 ^ 0x00000009) & 0x00000003)) | (word32) al_64 << (byte) ((dwLoc08_104 ^ 0x00000009) & 0x00000003)) + 0x08 : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_220: (in (byte) (word32) DPB(rax_59, (int16) (byte) dwLoc08_104, 0)[6295584] == (byte) ((word32) al_64 >> (byte) (0x00000008 - ((dwLoc08_104 ^ 0x00000009) & 0x00000003)) | (word32) al_64 << (byte) ((dwLoc08_104 ^ 0x00000009) & 0x00000003)) + 0x08 : bool)
  Class: Eq_220
  DataType: bool
  OrigDataType: bool
T_221: (in 0x00000017 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_222: (in dwLoc08_104 == 0x00000017 : bool)
  Class: Eq_222
  DataType: bool
  OrigDataType: bool
T_223: (in (word32) (dwLoc08_104 == 0x00000017) : word32)
  Class: Eq_223
  DataType: word32
  OrigDataType: word32
T_224: (in DPB(rax_27, (word32) (dwLoc08_104 == 0x00000017), 0) : word64)
  Class: Eq_167
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_177 t0000)))
T_225: (in 0x00000001 : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in dwLoc08_104 + 0x00000001 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_227: (in 0x00000000 : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_228: (in DPB(rax_59, 0x00000000, 0) : word64)
  Class: Eq_167
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_188 t0000)))
T_229: (in rax : word64)
  Class: Eq_229
  DataType: word64
  OrigDataType: word64
T_230: (in rsi : (ptr Eq_230))
  Class: Eq_230
  DataType: (ptr Eq_230)
  OrigDataType: (ptr (struct (8 T_237 t0008)))
T_231: (in edi : word32)
  Class: Eq_231
  DataType: word32
  OrigDataType: word32
T_232: (in 0x00000002 : word32)
  Class: Eq_231
  DataType: word32
  OrigDataType: word32
T_233: (in edi == 0x00000002 : bool)
  Class: Eq_233
  DataType: bool
  OrigDataType: bool
T_234: (in rax_37 : word64)
  Class: Eq_168
  DataType: word64
  OrigDataType: word64
T_235: (in 0x0000000000000008 : word64)
  Class: Eq_235
  DataType: word64
  OrigDataType: word64
T_236: (in rsi + 0x0000000000000008 : word64)
  Class: Eq_236
  DataType: word64
  OrigDataType: word64
T_237: (in Mem0[rsi + 0x0000000000000008:word64] : word64)
  Class: Eq_168
  DataType: word64
  OrigDataType: word64
T_238: (in rax_39 : word64)
  Class: Eq_238
  DataType: word64
  OrigDataType: word64
T_239: (in verify : ptr64)
  Class: Eq_239
  DataType: (ptr Eq_239)
  OrigDataType: (ptr (fn T_241 (T_234)))
T_240: (in signature of verify : void)
  Class: Eq_239
  DataType: (ptr Eq_239)
  OrigDataType: 
T_241: (in verify(rax_37) : word64)
  Class: Eq_238
  DataType: word64
  OrigDataType: word64
T_242: (in (word32) rax_39 : word32)
  Class: Eq_242
  DataType: word32
  OrigDataType: word32
T_243: (in 0x00000000 : word32)
  Class: Eq_242
  DataType: word32
  OrigDataType: word32
T_244: (in (word32) rax_39 == 0x00000000 : bool)
  Class: Eq_244
  DataType: bool
  OrigDataType: bool
T_245: (in rax_30 : word64)
  Class: Eq_245
  DataType: word64
  OrigDataType: word64
T_246: (in puts : ptr64)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: (ptr (fn T_252 (T_251)))
T_247: (in signature of puts : void)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: 
T_248: (in s : (ptr char))
  Class: Eq_248
  DataType: (ptr char)
  OrigDataType: 
T_249: (in rdi : word64)
  Class: Eq_249
  DataType: word64
  OrigDataType: word64
T_250: (in 0x004006C8 : word32)
  Class: Eq_250
  DataType: word32
  OrigDataType: word32
T_251: (in DPB(rdi, 0x004006C8, 0) : word64)
  Class: Eq_248
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_252: (in puts(DPB(rdi, 0x004006C8, 0)) : int32)
  Class: Eq_252
  DataType: int32
  OrigDataType: int32
T_253: (in DPB(rax, puts(DPB(rdi, 0x004006C8, 0)), 0) : word64)
  Class: Eq_245
  DataType: word64
  OrigDataType: word64
T_254: (in rax_53 : word64)
  Class: Eq_254
  DataType: word64
  OrigDataType: word64
T_255: (in puts : ptr64)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: (ptr (fn T_258 (T_257)))
T_256: (in 0x00400718 : word32)
  Class: Eq_256
  DataType: word32
  OrigDataType: word32
T_257: (in DPB(rax_37, 0x00400718, 0) : word64)
  Class: Eq_248
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_258: (in puts(DPB(rax_37, 0x00400718, 0)) : int32)
  Class: Eq_252
  DataType: int32
  OrigDataType: int32
T_259: (in DPB(rax_39, puts(DPB(rax_37, 0x00400718, 0)), 0) : word64)
  Class: Eq_254
  DataType: word64
  OrigDataType: word64
T_260: (in rax_50 : word64)
  Class: Eq_260
  DataType: word64
  OrigDataType: word64
T_261: (in puts : ptr64)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: (ptr (fn T_264 (T_263)))
T_262: (in 0x004006F0 : word32)
  Class: Eq_262
  DataType: word32
  OrigDataType: word32
T_263: (in DPB(rax_37, 0x004006F0, 0) : word64)
  Class: Eq_248
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_264: (in puts(DPB(rax_37, 0x004006F0, 0)) : int32)
  Class: Eq_252
  DataType: int32
  OrigDataType: int32
T_265: (in DPB(rax_39, puts(DPB(rax_37, 0x004006F0, 0)), 0) : word64)
  Class: Eq_260
  DataType: word64
  OrigDataType: word64
T_266: (in _init : ptr64)
  Class: Eq_266
  DataType: (ptr Eq_266)
  OrigDataType: (ptr (fn T_268 ()))
T_267: (in signature of _init : void)
  Class: Eq_266
  DataType: (ptr Eq_266)
  OrigDataType: 
T_268: (in _init() : void)
  Class: Eq_268
  DataType: void
  OrigDataType: void
T_269: (in r12_7 : (arr Eq_299))
  Class: Eq_269
  DataType: (ptr (arr Eq_299))
  OrigDataType: (ptr (struct (0 (arr T_303) a0000)))
T_270: (in 0000000000600DF8 : ptr64)
  Class: Eq_269
  DataType: (ptr (arr Eq_299))
  OrigDataType: ptr64
T_271: (in 0000000000600E00 : ptr64)
  Class: Eq_271
  DataType: ptr64
  OrigDataType: ptr64
T_272: (in 0x0000000000600E00 - r12_7 : word64)
  Class: Eq_272
  DataType: Eq_272
  OrigDataType: 
T_273: (in 0x0000000000000003 : word64)
  Class: Eq_273
  DataType: Eq_273
  OrigDataType: 
T_274: (in 0x0000000000600E00 - r12_7 >> 0x0000000000000003 : word64)
  Class: Eq_274
  DataType: Eq_274
  OrigDataType: 
T_275: (in 0x0000000000000000 : word64)
  Class: Eq_274
  DataType: Eq_274
  OrigDataType: 
T_276: (in 0x0000000000600E00 - r12_7 >> 0x0000000000000003 == 0x0000000000000000 : bool)
  Class: Eq_276
  DataType: Eq_276
  OrigDataType: 
T_277: (in rbx_47 : ui64)
  Class: Eq_277
  DataType: ui64
  OrigDataType: ui64
T_278: (in rbx : word64)
  Class: Eq_278
  DataType: word64
  OrigDataType: word64
T_279: (in 0x00000000 : word32)
  Class: Eq_279
  DataType: word32
  OrigDataType: word32
T_280: (in DPB(rbx, 0x00000000, 0) : word64)
  Class: Eq_277
  DataType: ui64
  OrigDataType: word64
T_281: (in rsp_57 : word64)
  Class: Eq_281
  DataType: word64
  OrigDataType: word64
T_282: (in rbp_58 : word64)
  Class: Eq_282
  DataType: word64
  OrigDataType: word64
T_283: (in r12_59 : word64)
  Class: Eq_283
  DataType: word64
  OrigDataType: word64
T_284: (in r13_60 : word64)
  Class: Eq_284
  DataType: word64
  OrigDataType: word64
T_285: (in r14_61 : word64)
  Class: Eq_285
  DataType: word64
  OrigDataType: word64
T_286: (in r15_62 : word64)
  Class: Eq_286
  DataType: word64
  OrigDataType: word64
T_287: (in rbx_63 : word64)
  Class: Eq_287
  DataType: word64
  OrigDataType: word64
T_288: (in SCZO_64 : byte)
  Class: Eq_288
  DataType: byte
  OrigDataType: byte
T_289: (in r13d_65 : word32)
  Class: Eq_289
  DataType: word32
  OrigDataType: word32
T_290: (in edi_66 : word32)
  Class: Eq_290
  DataType: word32
  OrigDataType: word32
T_291: (in rsi_67 : word64)
  Class: Eq_291
  DataType: word64
  OrigDataType: word64
T_292: (in rdx_68 : word64)
  Class: Eq_292
  DataType: word64
  OrigDataType: word64
T_293: (in SZO_69 : byte)
  Class: Eq_293
  DataType: byte
  OrigDataType: byte
T_294: (in C_70 : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_295: (in Z_71 : byte)
  Class: Eq_295
  DataType: byte
  OrigDataType: byte
T_296: (in ebx_72 : word32)
  Class: Eq_296
  DataType: word32
  OrigDataType: word32
T_297: (in 0x00000008 : word32)
  Class: Eq_297
  DataType: ui32
  OrigDataType: ui32
T_298: (in rbx_47 * 0x00000008 : word64)
  Class: Eq_298
  DataType: ui64
  OrigDataType: ui64
T_299: (in r12_7[rbx_47 * 0x00000008] : word32)
  Class: Eq_299
  DataType: Eq_299
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_300: (in 0x0000000000000001 : word64)
  Class: Eq_300
  DataType: word64
  OrigDataType: word64
T_301: (in rbx_63 + 0x0000000000000001 : word64)
  Class: Eq_282
  DataType: word64
  OrigDataType: word64
T_302: (in rbx_63 + 0x0000000000000001 != rbp_58 : bool)
  Class: Eq_302
  DataType: bool
  OrigDataType: bool
T_303:
  Class: Eq_303
  DataType: Eq_299
  OrigDataType: (struct 0008 (0 T_299 t0000))
*/
typedef struct Globals {
	Eq_17 t4005C5;	// 4005C5
	Eq_20 t400620;	// 400620
	Eq_21 t4006B0;	// 4006B0
	Eq_299 a600DF8[];	// 600DF8
	word64 qw600E08;	// 600E08
	word64 qw600FE0;	// 600FE0
	byte b601038;	// 601038
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_6)();

typedef void (Eq_9)(ptr64);

typedef int32 (Eq_15)( *, Eq_18, char * *,  *,  *,  *, void);

typedef int32 (Eq_17)(int32 rdi, char * * rsi, char * * rdx);

typedef union Eq_18 {
	int32 u0;
	word64 u1;
} Eq_18;

typedef void (Eq_20)();

typedef void (Eq_21)();

typedef void (Eq_34)();

typedef union Eq_50 {
	word32 u0;
	<anonymous> * u1;
} Eq_50;

typedef union Eq_77 {
	word32 u0;
	<anonymous> * u1;
} Eq_77;

typedef union Eq_83 {
	int64 u0;
	uint64 u1;
} Eq_83;

typedef union Eq_85 {
	int64 u0;
	uint64 u1;
} Eq_85;

typedef union Eq_88 {
	int64 u0;
	uint64 u1;
} Eq_88;

typedef union Eq_89 {
	int64 u0;
	uint64 u1;
} Eq_89;

typedef union Eq_94 {
	int64 u0;
	uint64 u1;
} Eq_94;

typedef union Eq_112 {
	word32 u0;
	<anonymous> * u1;
} Eq_112;

typedef word64 (Eq_120)(word64);

typedef void (Eq_141)(word64);

typedef union Eq_144 {
	word32 u0;
	<anonymous> * u1;
} Eq_144;

typedef union Eq_156 {
	ptr64 u0;
	word32 u1;
} Eq_156;

typedef struct Eq_194 {
	byte b0000;	// 0
	byte b601020;	// 601020
} Eq_194;

typedef struct Eq_230 {
	word64 qw0008;	// 8
} Eq_230;

typedef word64 (Eq_239)(word64);

typedef int32 (Eq_246)(char *);

typedef void (Eq_266)();

typedef union Eq_299 {
	word32 u0;
	<anonymous> * u1;
} Eq_299;

