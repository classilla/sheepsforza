#ifndef DEFINE_CST
#define DEFINE_CST(NAME, VALUE)
#endif

DEFINE_GEN(gen_op_invoke,void,(long param1))
{
	// e8 da 02 00 00 = call $000002df
}
DEFINE_GEN(gen_op_invoke_T0,void,(long param1))
{
	// 89 1c 24 = mov DWORD PTR [esp],ebx
	// e8 c9 02 00 00 = call $000002d1
}
DEFINE_GEN(gen_op_invoke_T0_T1,void,(long param1))
{
	// 89 74 24 04 = mov DWORD PTR [esp+0x04],esi
	// 89 1c 24 = mov DWORD PTR [esp],ebx
	// e8 b5 02 00 00 = call $000002c1
}
DEFINE_GEN(gen_op_invoke_T0_T1_T2,void,(long param1))
{
	// 89 7c 24 08 = mov DWORD PTR [esp+0x08],edi
	// 89 74 24 04 = mov DWORD PTR [esp+0x04],esi
	// 89 1c 24 = mov DWORD PTR [esp],ebx
	// e8 9d 02 00 00 = call $000002ad
}
DEFINE_GEN(gen_op_invoke_T0_ret_T0,void,(long param1))
{
	// 89 1c 24 = mov DWORD PTR [esp],ebx
	// e8 8d 02 00 00 = call $00000295
	// 89 c3 = mov ebx, eax
}
DEFINE_GEN(gen_op_invoke_im,void,(long param1, long param2))
{
	// c7 04 24 e0 04 00 00 = mov DWORD PTR [esp],0x000004e0
	// e8 77 02 00 00 = call $00000283
}
DEFINE_GEN(gen_op_invoke_CPU,void,(long param1))
{
	// 89 2c 24 = mov DWORD PTR [esp],ebp
	// e8 67 02 00 00 = call $000026f
}
DEFINE_GEN(gen_op_invoke_CPU_T0,void,(long param1))
{
	// 89 5c 24 04 = mov DWORD PTR [esp+0x04],ebx
	// 89 2c 24 = mov DWORD PTR [esp],ebp
	// e8 53 02 00 00 = call $0000025f
}
DEFINE_GEN(gen_op_invoke_CPU_im,void,(long param1, long param2))
{
	// c7 44 24 04 e0 04 00 00 = mov DWORD PTR [esp+0x04],0x000004e0
	// 89 2c 24 = mov DWORD PTR [esp],ebp
	// e8 3b 02 00 00 = call $0000024b
}
DEFINE_GEN(gen_op_invoke_CPU_im_im,void,(long param1, long param2, long param3))
{
	// c7 44 24 08 e4 04 00 00 = mov DWORD PTR [esp+0x08],0x000004e4
	// c7 44 24 04 e0 04 00 00 = mov DWORD PTR [esp+0x04],0x000004e0
	// 89 2c 24 = mov DWORD PTR [esp],ebp
	// e8 1b 02 00 00 = call $00000233
}
DEFINE_GEN(gen_op_invoke_CPU_A0_ret_A0,void,(long param1))
{
	// 89 5c 24 04 = mov DWORD PTR [esp+0x04],ebx
	// 89 2c 24 = mov DWORD PTR [esp],ebp
	// e8 07 02 00 00 = call $00000213
	// 89 c3 = mov ebx, eax
}
DEFINE_GEN(gen_op_invoke_direct,void,(long param1))
{
	// e8 f8 01 00 00 = call $000001fd
}
DEFINE_GEN(gen_op_invoke_direct_T0,void,(long param1))
{
	// 89 1c 24 = mov DWORD PTR [esp],ebx
	// e8 e7 01 00 00 = call $000001ef
}
DEFINE_GEN(gen_op_invoke_direct_T0_T1,void,(long param1))
{
	// 89 74 24 04 = mov DWORD PTR [esp+0x04],esi
	// 89 1c 24 = mov DWORD PTR [esp],ebx
	// e8 d3 01 00 00 = call $000001df
}
DEFINE_GEN(gen_op_invoke_direct_T0_T1_T2,void,(long param1))
{
	// 89 7c 24 08 = mov DWORD PTR [esp+0x08],edi
	// 89 74 24 04 = mov DWORD PTR [esp+0x04],esi
	// 89 1c 24 = mov DWORD PTR [esp],ebx
	// e8 bb 01 00 00 = call $000001cb
}
DEFINE_GEN(gen_op_invoke_direct_T0_ret_T0,void,(long param1))
{
	// 89 1c 24 = mov DWORD PTR [esp],ebx
	// e8 ab 01 00 00 = call $000001b3
	// 89 c3 = mov ebx, eax
}
DEFINE_GEN(gen_op_invoke_direct_im,void,(long param1, long param2))
{
	// c7 04 24 e0 04 00 00 = mov DWORD PTR [esp],0x000004e0
	// e8 95 01 00 00 = call $000001a1
}
DEFINE_GEN(gen_op_invoke_direct_CPU,void,(long param1))
{
	// 89 2c 24 = mov DWORD PTR [esp],ebp
	// e8 85 01 00 00 = call $0000018d
}
DEFINE_GEN(gen_op_invoke_direct_CPU_T0,void,(long param1))
{
	// 89 5c 24 04 = mov DWORD PTR [esp+0x04],ebx
	// 89 2c 24 = mov DWORD PTR [esp],ebp
	// e8 71 01 00 00 = call $0000017d
}
DEFINE_GEN(gen_op_invoke_direct_CPU_im,void,(long param1, long param2))
{
	// c7 44 24 04 e0 04 00 00 = mov DWORD PTR [esp+0x04],0x000004e0
	// 89 2c 24 = mov DWORD PTR [esp],ebp
	// e8 59 01 00 00 = call $00000169
}
DEFINE_GEN(gen_op_invoke_direct_CPU_im_im,void,(long param1, long param2, long param3))
{
	// c7 44 24 08 e4 04 00 00 = mov DWORD PTR [esp+0x08],0x000004e4
	// c7 44 24 04 e0 04 00 00 = mov DWORD PTR [esp+0x04],0e000004e0
	// 89 2c 24 = mov DWORD PTR [esp],ebp
	// e8 39 01 00 00 = call $00000151
}
DEFINE_GEN(gen_op_invoke_direct_CPU_A0_ret_A0,void,(long param1))
{
	// 89 5c 24 04 = mov DWORD PTR [esp+0x04],ebx
	// 89 2c 24 = mov DWORD PTR [esp],ebp
	// e8 25 01 00 00 = call $00000131
	// 89 c3 = mov ebx, eax
}
DEFINE_GEN(gen_op_jmp_fast,void,(long param1))
{
	// e9 e7 02 00 00 = jump $000002ec
}
DEFINE_GEN(gen_op_jmp_slow,void,(long param1))
{
	// b8 dc 04 00 00 = mov eax,0x000004dc
	// ff e0 = jmp eax
}
DEFINE_GEN(gen_op_neg_32_T0,void,(void))
{
	// f7 db = neg ebx
}
DEFINE_GEN(gen_op_not_32_T0,void,(void))
{
	// 85 db = test ebx, ebx
	// 0f 94 c0 = sete al
	// 0f b6 d8 = movzx ebx, al
}
DEFINE_GEN(gen_op_not_32_T1,void,(void))
{
	// 85 f6 = test esi, esi
	// 0f 94 c0 = sete al
	// 0f b6 f0 = movzx esi, al
}
DEFINE_GEN(gen_op_se_8_32_T0,void,(void))
{
	// 0f be db = movsx ebx, bl
}
DEFINE_GEN(gen_op_ze_8_32_T0,void,(void))
{
	// 0f b6 db = movzx ebx, bl
}
DEFINE_GEN(gen_op_add_32_T0_1,void,(void))
{
	// 43 = inc ebx
}
DEFINE_GEN(gen_op_add_32_T0_2,void,(void))
{
	// 83 c3 02 = add ebx,0x02
}
DEFINE_GEN(gen_op_add_32_T0_4,void,(void))
{
	// 83 c3 04 = add ebx,0x04
}
DEFINE_GEN(gen_op_add_32_T0_8,void,(void))
{
	// 83 c3 08 = add ebx,0x08
}
DEFINE_GEN(gen_op_add_32_T1_1,void,(void))
{
	// 46 = inc esi
}
DEFINE_GEN(gen_op_add_32_T1_2,void,(void))
{
	// 83 c6 02 = add esi,0x02
}
DEFINE_GEN(gen_op_add_32_T1_4,void,(void))
{
	// 83 c6 04 = add esi,0x04
}
DEFINE_GEN(gen_op_add_32_T1_8,void,(void))
{
	// 83 c6 08 = add esi,0x08
}
DEFINE_GEN(gen_op_bswap_16_T0,void,(void))
{
	// 89 d8 = mov eax, ebx
	// 66 c1 c0 08 = rol ax,0x08
	// 0f b7 d8 = movzx ebx, ax
}
DEFINE_GEN(gen_op_bswap_32_T0,void,(void))
{
	// 0f cb = bswap ebx
}
DEFINE_GEN(gen_op_mov_32_T0_0,void,(void))
{
	// 31 db = xor ebx, ebx
}
DEFINE_GEN(gen_op_mov_32_T1_0,void,(void))
{
	// 31 f6 = xor esi, esi
}
DEFINE_GEN(gen_op_mov_32_T2_0,void,(void))
{
	// 31 ff = xor edi, edi
}
DEFINE_GEN(gen_op_or_32_T0_T1,void,(void))
{
	// 09 f3 = or ebx, esi
}
DEFINE_GEN(gen_op_or_32_T0_im,void,(long param1))
{
	// 81 cb dc 04 00 00 = or ebx, 0x000004dc
}
DEFINE_GEN(gen_op_se_16_32_T0,void,(void))
{
	// 0f bf db = movsx ebx, bx
}
DEFINE_GEN(gen_op_se_16_32_T1,void,(void))
{
	// 0f bf f6 = movsx esi, si
}
DEFINE_GEN(gen_op_sub_32_T0_1,void,(void))
{
	// 4b = dec ebx
}
DEFINE_GEN(gen_op_sub_32_T0_2,void,(void))
{
	// 83 eb 02 = sub ebx, 0x02
}
DEFINE_GEN(gen_op_sub_32_T0_4,void,(void))
{
	// 83 eb 04 = sub ebx, 0x04
}
DEFINE_GEN(gen_op_sub_32_T0_8,void,(void))
{
	// 83 eb 08 = sub ebx, 0x08
}
DEFINE_GEN(gen_op_sub_32_T1_1,void,(void))
{
	// 4e = dec esi
}
DEFINE_GEN(gen_op_sub_32_T1_2,void,(void))
{
	// 83 ee 02 = sub esi, 0x02
}
DEFINE_GEN(gen_op_sub_32_T1_4,void,(void))
{
	// 83 ee 04 = sub esi, 0x04
}
DEFINE_GEN(gen_op_sub_32_T1_8,void,(void))
{
	// 83 ee 08 = sub esi, 0x08
}
DEFINE_GEN(gen_op_ze_16_32_T0,void,(void))
{
	// 0f b7 db = movzx ebx, bx
}
DEFINE_GEN(gen_op_add_32_T0_T1,void,(void))
{
	// 01 f3 = add ebx, esi
}
DEFINE_GEN(gen_op_add_32_T0_T2,void,(void))
{
	// 01 fb = add ebx, edi
}
DEFINE_GEN(gen_op_add_32_T0_im,void,(long param1))
{
	// 81 c3 dc 04 00 00 = add ebx, 0x000004dc
}
DEFINE_GEN(gen_op_add_32_T1_T0,void,(void))
{
	// 01 de = add esi, ebx
}
DEFINE_GEN(gen_op_add_32_T1_T2,void,(void))
{
	// 01 fe = add esi, edi
}
DEFINE_GEN(gen_op_add_32_T1_im,void,(long param1))
{
	// 81 c6 dc 04 00 00 = add esi, 0x000004dc
}
DEFINE_GEN(gen_op_and_32_T0_T1,void,(void))
{
	// 21 f3 = and ebx, esi
}
DEFINE_GEN(gen_op_and_32_T0_im,void,(long param1))
{
	// 81 e3 dc 04 00 00 = and ebx, 0x000004dc
}
DEFINE_GEN(gen_op_asr_32_T0_T1,void,(void))
{
	// 89 f1 = mov ecx, esi
	// d3 fb = sar ebx, cl
}
DEFINE_GEN(gen_op_asr_32_T0_im,void,(long param1))
{
	// b9 dc 04 00 00 = mov ecx, 0x000004dc
	// d3 fb = sar ebx,cl
}
DEFINE_GEN(gen_op_eqv_32_T0_T1,void,(void))
{
	// 89 d8 = mov eax, ebx
	// 31 f0 = xor eax, esi
	// 89 c3 = mov ebx, eax
	// f7 d3 = not ebx
}
DEFINE_GEN(gen_op_lsl_32_T0_T1,void,(void))
{
	// 89 f1 = mov ecx, esi
	// d3 e3 = shl ebx, cl
}
DEFINE_GEN(gen_op_lsl_32_T0_im,void,(long param1))
{
	// b9 dc 04 00 00 = mov ecx, 0x000004dc
	// d3 e3 = shl ebx, cl
}
DEFINE_GEN(gen_op_lsr_32_T0_T1,void,(void))
{
	// 89 f1 = mov ecx, esi
	// d3 eb = shr ebx, cl
}
DEFINE_GEN(gen_op_lsr_32_T0_im,void,(long param1))
{
	// b9 dc 04 00 00 = mov ecx, 0x000004dc
	// d3 eb = shr ebx, cl
}
DEFINE_GEN(gen_op_mov_32_T0_T1,void,(void))
{
	// 89 f3 = mov ebx, esi
}
DEFINE_GEN(gen_op_mov_32_T0_T2,void,(void))
{
	// 89 fb = mov ebx, edi
}
DEFINE_GEN(gen_op_mov_32_T0_im,void,(long param1))
{
	// bb dc 04 00 00 = mov ebx, 0x000004dc
}
DEFINE_GEN(gen_op_mov_32_T1_T0,void,(void))
{
	// 89 de = mov esi, ebx
}
DEFINE_GEN(gen_op_mov_32_T1_T2,void,(void))
{
	// 89 fe = mov esi, edi
}
DEFINE_GEN(gen_op_mov_32_T1_im,void,(long param1))
{
	// be dc 04 00 00 = mov esi, 0x000004dc
}
DEFINE_GEN(gen_op_mov_32_T2_T0,void,(void))
DEFINE_GEN(gen_op_mov_32_T2_T1,void,(void))
DEFINE_GEN(gen_op_mov_32_T2_im,void,(long param1))
DEFINE_GEN(gen_op_mov_ad_A0_im,void,(long param1))
DEFINE_GEN(gen_op_mov_ad_A1_im,void,(long param1))
DEFINE_GEN(gen_op_mov_ad_A2_im,void,(long param1))
DEFINE_GEN(gen_op_nor_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_orc_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_rol_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_rol_32_T0_im,void,(long param1))
DEFINE_GEN(gen_op_ror_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_ror_32_T0_im,void,(long param1))
DEFINE_GEN(gen_op_sub_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_sub_32_T0_T2,void,(void))
DEFINE_GEN(gen_op_sub_32_T0_im,void,(long param1))
DEFINE_GEN(gen_op_sub_32_T1_T0,void,(void))
DEFINE_GEN(gen_op_sub_32_T1_T2,void,(void))
DEFINE_GEN(gen_op_sub_32_T1_im,void,(long param1))
DEFINE_GEN(gen_op_xor_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_xor_32_T0_im,void,(long param1))
DEFINE_GEN(gen_op_andc_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_nand_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_sdiv_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_smul_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_udiv_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_umul_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_xchg_32_T0_T1,void,(void))
DEFINE_GEN(gen_op_load_s8_T0_T1_0,void,(void))
DEFINE_GEN(gen_op_load_u8_T0_T1_0,void,(void))
DEFINE_GEN(gen_op_store_8_T0_T1_0,void,(void))
DEFINE_GEN(gen_op_load_s16_T0_T1_0,void,(void))
DEFINE_GEN(gen_op_load_s32_T0_T1_0,void,(void))
DEFINE_GEN(gen_op_load_s8_T0_T1_T2,void,(void))
DEFINE_GEN(gen_op_load_s8_T0_T1_im,void,(long param1))
DEFINE_GEN(gen_op_load_u16_T0_T1_0,void,(void))
DEFINE_GEN(gen_op_load_u32_T0_T1_0,void,(void))
DEFINE_GEN(gen_op_load_u8_T0_T1_T2,void,(void))
DEFINE_GEN(gen_op_load_u8_T0_T1_im,void,(long param1))
DEFINE_GEN(gen_op_store_16_T0_T1_0,void,(void))
DEFINE_GEN(gen_op_store_32_T0_T1_0,void,(void))
DEFINE_GEN(gen_op_store_8_T0_T1_T2,void,(void))
DEFINE_GEN(gen_op_store_8_T0_T1_im,void,(long param1))
DEFINE_GEN(gen_op_load_s16_T0_T1_T2,void,(void))
DEFINE_GEN(gen_op_load_s16_T0_T1_im,void,(long param1))
DEFINE_GEN(gen_op_load_s32_T0_T1_T2,void,(void))
DEFINE_GEN(gen_op_load_s32_T0_T1_im,void,(long param1))
DEFINE_GEN(gen_op_load_u16_T0_T1_T2,void,(void))
DEFINE_GEN(gen_op_load_u16_T0_T1_im,void,(long param1))
DEFINE_GEN(gen_op_load_u32_T0_T1_T2,void,(void))
DEFINE_GEN(gen_op_load_u32_T0_T1_im,void,(long param1))
DEFINE_GEN(gen_op_store_16_T0_T1_T2,void,(void))
DEFINE_GEN(gen_op_store_16_T0_T1_im,void,(long param1))
DEFINE_GEN(gen_op_store_32_T0_T1_T2,void,(void))
DEFINE_GEN(gen_op_store_32_T0_T1_im,void,(long param1))
DEFINE_GEN(gen_op_jmp_A0,void,(void))

/* offset within gen_op_execute to serve as return address */
DEFINE_CST(op_exec_return_offset,0x22L)
DEFINE_GEN(gen_op_execute,void,(void))

#undef DEFINE_GEN
#undef DEFINE_CST

