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

  v9 = (__m128)xmmword_A6DFE0;
  v10 = a7[6];
  v11 = a7->m128_i32[0];
  v12 = (a5 - a7[5].m128_f32[3]) * a7[6].m128_f32[3];
  v55 = a7[0xC].m128_i32[0];
  *(float *)&v38 = v12;
  v13 = _mm_shuffle_ps((__m128)v38, (__m128)v38, 0);
  v53 = _mm_sub_ps(*a4, _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v9, v13), a7[5]), _mm_mul_ps(v13, v10)));
  (*(void (__thiscall **)(__m128 *, char *, int, int, int))(v11 + 0x3C))(a7, v54, a2, a3, a1);
  v14 = a8[6];
  v15 = (__m128)xmmword_A6DFE0;
  v16 = a8->m128_i32[0];
  v17 = (a5 - a8[5].m128_f32[3]) * a8[6].m128_f32[3];
  v52 = a8[0xC].m128_i32[0];
  *(float *)&v39 = v17;
  v18 = _mm_shuffle_ps((__m128)v39, (__m128)v39, 0);
  v50 = _mm_sub_ps(*a4, _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v15, v18), a8[5]), _mm_mul_ps(v18, v14)));
  (*(void (__thiscall **)(__m128 *, char *))(v16 + 0x3C))(a8, v51);
  v19 = a7[6].m128_i32[3];
  v20 = a7[5];
  v21 = a7[6];
  v22 = a8[6].m128_i32[3];
  v44[0] = a7[0xD];
  v44[1] = a7[0xE];
  v43[0] = a8[0xD];
  v43[1] = a8[0xE];
  v49[0] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v19, (__m128)(unsigned int)v19, 0), _mm_sub_ps(v21, v20));
  v49[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v19, (__m128)(unsigned int)v19, 0), a7[0xA]);
  v23 = fabs(a4[1].m128_f32[0]);
  v24 = fabs(a4[1].m128_f32[1]);
  v41 = fabs(a4[1].m128_f32[2]);
  v48[0] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v22, (__m128)(unsigned int)v22, 0), _mm_sub_ps(a8[6], a8[5]));
  v25 = a4[1];
  v26 = 0;
  v48[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v22, (__m128)(unsigned int)v22, 0), a8[0xA]);
  v45 = v25;
  v27 = 1;
  if ( v24 < v23 )
  {
    v27 = 0;
    v40 = v24;
    v23 = v40;
    v26 = 1;
  }
  if ( v41 >= v23 )
  {
    v28 = 2;
  }
  else
  {
    v28 = v26;
    v26 = 2;
  }
  v46[0].m128_i32[v26] = 0;
  v46[0].m128_i32[3] = 0;
  v29 = v28;
  v46[0].m128_i32[v27] = a4[1].m128_i32[v29];
  v46[0].m128_f32[v29] = -a4[1].m128_f32[v27];
  v30 = _mm_mul_ps(v46[0], v46[0]);
  v31 = _mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0];
  v32 = _mm_shuffle_ps(v30, v30, 0xAA);
  v33 = v32;
  v33.m128_f32[0] = v32.m128_f32[0] + v31;
  v42 = v33;
  v42.m128_f32[0] = 1.0 / fsqrt(v32.m128_f32[0] + v31);
  v34 = (__m128)0x3F000000u;
  v34.m128_f32[0] = (float)(0.5 * v42.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v32.m128_f32[0] + v31) * v42.m128_f32[0]) * v42.m128_f32[0]));
  v35 = a4[1];
  v46[0] = _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v46[0]);
  v46[1] = _mm_sub_ps(
             _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0xC9), _mm_shuffle_ps(v46[0], v46[0], 0xD2)),
             _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0xD2), _mm_shuffle_ps(v46[0], v46[0], 0xC9)));
  sub_94F6B0((__m128 *)&v53.m128_u32[3], &v50, &v45, v56);
  *(float *)a9 = sub_94FC90(v56, a6, v44, v43);
  sub_94FB80(v56, v49, v43, &v42);
  sub_94FB80(v56, v44, v48, &v47);
  v36 = v47.m128_i32[0];
  *(_DWORD *)(a9 + 4) = v42.m128_i32[0];
  *(_DWORD *)(a9 + 8) = v36;
  (*(void (__thiscall **)(__m128 *, __m128 *))(a7->m128_i32[0] + 0x54))(a7, v44);
  (*(void (__thiscall **)(__m128 *, unsigned __int32 *))(a7->m128_i32[0] + 0x58))(a7, &v44[0].m128_u32[3]);
  (*(void (__thiscall **)(__m128 *, unsigned __int16 *))(a8->m128_i32[0] + 0x54))(a8, &v42.m128_u16[4]);
  return (*(int (__thiscall **)(__m128 *, __int16 *))(a8->m128_i32[0] + 0x58))(a8, &v43[0].m128_i16[2]);
}
