// pngpixel.c
// Generated by decompiling pngpixel
// using Reko decompiler version 0.7.2.0.

#include "pngpixel.h"

// 0000000000400AE8: void _init()
void _init()
{
	word64 rax_4 = globals->qw601FF8;
	if (rax_4 != 0x00)
	{
		word64 rsp_15;
		byte SCZO_16;
		word64 rax_17;
		byte SZO_18;
		byte C_19;
		byte Z_20;
		png_get_PLTE();
	}
	return;
}

// 0000000000400CD0: void _start(Register (ptr Eq_16) rdx, Stack Eq_17 qwArg00, Stack word32 dwArg04)
void _start( * rdx, Eq_17 qwArg00, word32 dwArg04)
{
	__align(fp + 0x08);
	__libc_start_main(&globals->t4012F9, qwArg00, fp + 0x08, &globals->t401780, &globals->t4017F0, rdx, DPB(qwArg00, fp + 0x04, 0));
	__hlt();
}

// 0000000000400D00: Register ptr64 deregister_tm_clones(Register word64 r8)
ptr64 deregister_tm_clones(word64 r8)
{
	if (false || 0x00 == 0x00)
		return fp + 0x04;
	else
	{
		ptr64 rsp_43;
		word32 eax_44;
		word64 rax_45;
		word64 rbp_46;
		word64 r8_47;
		byte SCZO_48;
		byte CZ_49;
		byte SZO_50;
		byte C_51;
		byte Z_52;
		word32 edi_53;
		word64 rdi_54;
		eax();
		return rsp_43;
	}
}

// 0000000000400D40: void register_tm_clones()
void register_tm_clones()
{
	if (0x00 == 0x00 || 0x00 == 0x00)
		return;
	else
	{
		word64 rsp_43;
		word64 rsi_44;
		word64 rbp_45;
		byte SCZO_46;
		word64 rax_47;
		byte Z_48;
		byte SZO_49;
		byte C_50;
		word64 rdi_51;
		word32 eax_52;
		eax();
		return;
	}
}

// 0000000000400D80: void __do_global_dtors_aux(Register word64 r8)
void __do_global_dtors_aux(word64 r8)
{
	if (globals->b602108 == 0x00)
	{
		deregister_tm_clones(r8);
		globals->b602108 = 0x01;
	}
	return;
}

// 0000000000400DA0: void frame_dummy()
void frame_dummy()
{
	if (globals->qw601E10 != 0x00 && 0x00 != 0x00)
	{
		word64 rsp_42;
		word32 edi_43;
		word64 rdi_44;
		byte SCZO_45;
		byte Z_46;
		word32 eax_47;
		word64 rax_48;
		byte SZO_49;
		byte C_50;
		word64 rbp_51;
		word32 esi_52;
		word64 rsi_53;
		eax();
		register_tm_clones();
		return;
	}
	else
	{
		register_tm_clones();
		return;
	}
}

// 0000000000400DC6: void component(Register uint32 ecx, Register word32 edx, Register word32 esi, Register word32 edi, Register word32 r8d, Register ptr64 r13)
void component(uint32 ecx, word32 edx, word32 esi, word32 edi, word32 r8d, ptr64 r13)
{
	*(r13 - 0x28) = r8d;
	if (ecx > 0x10)
	{
		fprintf(globals->ptr602100, "pngpixel: invalid bit depth %u\n", (uint64) ecx);
		exit(0x01);
	}
	else
	{
		word64 rax_60 = globals->a401828[(uint64) ecx * 0x08];
		Eq_158 eax_61 = (word32) rax_60;
		word64 rsp_62;
		word64 rbp_63;
		byte SCZO_64;
		word64 rdi_65;
		word32 esi_66;
		word32 edx_67;
		word32 ecx_68;
		word64 r13_69;
		word32 r8d_70;
		word32 eax_71;
		word64 rax_72;
		byte SZO_73;
		byte C_74;
		word64 rdx_75;
		byte CZ_76;
		word64 rsi_77;
		word32 edi_78;
		eax_61();
		return;
	}
}

