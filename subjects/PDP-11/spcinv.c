// spcinv.c
// Generated by decompiling spcinv.sav
// using Reko decompiler version 0.6.2.0.

#include "spcinv.h"

void fn0200(word16 r4, Eq_3 * pc)
{
	do
	{
		PRINT(&globals->b0F9A);
		ptr16 sp_146 = fp;
		ptr16 r2_214 = 0x02;
		word16 r3_28 = 0x00;
		do
		{
			word16 r0_14;
		} while (TTYIN(out r0_14));
		ptr16 r1_142 = 3994;
		do
		{
			word16 r0_19;
		} while (TTYIN(out r0_19));
		do
		{
			word16 r0_21;
		} while (TTYIN(out r0_21));
		if (0xF0A8 == 0x00)
		{
			PRINT(&globals->b0FDA);
			do
			{
				word16 r0_364;
			} while (TTYIN(out r0_364));
			break;
		}
		r2_214 = 0x01;
		r3_28 = 0x01;
		if (~0x0F50 == 0x00)
			break;
		r2_214 = 0x00;
		r3_28 = 0x02;
	} while (61611 == 0x00);
	globals->ptr0F06 = r2_214;
	globals->w0F08 = r3_28;
	globals->w0024 = globals->w0024 | 0x1040;
	globals->w1166 = 0x1100;
	globals->w1168 = 4464;
	FnSubfn(&globals->w1166);
	globals->w0AB4 = globals->w1170;
	globals->w0B5E = 0x00;
	globals->w1166 = 0x0101;
	globals->w1168 = 4446;
	FnSubfn(&globals->w1166);
	globals->ptr0F06 = r2_214;
	globals->w0F08 = r3_28;
	globals->w0024 = globals->w0024 | 0x1040;
	globals->w1166 = 0x1100;
	globals->w1168 = 4464;
	FnSubfn(&globals->w1166);
	globals->w0AB4 = globals->w1170;
	globals->w0B5E = 0x00;
	globals->w1166 = 0x0101;
	globals->w1168 = 4446;
	FnSubfn(&globals->w1166);
	if (true)
	{
		globals->w1166 = 0x0801;
		globals->w1168 = 0x00;
		globals->w116A = 0x0B5E;
		globals->w116C = 0x01;
		globals->w116E = 0x00;
		FnSubfn(&globals->w1166);
		__syscall(0x88FC);
		globals->w1166 = 0x0801;
		globals->w1168 = 0x00;
		globals->w116A = 0x0B5E;
		globals->w116C = 0x01;
		globals->w116E = 0x00;
		FnSubfn(&globals->w1166);
		__syscall(0x88FC);
	}
	fn0BD4();
l02A0:
	fn0C1E();
l02A6:
	Eq_221 r0_96;
	if (!TTYIN(out r0_96) && globals->ptr0EFA == 0x00)
	{
		globals->u02CB = r0_96;
		word16 * r1_307 = &globals->w02C6;
		do
		{
			r1_307 = r1_366 + 0x01;
			word16 * r1_366 = r1_307;
		} while (*r1_366 - r0_96 != 0x00);
		struct Eq_237 * r1_317 = r1_307 - 711 << 0x01;
		word16 sp_319;
		word16 r2_320;
		byte NZ_321;
		bool V_322;
		word16 r3_323;
		bool C_324;
		bool N_325;
		bool Z_326;
		word16 r0_327;
		word16 r1_328;
		byte NZVC_329;
		byte NZV_330;
		word16 pc_331;
		word16 r4_332;
		byte ZC_333;
		r1_317->ptr02CC();
		return;
	}
	globals->w1166 = 0x1100;
	globals->w1168 = 4464;
	FnSubfn(&globals->w1166);
	ci16 r0_106 = globals->w1170 - globals->w1172;
	if (r0_106 < 0x00)
	{
		if (0x1178 - r4 == 0x00)
			goto l02A6;
		fn0AF4(wArg00);
	}
	globals->w1174 = globals->w1170;
	pc->w0E52 = pc->w0E52 + 0x01;
	globals->w0EF6 = ~globals->w0EF4;
	if (v64 == 0x00)
		globals->w0EF8 = ~globals->w0EF6;
	if (globals->ptr0EFA != 0x00)
	{
		globals->w0EFC = globals->ptr0EFA - 0x01;
		if (v70 != 0x00)
			goto l0370;
		if (globals->w0F18 == 0x00)
			goto l03AE;
		fn0484();
		globals->w0F16 = 0x02;
		fn046E(r2_214, r4);
		globals->w0F18 = 0x78;
		sp_146 = sp_146 + ~0x01;
	}
	if (globals->w0EF8 != 0x00)
	{
l036C:
		byte NZ_250;
		bool V_251;
		word16 r3_252;
		bool C_253;
		bool N_254;
		bool Z_255;
		word16 r0_256;
		byte NZVC_258;
		byte NZV_259;
		byte ZC_262;
		globals->ptr0EFA();
		goto l0370;
	}
	else
	{
		if (0x08 - globals->w0F14 < 0x00)
		{
			globals->w0F18 = globals->w0F16 - 0x01;
			if (v106 <= 0x00)
			{
				globals->ptr0EFA = 1110;
				goto l036C;
			}
		}
l0370:
		fn049E();
		fn06D4();
		fn07A4();
		fn0996();
		if (0x1178 - r4 != 0x00)
			break;
		if (globals->w0F12 != 0x00)
			continue;
		if (globals->w0F02 != 0x00)
			continue;
		if (true)
		{
			globals->w0F1A = globals->w0F18 + 0x01;
			goto l02A0;
		}
l03AE:
		cu16 v82_147 = globals->w0B5A - globals->w0B5A;
		if (v82_147 > 0x00)
		{
			globals->w0B5E = globals->w0B5A;
			globals->w1166 = 0x0101;
			globals->w1168 = 4446;
			FnSubfn(&globals->w1166);
			if (v82_147 >= 0x00)
			{
l03E6:
				globals->w1166 = 0x0901;
				globals->w1168 = 0x00;
				globals->w116A = 0x0B5E;
				globals->w116C = 0x01;
				globals->w116E = 0x00;
				FnSubfn(&globals->w1166);
				__syscall(0x88FC);
				goto l040A;
			}
			globals->w1166 = 0x0201;
			globals->w1168 = 4446;
			globals->w116A = 0x01;
			FnSubfn(&globals->w1166);
			if (v82_147 >= 0x00)
				goto l03E6;
		}
l040A:
		fn0484();
		struct Eq_394 * sp_163 = sp_146 - 0x01;
		sp_163->b0000 = 0x01;
		sp_163->b0001 = 0x18;
		fn0AB4();
		fn0AE6();
		*(r1_142 - 0x02) = r4;
		fn0AE6();
	}
}

void fn046E(ptr16 r2, word16 r4)
{
	fn0AB4();
	fn0AE6();
	*(r2 - 0x02) = r4;
	fn0484();
	return;
}

void fn0484()
{
	return;
}

void fn049E()
{
	return;
}

void fn06D4()
{
	return;
}

void fn07A4()
{
	return;
}

void fn0996()
{
	return;
}

void fn0AB4()
{
	__halt();
}

void fn0AE6()
{
	return;
}

void fn0AF4(word16 wArg00)
{
	word16 sp_7;
	word16 r5_8;
	r5();
	return;
}

void fn0BD4()
{
	__halt();
}

void fn0C1E()
{
	return;
}

