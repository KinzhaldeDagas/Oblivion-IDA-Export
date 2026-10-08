int __cdecl sub_8B51C0(__m128 *a1, __m128 *a2, float a3, float a4, __m128 *a5)
{
  __m128 v5; // xmm2
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  float v8; // xmm1_4
  __m128 v9; // xmm3
  __m128 v10; // xmm0
  __m128 v11; // xmm5
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  float v18; // xmm3_4
  __m128 v19; // xmm1
  __m128 v20; // xmm1
  double v21; // st7
  double v22; // st6
  double v23; // st6
  double v24; // st6
  double v25; // st7
  int v26; // ecx
  float v28; // [esp+0h] [ebp-134h]
  float v29; // [esp+10h] [ebp-124h]
  __m128 v30; // [esp+14h] [ebp-120h] BYREF
  float v31; // [esp+30h] [ebp-104h]
  __m128 v32; // [esp+34h] [ebp-100h] BYREF
  __m128 v33; // [esp+44h] [ebp-F0h] BYREF
  _DWORD *v34[2]; // [esp+54h] [ebp-E0h] BYREF
  int v35; // [esp+5Ch] [ebp-D8h]
  float v36; // [esp+64h] [ebp-D0h] BYREF
  unsigned int v37; // [esp+68h] [ebp-CCh]
  __m128 v38; // [esp+74h] [ebp-C0h]
  __m128 v39; // [esp+84h] [ebp-B0h] BYREF
  __int128 v40; // [esp+94h] [ebp-A0h]
  __int128 v41; // [esp+A4h] [ebp-90h]
  __int128 v42; // [esp+B4h] [ebp-80h]
  __int128 v43; // [esp+C4h] [ebp-70h]
  __int128 v44; // [esp+D4h] [ebp-60h]
  __m128 v45; // [esp+E4h] [ebp-50h]
  __int128 v46; // [esp+F4h] [ebp-40h] BYREF
  __int128 v47; // [esp+104h] [ebp-30h]
  __int128 v48; // [esp+114h] [ebp-20h]
  __m128 v49; // [esp+124h] [ebp-10h]

  if ( a4 <= (double)*(float *)&SrcStr ) /*0x8b51dc*/
    return 1; /*0x8b51dc*/
  if ( a3 <= (double)*(float *)&SrcStr ) /*0x8b51f0*/
    return 1; /*0x8b51f0*/
  v5 = _mm_sub_ps(*a2, *a1); /*0x8b5202*/
  v6 = _mm_mul_ps(v5, v5); /*0x8b5208*/
  v7 = _mm_shuffle_ps(v6, v6, 0xAA); /*0x8b521c*/
  v7.m128_f32[0] = v7.m128_f32[0] + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]); /*0x8b5220*/
  v30 = v7; /*0x8b5224*/
  v29 = fsqrt(v7.m128_f32[0]); /*0x8b523c*/
  if ( v29 <= (double)*(float *)&SrcStr ) /*0x8b524f*/
    return 1; /*0x8b55c6*/
  v8 = _mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]; /*0x8b525c*/
  v9 = _mm_shuffle_ps(v6, v6, 0xAA); /*0x8b5263*/
  v10 = v9; /*0x8b5267*/
  v10.m128_f32[0] = v9.m128_f32[0] + v8; /*0x8b526a*/
  v30 = v10; /*0x8b526e*/
  v30.m128_f32[0] = 1.0 / fsqrt(v9.m128_f32[0] + v8); /*0x8b5277*/
  v11 = (__m128)0x3F000000u; /*0x8b52a0*/
  v12 = (__m128)0x3F000000u; /*0x8b52ad*/
  v12.m128_f32[0] = (float)(0.5 * v30.m128_f32[0]) /*0x8b52b4*/
                  * (float)(3.0 - (float)((float)((float)(v9.m128_f32[0] + v8) * v30.m128_f32[0]) * v30.m128_f32[0]));
  v13 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v5); /*0x8b52bf*/
  v14 = (__m128)xmmword_B2F0B0; /*0x8b52c2*/
  v15 = _mm_mul_ps(v13, (__m128)xmmword_B2F0B0); /*0x8b52cc*/
  v32 = (__m128)0x3F000000u; /*0x8b52f3*/
  if ( fabs((float)(_mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0] /*0x8b5303*/
                  + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]))) >= flt_A97F54 )
  {
    v46 = 0; /*0x8b53de*/
    v47 = 0; /*0x8b53e6*/
    v48 = 0; /*0x8b53ee*/
    LODWORD(v46) = 0x3F800000; /*0x8b53f6*/
    DWORD1(v47) = 0x3F800000; /*0x8b5401*/
    DWORD2(v48) = 0x3F800000; /*0x8b540c*/
  }
  else
  {
    v16 = _mm_sub_ps( /*0x8b532e*/
            _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v13, v13, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v13, v13, 0xC9)));
    v17 = _mm_mul_ps(v16, v16); /*0x8b5334*/
    v17.m128_f32[0] = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x8b534c*/
                    + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
    v30.m128_f32[0] = 1.0 / fsqrt(v17.m128_f32[0]); /*0x8b5359*/
    v18 = 3.0 - (float)((float)(v17.m128_f32[0] * v30.m128_f32[0]) * v30.m128_f32[0]); /*0x8b536c*/
    v11.m128_f32[0] = 0.5 * v30.m128_f32[0]; /*0x8b5370*/
    v19 = v11; /*0x8b5374*/
    v19.m128_f32[0] = (float)(0.5 * v30.m128_f32[0]) * v18; /*0x8b5377*/
    v30 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v16); /*0x8b53a8*/
    v28 = sub_8A2AF0( /*0x8b53b2*/
            _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]));
    hkQuaternion_SetAxisAngleScaled(&v33, &v30, v28); /*0x8b53be*/
    hkMatrix3_SetFromQuaternion((float *)&v46, v33.m128_f32); /*0x8b53cf*/
    v11 = v32; /*0x8b53d4*/
  }
  v20 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), _mm_add_ps(*a1, *a2)); /*0x8b5445*/
  v31 = v29 * a3 * a3 * flt_A97F28; /*0x8b544b*/
  v39 = 0; /*0x8b544f*/
  v40 = 0; /*0x8b545a*/
  v21 = a3 * a3; /*0x8b5462*/
  v38 = 0; /*0x8b5465*/
  v42 = v46; /*0x8b546e*/
  v41 = 0; /*0x8b5482*/
  v22 = v29 * v29 * flt_A41304; /*0x8b548e*/
  v33 = 0; /*0x8b549c*/
  v23 = v22 * flt_A7C038; /*0x8b54a7*/
  v43 = v47; /*0x8b54af*/
  v24 = v23 + v21 * flt_A41304; /*0x8b54cd*/
  v49 = v20; /*0x8b54cf*/
  v34[0] = &v36; /*0x8b54d7*/
  v35 = 0x80000001; /*0x8b54db*/
  v39.m128_f32[0] = v24; /*0x8b54e3*/
  v36 = 0.0; /*0x8b54ea*/
  *((float *)&v40 + 1) = v24; /*0x8b54f2*/
  v37 = 0; /*0x8b54f9*/
  v34[1] = (_DWORD *)1; /*0x8b5501*/
  v25 = v21 * kHeadBodyNormalMatchRadius; /*0x8b5509*/
  v44 = v48; /*0x8b550f*/
  v45 = v20; /*0x8b5517*/
  v38 = 0u; /*0x8b551f*/
  *((float *)&v41 + 2) = v25; /*0x8b5527*/
  v32 = (__m128)LODWORD(a4); /*0x8b5549*/
  sub_8D2A60(&v39, &v32); /*0x8b554e*/
  v36 = v31; /*0x8b5562*/
  v38 = v33; /*0x8b556c*/
  v37 = LODWORD(a4); /*0x8b5571*/
  sub_8B3E60((int *)v34, a5); /*0x8b5575*/
  if ( v35 >= 0 ) /*0x8b5583*/
  {
    v26 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8b5595*/
    if ( !v26 ) /*0x8b559d*/
      v26 = unk_BA7D9C; /*0x8b559f*/
    sub_8A75D0(v26, v34[0], 0x90 * (v35 & 0x3FFFFFFF), 0x14); /*0x8b55b8*/
  }
  return 0; /*0x8b55c1*/
}