// 0000000000400EE9: Register word64 print_pixel(Register byte dil, Register (ptr Eq_179) fs, Stack word64 qwArg00, Stack word64 qwArg08)
word64 print_pixel(byte dil, Eq_179 * fs, word64 qwArg00, word64 qwArg08)
{
	word64 rsp_37;
	word64 rbp_38;
	word64 r13_39;
	word64 r12_40;
	word64 rbx_41;
	byte SCZO_42;
	word64 rdi_43;
	word64 rsi_44;
	word64 rdx_45;
	word32 ecx_46;
	word64 rax_47;
	struct Eq_193 * fs_48;
	word32 eax_49;
	byte SZO_50;
	byte C_51;
	byte al_52;
	byte CZ_53;
	word32 esi_54;
	byte Z_55;
	byte dil_56;
	png_get_bit_depth();
	word64 rsp_64;
	word64 rbp_65;
	word64 r13_66;
	word64 r12_67;
	word64 rbx_68;
	byte SCZO_69;
	word64 rdi_70;
	word64 rsi_71;
	word64 rdx_72;
	word32 ecx_73;
	word64 rax_74;
	struct Eq_214 * fs_75;
	word32 eax_76;
	byte SZO_77;
	byte C_78;
	byte al_79;
	byte CZ_80;
	word32 esi_81;
	byte Z_82;
	byte dil_83;
	png_get_color_type();
	word64 rax_26 = fs->qw0028;
	uint32 eax_84 = (word32) al_79;
	if (eax_84 > 0x06)
	{
		word64 rsp_135;
		word64 rbp_136;
		word64 r13_137;
		word64 r12_138;
		word64 rbx_139;
		byte SCZO_140;
		word64 rdi_141;
		word64 rsi_142;
		word64 rdx_143;
		word32 ecx_144;
		word64 rax_145;
		struct Eq_242 * fs_146;
		word32 eax_147;
		byte SZO_148;
		byte C_149;
		byte al_150;
		byte CZ_151;
		word32 esi_152;
		byte Z_153;
		byte dil_154;
		png_error();
		if ((rax_26 ^ fs_146->qw0028) != 0x00)
			__stack_chk_fail();
		return qwArg08;
	}
	else
	{
		word64 rax_110 = globals->a401958[(uint64) eax_84 * 0x08];
		Eq_263 eax_111 = (word32) rax_110;
		word64 rsp_112;
		word64 rbp_113;
		word64 r13_114;
		word64 r12_115;
		word64 rbx_116;
		byte SCZO_117;
		word64 rdi_118;
		word64 rsi_119;
		word64 rdx_120;
		word32 ecx_121;
		word64 rax_122;
		struct Eq_276 * fs_123;
		word32 eax_124;
		byte SZO_125;
		byte C_126;
		byte al_127;
		byte CZ_128;
		word32 esi_129;
		byte Z_130;
		byte dil_131;
		eax_111();
		return rbp_113;
	}
}

