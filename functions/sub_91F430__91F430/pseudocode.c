void __cdecl sub_91F430(__m128 *a1, __m128 *a2)
{
  __m128 v2; // xmm2
  __m128 v3; // xmm0
  float v4; // xmm1_4
  __m128 v5; // xmm3
  __m128 v6; // xmm0
  __m128 v7; // xmm4
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm3
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  double v18; // st7
  float v19; // xmm2_4
  __m128 v20; // xmm4
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  unsigned int v23; // [esp+Ch] [ebp-74h]
  __m128 v24; // [esp+10h] [ebp-70h] BYREF
  __m128 v25; // [esp+20h] [ebp-60h]
  __int128 v26; // [esp+30h] [ebp-50h]
  __m128 v27; // [esp+40h] [ebp-40h]
  __m128 v28[3]; // [esp+50h] [ebp-30h] BYREF

  v2 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(a1[1], a1[1], 0xC9), _mm_shuffle_ps(a1[2], a1[2], 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(a1[1], a1[1], 0xD2), _mm_shuffle_ps(a1[2], a1[2], 0xC9)));
  v3 = _mm_mul_ps(v2, v2);
  if ( (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0])) >= (double)flt_A9DD54 )
  {
    v4 = _mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0];
    v5 = _mm_shuffle_ps(v3, v3, 0xAA);
    v6 = v5;
    v6.m128_f32[0] = v5.m128_f32[0] + v4;
    v24 = v6;
    v24.m128_f32[0] = 1.0 / fsqrt(v5.m128_f32[0] + v4);
    v26 = 0x40400000u;
    v7 = (__m128)0x3F000000u;
    v27 = (__m128)0x3F000000u;
    v7.m128_f32[0] = 0.5 * v24.m128_f32[0];
    v8 = v7;
    v8.m128_f32[0] = (float)(0.5 * v24.m128_f32[0])
                   * (float)(3.0 - (float)((float)((float)(v5.m128_f32[0] + v4) * v24.m128_f32[0]) * v24.m128_f32[0]));
    v9 = a1[3];
    v10 = _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v2);
    v11 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xC9), _mm_shuffle_ps(v9, v9, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xD2), _mm_shuffle_ps(v9, v9, 0xC9)));
    v12 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v9, v9, 0xC9));
    v13 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v9, v9, 0xD2));
    v28[0] = v11;
    v14 = a1[3];
    v28[1] = _mm_sub_ps(v13, v12);
    v15 = a1[4];
    v28[2] = v14;
    v24 = _mm_sub_ps(v15, a1[7]);
    sub_88FD90(&v24, v28, &v24);
    v16 = _mm_sub_ps(a1[5], v24);
    v17 = _mm_mul_ps(v16, v16);
    if ( a1[6].m128_f32[0] * a1[6].m128_f32[0] < (float)(_mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
                                                       + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0]
                                                               + v17.m128_f32[0]))
                                               * a1->m128_f32[0] )
    {
      v18 = a1[6].m128_f32[0] / a1->m128_f32[0];
      v19 = _mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0];
      v20 = _mm_shuffle_ps(v17, v17, 0xAA);
      v21 = v20;
      v21.m128_f32[0] = v20.m128_f32[0] + v19;
      v25 = v21;
      v25.m128_f32[0] = 1.0 / fsqrt(v20.m128_f32[0] + v19);
      v22 = v27;
      v22.m128_f32[0] = (float)(v27.m128_f32[0] * v25.m128_f32[0])
                      * (float)(*(float *)&v26
                              - (float)((float)((float)(v20.m128_f32[0] + v19) * v25.m128_f32[0]) * v25.m128_f32[0]));
      *(float *)&v23 = v18;
      v16 = _mm_mul_ps(_mm_shuffle_ps((__m128)v23, (__m128)v23, 0), _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v16));
    }
    v24 = _mm_add_ps(v24, _mm_mul_ps(_mm_shuffle_ps((__m128)a1->m128_u32[0], (__m128)a1->m128_u32[0], 0), v16));
    sub_88FE00(a2, v28, &v24);
    *a2 = _mm_add_ps(*a2, a1[7]);
  }
}
