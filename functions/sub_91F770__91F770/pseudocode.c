int __usercall sub_91F770@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        __m128 *a4,
        float a5,
        float *a6,
        __m128 *a7,
        __m128 *a8,
        int a9)
{
  __m128 v9; // xmm3
  __m128 v10; // xmm1
  __int32 v11; // edx
  double v12; // st7
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128 v15; // xmm3
  __int32 v16; // edx
  double v17; // st7
  __m128 v18; // xmm0
  __int32 v19; // ecx
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __int32 v22; // edx
  long double v23; // st7
  long double v24; // st6
  __m128 v25; // xmm0
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  __m128 v30; // xmm0
  float v31; // xmm1_4
  __m128 v32; // xmm3
  __m128 v33; // xmm0
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __int32 v36; // edx
  unsigned int v38; // [esp+8h] [ebp-2ECh]
  unsigned int v39; // [esp+14h] [ebp-2E0h]
  float v40; // [esp+14h] [ebp-2E0h]
  float v41; // [esp+1Ch] [ebp-2D8h]
  __m128 v42; // [esp+20h] [ebp-2D4h] BYREF
  __m128 v43[2]; // [esp+30h] [ebp-2C4h] BYREF
  __m128 v44[2]; // [esp+50h] [ebp-2A4h] BYREF
  __m128 v45; // [esp+70h] [ebp-284h] BYREF
  __m128 v46[2]; // [esp+80h] [ebp-274h]
  __m128 v47; // [esp+A0h] [ebp-254h] BYREF
  __m128 v48[2]; // [esp+B0h] [ebp-244h] BYREF
  __m128 v49[2]; // [esp+D0h] [ebp-224h] BYREF
  __m128 v50; // [esp+F0h] [ebp-204h] BYREF
  char v51[48]; // [esp+100h] [ebp-1F4h] BYREF
  __int32 v52; // [esp+130h] [ebp-1C4h]
  __m128 v53; // [esp+134h] [ebp-1C0h] BYREF
  char v54[48]; // [esp+144h] [ebp-1B0h] BYREF
  __int32 v55; // [esp+174h] [ebp-180h]
  __m128 v56[22]; // [esp+190h] [ebp-164h] BYREF

  v9 = (__m128)xmmword_A6DFE0; /*0x91f77f*/
  v10 = a7[6]; /*0x91f797*/
  v11 = a7->m128_i32[0]; /*0x91f79b*/
  v12 = (a5 - a7[5].m128_f32[3]) * a7[6].m128_f32[3]; /*0x91f79d*/
  v55 = a7[0xC].m128_i32[0]; /*0x91f7a0*/
  *(float *)&v38 = v12; /*0x91f7a8*/
  v13 = _mm_shuffle_ps((__m128)v38, (__m128)v38, 0); /*0x91f7b9*/
  v53 = _mm_sub_ps(*a4, _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v9, v13), a7[5]), _mm_mul_ps(v13, v10))); /*0x91f7d9*/
  (*(void (__thiscall **)(__m128 *, char *, int, int, int))(v11 + 0x3C))(a7, v54, a2, a3, a1); /*0x91f7e1*/
  v14 = a8[6]; /*0x91f7ed*/
  v15 = (__m128)xmmword_A6DFE0; /*0x91f7f7*/
  v16 = a8->m128_i32[0]; /*0x91f7fe*/
  v17 = (a5 - a8[5].m128_f32[3]) * a8[6].m128_f32[3]; /*0x91f800*/
  v52 = a8[0xC].m128_i32[0]; /*0x91f80a*/
  *(float *)&v39 = v17; /*0x91f811*/
  v18 = _mm_shuffle_ps((__m128)v39, (__m128)v39, 0); /*0x91f81c*/
  v50 = _mm_sub_ps(*a4, _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v15, v18), a8[5]), _mm_mul_ps(v18, v14))); /*0x91f83b*/
  (*(void (__thiscall **)(__m128 *, char *))(v16 + 0x3C))(a8, v51); /*0x91f843*/
  v19 = a7[6].m128_i32[3]; /*0x91f84d*/
  v20 = a7[5]; /*0x91f850*/
  v21 = a7[6]; /*0x91f854*/
  v22 = a8[6].m128_i32[3]; /*0x91f858*/
  v44[0] = a7[0xD]; /*0x91f85b*/
  v44[1] = a7[0xE]; /*0x91f867*/
  v43[0] = a8[0xD]; /*0x91f876*/
  v43[1] = a8[0xE]; /*0x91f886*/
  v49[0] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v19, (__m128)(unsigned int)v19, 0), _mm_sub_ps(v21, v20)); /*0x91f89b*/
  v49[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v19, (__m128)(unsigned int)v19, 0), a7[0xA]); /*0x91f8b4*/
  v23 = fabs(a4[1].m128_f32[0]); /*0x91f8cd*/
  v24 = fabs(a4[1].m128_f32[1]); /*0x91f8d6*/
  v41 = fabs(a4[1].m128_f32[2]); /*0x91f8e7*/
  v48[0] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v22, (__m128)(unsigned int)v22, 0), _mm_sub_ps(a8[6], a8[5])); /*0x91f8f7*/
  v25 = a4[1]; /*0x91f90c*/
  v26 = 0; /*0x91f910*/
  v48[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v22, (__m128)(unsigned int)v22, 0), a8[0xA]); /*0x91f918*/
  v45 = v25; /*0x91f920*/
  v27 = 1; /*0x91f925*/
  if ( v24 < v23 ) /*0x91f932*/
  {
    v27 = 0; /*0x91f936*/
    v40 = v24; /*0x91f8db*/
    v23 = v40; /*0x91f938*/
    v26 = 1; /*0x91f93c*/
  }
  if ( v41 >= v23 ) /*0x91f94e*/
  {
    v28 = 2; /*0x91f959*/
  }
  else
  {
    v28 = v26; /*0x91f950*/
    v26 = 2; /*0x91f952*/
  }
  v46[0].m128_i32[v26] = 0; /*0x91f95d*/
  v46[0].m128_i32[3] = 0; /*0x91f968*/
  v29 = v28; /*0x91f973*/
  v46[0].m128_i32[v27] = a4[1].m128_i32[v29]; /*0x91f981*/
  v46[0].m128_f32[v29] = -a4[1].m128_f32[v27]; /*0x91f996*/
  v30 = _mm_mul_ps(v46[0], v46[0]); /*0x91f9a8*/
  v31 = _mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0]; /*0x91f9b2*/
  v32 = _mm_shuffle_ps(v30, v30, 0xAA); /*0x91f9b9*/
  v33 = v32; /*0x91f9bd*/
  v33.m128_f32[0] = v32.m128_f32[0] + v31; /*0x91f9c6*/
  v42 = v33; /*0x91f9ca*/
  v42.m128_f32[0] = 1.0 / fsqrt(v32.m128_f32[0] + v31); /*0x91f9d3*/
  v34 = (__m128)0x3F000000u; /*0x91f9f2*/
  v34.m128_f32[0] = (float)(0.5 * v42.m128_f32[0]) /*0x91f9fc*/
                  * (float)(3.0 - (float)((float)((float)(v32.m128_f32[0] + v31) * v42.m128_f32[0]) * v42.m128_f32[0]));
  v35 = a4[1]; /*0x91fa0a*/
  v46[0] = _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v46[0]); /*0x91fa23*/
  v46[1] = _mm_sub_ps( /*0x91fa5b*/
             _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0xC9), _mm_shuffle_ps(v46[0], v46[0], 0xD2)),
             _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0xD2), _mm_shuffle_ps(v46[0], v46[0], 0xC9)));
  sub_94F6B0((__m128 *)&v53.m128_u32[3], &v50, &v45, v56); /*0x91fa63*/
  *(float *)a9 = sub_94FC90(v56, a6, v44, v43); /*0x91fa8a*/
  sub_94FB80(v56, v49, v43, &v42); /*0x91faa2*/
  sub_94FB80(v56, v44, v48, &v47); /*0x91fac7*/
  v36 = v47.m128_i32[0]; /*0x91fad0*/
  *(_DWORD *)(a9 + 4) = v42.m128_i32[0]; /*0x91fad7*/
  *(_DWORD *)(a9 + 8) = v36; /*0x91fae1*/
  (*(void (__thiscall **)(__m128 *, __m128 *))(a7->m128_i32[0] + 0x54))(a7, v44); /*0x91fae9*/
  (*(void (__thiscall **)(__m128 *, unsigned __int32 *))(a7->m128_i32[0] + 0x58))(a7, &v44[0].m128_u32[3]); /*0x91faf5*/
  (*(void (__thiscall **)(__m128 *, unsigned __int16 *))(a8->m128_i32[0] + 0x54))(a8, &v42.m128_u16[4]); /*0x91fb01*/
  return (*(int (__thiscall **)(__m128 *, __int16 *))(a8->m128_i32[0] + 0x58))(a8, &v43[0].m128_i16[2]); /*0x91fb13*/
}