// 00000000004012F9: void main(Register (ptr Eq_288) rsi, Register word32 edi, Register word64 r13, Register (ptr Eq_291) fs)
void main(Eq_288 * rsi, word32 edi, word64 r13, Eq_291 * fs)
{
	ptr64 rbp_136 = fp - 0x04;
	if (edi != 0x04)
	{
		fwrite(&globals->v401A70, 0x01, 0x27, globals->ptr602100);
		goto l000000000040175D;
	}
	word64 rsp_105;
	word64 rbp_106;
	byte SCZO_107;
	word32 edi_108;
	word64 rsi_109;
	uint64 rax_110;
	struct Eq_318 * fs_111;
	word32 eax_112;
	byte SZO_113;
	byte C_114;
	byte Z_115;
	word64 rdi_116;
	word32 esi_117;
	word32 ecx_118;
	word64 rcx_119;
	word32 edx_120;
	word64 rdx_121;
	word64 r13_122;
	word64 r9_123;
	word64 r8_124;
	byte SO_125;
	byte cl_126;
	byte al_127;
	byte dil_128;
	atol();
	word64 rsp_135;
	byte SCZO_137;
	word32 edi_138;
	word64 rsi_139;
	uint64 rax_140;
	word32 eax_142;
	byte SZO_143;
	byte C_144;
	byte Z_145;
	word64 rdi_146;
	word32 esi_147;
	word32 ecx_148;
	word64 rcx_149;
	word32 edx_150;
	word64 rdx_151;
	word64 r13_152;
	word64 r9_153;
	word64 r8_154;
	byte SO_155;
	byte cl_156;
	byte al_157;
	byte dil_158;
	atol();
	FILE * rax_165 = fopen(rsi->ptr0018, "rb");
	if (rax_165 == null)
	{
		fprintf(globals->ptr602100, "pngpixel: %s: could not open file\n", rsi->ptr0018);
		goto l000000000040175D;
	}
	word64 rsp_176;
	byte SCZO_178;
	word32 edi_179;
	word64 rsi_180;
	word64 rax_181;
	word32 eax_183;
	byte SZO_184;
	byte C_185;
	byte Z_186;
	word64 rdi_187;
	word32 esi_188;
	word32 ecx_189;
	word64 rcx_190;
	word32 edx_191;
	word64 rdx_192;
	word64 r13_193;
	word64 r9_194;
	word64 r8_195;
	byte SO_196;
	byte cl_197;
	byte al_198;
	byte dil_199;
	png_create_read_struct();
	if (rax_181 == 0x00)
	{
		fwrite(&globals->v401A18, 0x01, 0x2E, globals->ptr602100);
		goto l000000000040175D;
	}
	word64 rsp_207;
	word64 rbp_208;
	byte SCZO_209;
	word32 edi_210;
	word64 rsi_211;
	word64 rax_212;
	struct Eq_424 * fs_213;
	word32 eax_214;
	byte SZO_215;
	byte C_216;
	byte Z_217;
	word64 rdi_218;
	word32 esi_219;
	word32 ecx_220;
	word64 rcx_221;
	word32 edx_222;
	word64 rdx_223;
	word64 r13_224;
	word64 r9_225;
	word64 r8_226;
	byte SO_227;
	byte cl_228;
	byte al_229;
	byte dil_230;
	png_create_info_struct();
	if (rax_212 != 0x00)
	{
		word64 rsp_312;
		word64 rbp_313;
		byte SCZO_314;
		word32 edi_315;
		word64 rsi_316;
		word64 rax_317;
		struct Eq_460 * fs_318;
		word32 eax_319;
		byte SZO_320;
		byte C_321;
		byte Z_322;
		word64 rdi_323;
		word32 esi_324;
		word32 ecx_325;
		word64 rcx_326;
		word32 edx_327;
		word64 rdx_328;
		word64 r13_329;
		word64 r9_330;
		word64 r8_331;
		byte SO_332;
		byte cl_333;
		byte al_334;
		byte dil_335;
		png_init_io();
		word64 rsp_340;
		word64 rbp_341;
		byte SCZO_342;
		word32 edi_343;
		word64 rsi_344;
		word64 rax_345;
		struct Eq_485 * fs_346;
		word32 eax_347;
		byte SZO_348;
		byte C_349;
		byte Z_350;
		word64 rdi_351;
		word32 esi_352;
		word32 ecx_353;
		word64 rcx_354;
		word32 edx_355;
		word64 rdx_356;
		word64 r13_357;
		word64 r9_358;
		word64 r8_359;
		byte SO_360;
		byte cl_361;
		byte al_362;
		byte dil_363;
		png_read_info();
		word64 rsp_368;
		word64 rbp_369;
		byte SCZO_370;
		word32 edi_371;
		word64 rsi_372;
		word64 rax_373;
		struct Eq_510 * fs_374;
		word32 eax_375;
		byte SZO_376;
		byte C_377;
		byte Z_378;
		word64 rdi_379;
		word32 esi_380;
		word32 ecx_381;
		word64 rcx_382;
		word32 edx_383;
		word64 rdx_384;
		word64 r13_385;
		word64 r9_386;
		word64 r8_387;
		byte SO_388;
		byte cl_389;
		byte al_390;
		byte dil_391;
		png_get_rowbytes();
		word64 rsp_396;
		word64 rbp_397;
		byte SCZO_398;
		word32 edi_399;
		word64 rsi_400;
		word64 rax_401;
		struct Eq_535 * fs_402;
		word32 eax_403;
		byte SZO_404;
		byte C_405;
		byte Z_406;
		word64 rdi_407;
		word32 esi_408;
		word32 ecx_409;
		word64 rcx_410;
		word32 edx_411;
		word64 rdx_412;
		word64 r13_413;
		word64 r9_414;
		word64 r8_415;
		byte SO_416;
		byte cl_417;
		byte al_418;
		byte dil_419;
		png_malloc();
		word64 rsp_442;
		word64 rbp_443;
		byte SCZO_444;
		word32 edi_445;
		word64 rsi_446;
		word64 rax_447;
		struct Eq_560 * fs_448;
		word32 eax_449;
		byte SZO_450;
		byte C_451;
		byte Z_452;
		word64 rdi_453;
		word32 esi_454;
		word32 ecx_455;
		word64 rcx_456;
		word32 edx_457;
		word64 rdx_458;
		word64 r13_459;
		word64 r9_460;
		word64 r8_461;
		byte SO_462;
		byte cl_463;
		byte al_464;
		byte dil_465;
		png_get_IHDR();
		if (eax_449 != 0x00)
		{
			word32 eax_472 = (word32) (uint64) dwLoc74;
			if (eax_472 != 0x00)
			{
				if (eax_472 != 0x01)
				{
					word64 rsp_948;
					word64 rbp_949;
					byte SCZO_950;
					word32 edi_951;
					word64 rsi_952;
					word64 rax_953;
					struct Eq_623 * fs_954;
					word32 eax_955;
					byte SZO_956;
					byte C_957;
					byte Z_958;
					word64 rdi_959;
					word32 esi_960;
					word32 ecx_961;
					word64 rcx_962;
					word32 edx_963;
					word64 rdx_964;
					word64 r13_965;
					word64 r9_966;
					word64 r8_967;
					byte SO_968;
					byte cl_969;
					byte al_970;
					byte dil_971;
					png_error();
				}
				else
					dwLoc68 = 0x07;
			}
			else
				dwLoc68 = 0x01;
			word64 rsp_480;
			byte SCZO_482;
			word32 edi_483;
			word64 rsi_484;
			word64 rax_485;
			struct Eq_654 * fs_486;
			word32 eax_487;
			byte SZO_488;
			byte C_489;
			byte Z_490;
			word64 rdi_491;
			word32 esi_492;
			word32 ecx_493;
			word64 rcx_494;
			word32 edx_495;
			word64 rdx_496;
			word64 r13_497;
			word64 r9_498;
			word64 r8_499;
			byte SO_500;
			byte cl_501;
			byte al_502;
			byte dil_503;
			ptr64 rbp_481;
			png_start_read_image();
			int32 dwLoc64_504 = 0x00;
l0000000000401673:
			int32 eax_534 = (word32) (uint64) dwLoc64_504;
			if (eax_534 >= dwLoc68)
			{
l000000000040167F:
				*(rbp_481 - 0x40) = 0x00;
				word64 rsp_550;
				word64 rbp_551;
				byte SCZO_552;
				word32 edi_553;
				word64 rsi_554;
				word64 rax_555;
				struct Eq_695 * fs_556;
				word32 eax_557;
				byte SZO_558;
				byte C_559;
				byte Z_560;
				word64 rdi_561;
				word32 esi_562;
				word32 ecx_563;
				word64 rcx_564;
				word32 edx_565;
				word64 rdx_566;
				word64 r13_567;
				word64 r9_568;
				word64 r8_569;
				byte SO_570;
				byte cl_571;
				byte al_572;
				byte dil_573;
				png_free();
				word64 rsp_578;
				word64 rbp_579;
				byte SCZO_580;
				word32 edi_581;
				word64 rsi_582;
				word64 rax_583;
				struct Eq_720 * fs_584;
				word32 eax_585;
				byte SZO_586;
				byte C_587;
				byte Z_588;
				word64 rdi_589;
				word32 esi_590;
				word32 ecx_591;
				word64 rcx_592;
				word32 edx_593;
				word64 rdx_594;
				word64 r13_595;
				word64 r9_596;
				word64 r8_597;
				byte SO_598;
				byte cl_599;
				byte al_600;
				byte dil_601;
				png_destroy_info_struct();
l00000000004016DE:
				word64 rsp_255;
				byte SCZO_257;
				word32 edi_258;
				word64 rsi_259;
				word64 rax_260;
				word32 eax_262;
				byte SZO_263;
				byte C_264;
				byte Z_265;
				word64 rdi_266;
				word32 esi_267;
				word32 ecx_268;
				word64 rcx_269;
				word32 edx_270;
				word64 rdx_271;
				word64 r13_272;
				word64 r9_273;
				word64 r8_274;
				byte SO_275;
				byte cl_276;
				byte al_277;
				byte dil_278;
				png_destroy_read_struct();
l000000000040175D:
				if ((*(rbp_136 - 0x08) ^ fs->qw0028) != 0x00)
					__stack_chk_fail();
				return;
			}
			word32 dwLoc58_642;
			word32 dwLoc54_641;
			word32 dwLoc60_640;
			word32 dwLoc5C_639;
			if ((word32) (uint64) dwLoc74 == 0x01)
			{
				word32 eax_763;
				if (dwLoc64_504 > 0x01)
					eax_763 = (word32) (uint64) ((word32) (uint64) (word32) (uint64) (0x01 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) (0x07 - dwLoc64_504)) >> 0x01))))) - 0x01);
				else
					eax_763 = 0x07;
				word32 eax_801;
				uint32 edx_797 = (word32) (uint64) ((word32) (uint64) (word32) (uint64) (eax_763 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc64_504))) & 0x01)) << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) (0x03 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc64_504) + 0x01)) >> 0x01)))))))))))) & 0x07))) + (word32) ((uint64) dwLoc84));
				if (dwLoc64_504 > 0x01)
					eax_801 = (word32) (uint64) ((word32) (uint64) (0x07 - dwLoc64_504) >> 0x01);
				else
					eax_801 = 0x03;
				if ((word32) (uint64) (word32) (uint64) (edx_797 >> (byte) ((uint64) eax_801)) == 0x00)
					goto l000000000040166F;
				word32 eax_886;
				dwLoc5C_639 = (word32) (uint64) ((word32) (uint64) (word32) (uint64) ((word32) (uint64) (word32) (uint64) ((word32) (uint64) dwLoc64_504 & 0x01) << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) (0x03 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc64_504) + 0x01)) >> 0x01))))))))) & 0x07);
				dwLoc60_640 = (word32) (uint64) ((word32) (uint64) (word32) (uint64) ((word32) ((word32) (uint64) ((word32) (uint64) dwLoc64_504 & 0x01) == 0x00) << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) (0x03 - (word32) ((uint64) ((word32) ((uint64) dwLoc64_504) >> 0x01))))))))) & 0x07);
				dwLoc54_641 = (word32) (uint64) (word32) (uint64) (0x01 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) (0x07 - dwLoc64_504)) >> 0x01)))));
				if (dwLoc64_504 > 0x02)
					eax_886 = (word32) (uint64) (word32) (uint64) (0x08 >> (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc64_504) - 0x01)) >> 0x01)))));
				else
					eax_886 = 0x08;
				dwLoc58_642 = eax_886;
			}
			else
			{
				dwLoc5C_639 = 0x00;
				dwLoc60_640 = 0x00;
				dwLoc54_641 = 0x01;
				dwLoc58_642 = 0x01;
			}
			uint32 dwLoc50_657 = (word32) (uint64) dwLoc60_640;
			while (dwLoc50_657 < (word32) ((uint64) dwLoc80))
			{
				int32 eax_687 = puts("png_read_row");
				word64 rsp_693;
				byte SCZO_695;
				word32 edi_696;
				word64 rsi_697;
				word64 rax_698;
				struct Eq_179 * fs_699;
				word32 eax_700;
				byte SZO_701;
				byte C_702;
				byte Z_703;
				word64 rdi_704;
				word32 esi_705;
				word32 ecx_706;
				word64 rcx_707;
				word32 edx_708;
				word64 rdx_709;
				word64 r13_710;
				word64 r9_711;
				word64 r8_712;
				byte SO_713;
				byte cl_714;
				byte al_715;
				byte dil_716;
				png_read_row();
				if ((uint64) dwLoc50_657 == rax_140)
				{
					uint32 dwLoc4C_731 = (word32) (uint64) dwLoc5C_639;
					while (dwLoc4C_731 < (word32) ((uint64) dwLoc84))
					{
						if ((uint64) dwLoc4C_731 == rax_110)
						{
							rbp_481 = print_pixel((byte) rax_181, fs_699, qwLocA0, qwLoc98);
							goto l000000000040167F;
						}
						dwLoc4C_731 = dwLoc4C_731 + (word32) ((uint64) dwLoc54_641);
					}
				}
				dwLoc50_657 = dwLoc50_657 + (word32) ((uint64) dwLoc58_642);
			}
