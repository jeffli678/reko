// TLCS-90.h
// Generated by decompiling TLCS-90.corpus
// using Reko decompiler version 0.6.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (union "Eq_2" (byte u0) (word16 u1))
	T_2 (in a : Eq_2)
	T_7 (in Mem4[null + 0x0000:byte] : byte)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in a : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_3: (in wArg00 : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_4: (in 0000 : ptr16)
  Class: Eq_4
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_7 t0000)))
T_5: (in 0x0000 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in null + 0x0000 : word16)
  Class: Eq_6
  DataType: ptr16
  OrigDataType: ptr16
T_7: (in Mem4[null + 0x0000:byte] : byte)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: byte
*/
typedef struct Globals {
} Eq_1;

typedef union Eq_2 {
	byte u0;
	word16 u1;
} Eq_2;

