// ais3_crackme.c
// Generated by decompiling ais3_crackme
// using Reko decompiler version 0.6.1.0.

#include "ais3_crackme.h"

void _init()
{
	call_gmon_start();
	return;
}

void _start(word64 rax,  * rdx, word64 qwArg00, word32 dwArg04)
{
	__align(fp + 0x08);
	word64 rax_21 = DPB(rax, __libc_start_main(&globals->t4005C5, qwArg00, fp + 0x08, &globals->t400620, &globals->t4006B0, rdx, DPB(qwArg00, fp + 0x04, 0)), 0);
	__hlt();
}

void call_gmon_start()
{
	word64 rax_4 = *&globals->qw600FE0;
	if (rax_4 != 0x00)
	{
		word64 rsp_17;
		byte SCZO_18;
		word64 rax_19;
		byte SZO_20;
		byte C_21;
		byte Z_22;
		word32 eax_23;
		eax();
	}
	return;
}

ptr64 deregister_tm_clones(word64 r8)
{
	if (DPB(rax, 0x0060103F, 0) > 0x0E)
	{
		word64 rax_37 = DPB(rax, 0x00, 0);
		if (rax_37 != 0x00)
		{
			ptr64 rsp_44;
			word32 eax_45;
			word64 rbp_46;
			word64 r8_47;
			byte SCZO_48;
			word64 rax_49;
			byte CZ_50;
			byte SZO_51;
			byte C_52;
			byte Z_53;
			word32 edi_54;
			0x00();
			return rsp_44;
		}
	}
	return fp + 0x04;
}

void register_tm_clones(word64 r8)
{
	int64 rax_4 = DPB(rax, 0x00601038, 0);
	Eq_83 rdx_13 = rax_4 >> 0x03 >> 0x3F;
	if ((rax_4 >> 0x03) + rdx_13 >> 0x01 != 0x00)
	{
		Eq_94 rdx_45 = DPB(rdx_13, 0x00, 0);
		if (rdx_45 != 0x00)
		{
			word64 rsp_53;
			word32 eax_54;
			word64 rbp_55;
			word64 r8_56;
			byte SCZO_57;
			word64 rax_58;
			word64 rdx_59;
			byte Z_60;
			word32 edx_61;
			byte SZO_62;
			byte C_63;
			word64 rsi_64;
			word32 edi_65;
			0x00();
			return;
		}
	}
	return;
}

void __do_global_dtors_aux(word64 r8)
{
	if (*&globals->b601038 == 0x00)
	{
		deregister_tm_clones(r8);
		*&globals->b601038 = 0x01;
	}
	return;
}

void frame_dummy(word64 r8)
{
frame_dummy_entry:
	rsp = fp
	SCZO = cond(*&globals->qw600E08 - 0x00)
	Z = SCZO
	branch Test(EQ,Z) l0000000000400518
	goto l00000000004004FA
l00000000004004F0:
l00000000004004FA:
	eax = 0x00
	rax = DPB(rax, eax, 0)
	SZO = cond(rax & rax)
	Z = SZO
	C = false
	branch Test(EQ,Z) l0000000000400518
l0000000000400504:
	rsp = fp - 0x04
	dwLoc04 = rbp
	qwLoc04 = DPB(qwLoc04, dwLoc04, 0)
	edi = 0x00600E08
	rbp = fp - 0x04
	0x00()
	rbp = qwLoc04
	rsp = fp + 0x04
	register_tm_clones(r8)
	return
l000000000040050F_thunk_register_tm_clones:
l0000000000400518:
	register_tm_clones(r8)
	return
frame_dummy_exit:
}

byte * verify(word64 rdi)
{
	word32 dwLoc08_104 = 0x00;
	while (true)
	{
		byte * rax_100;
		byte * rax_27 = rdi + (int64) dwLoc08_104;
		if ((byte) (word32) *rax_27 == 0x00)
			break;
		byte * rax_59 = rdi + (int64) dwLoc08_104;
		byte al_64 = (byte) (dwLoc08_104 ^ (word32) (*rax_59));
		if ((byte) (word32) DPB(rax_59, (int16) (byte) dwLoc08_104, 0)[0x00601020] != (byte) ((word32) al_64 >> (byte) (0x08 - ((dwLoc08_104 ^ 0x09) & 0x03)) | (word32) al_64 << (byte) ((dwLoc08_104 ^ 0x09) & 0x03)) + 0x08)
		{
			rax_100 = DPB(rax_59, 0x00, 0);
			return rax_100;
		}
		dwLoc08_104 = dwLoc08_104 + 0x01;
	}
	rax_100 = DPB(rax_27, (word32) (dwLoc08_104 == 0x17), 0);
	return rax_100;
}

void main(word64 rax, Eq_231 * rsi, word32 edi)
{
	if (edi != 0x02)
	{
		word64 rax_30 = DPB(rax, puts(DPB(rdi, 0x004006C8, 0)), 0);
	}
	else
	{
		word64 rax_37 = rsi->qw0008;
		word64 rax_39 = verify(rax_37);
		if ((word32) rax_39 != 0x00)
		{
			word64 rax_50 = DPB(rax_39, puts(DPB(rax_37, 0x004006F0, 0)), 0);
		}
		else
		{
			word64 rax_53 = DPB(rax_39, puts(DPB(rax_37, 0x00400718, 0)), 0);
		}
	}
	return;
}

void __libc_csu_init()
{
	_init();
	if (0x0000000000600E00 - 0x0000000000600DF8 >> 0x03 != 0x00)
	{
		ui64 rbx_47 = DPB(rbx, 0x00, 0);
		do
		{
			word64 rsp_57;
			word64 rbp_58;
			word64 r12_59;
			word64 r13_60;
			word64 r14_61;
			word64 r15_62;
			word64 rbx_63;
			byte SCZO_64;
			word32 r13d_65;
			word32 edi_66;
			word64 rsi_67;
			word64 rdx_68;
			byte SZO_69;
			byte C_70;
			byte Z_71;
			word32 ebx_72;
			(*globals->a600DF8)();
		} while (rbx_63 + 0x01 != rbp_58);
	}
	return;
}

void __libc_csu_fini()
{
	return;
}

void _fini()
{
	return;
}