l000000000040166F:
			dwLoc64_504 = dwLoc64_504 + 0x01;
			goto l0000000000401673;
		}
		word64 rsp_977;
		word64 rbp_978;
		byte SCZO_979;
		word32 edi_980;
		word64 rsi_981;
		word64 rax_982;
		struct Eq_587 * fs_983;
		word32 eax_984;
		byte SZO_985;
		byte C_986;
		byte Z_987;
		word64 rdi_988;
		word32 esi_989;
		word32 ecx_990;
		word64 rcx_991;
		word32 edx_992;
		word64 rdx_993;
		word64 r13_994;
		word64 r9_995;
		word64 r8_996;
		byte SO_997;
		byte cl_998;
		byte al_999;
		byte dil_1000;
		png_error();
	}
	fwrite(&globals->v4019E8, 0x01, 44, globals->ptr602100);
	goto l00000000004016DE;
}

// 0000000000401780: void __libc_csu_init(Register word32 edi, Stack word64 qwArg00, Stack word64 qwArg08, Stack word64 qwArg10)
void __libc_csu_init(word32 edi, word64 qwArg00, word64 qwArg08, word64 qwArg10)
{
	_init();
	if (0x0000000000601E08 - 0x0000000000601E00 >> 0x03 != 0x00)
	{
		do
		{
			word64 rsp_78;
			word64 r15_79;
			word64 r14_80;
			word32 r15d_81;
			word32 edi_82;
			word64 r13_83;
			word64 r12_84;
			word64 rbp_85;
			word64 rbx_86;
			word64 rsi_87;
			word64 rdx_88;
			byte SCZO_89;
			byte SZO_90;
			byte C_91;
			byte Z_92;
			word32 ebx_93;
			word64 rdi_94;
			globals->u601E00();
		} while (rbx_86 + 0x01 != rbp_85);
	}
	return;
}

// 00000000004017F0: void __libc_csu_fini()
void __libc_csu_fini()
{
	return;
}

// 00000000004017F4: void _fini()
void _fini()
{
	return;
}

