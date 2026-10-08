void __cdecl sub_92D400(float *a1, float *a2, __m128 *a3)
{
  long double v3; // st7
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  float v6; // xmm2_4
  float v7; // xmm3_4
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  float v10; // xmm1_4
  __m128 v11; // xmm4
  float v12; // xmm5_4
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  float v20; // xmm2_4
  float v21; // xmm5_4
  float v22; // [esp+Ch] [ebp-24h]
  __m128 v23; // [esp+10h] [ebp-20h]
  __m128 v24; // [esp+20h] [ebp-10h]
  float v25; // [esp+20h] [ebp-10h]

  v3 = *a1 - *a2; /*0x92d411*/
  v23.m128_f32[0] = v3; /*0x92d413*/
  v22 = a1[1] - a2[1]; /*0x92d41d*/
  v23.m128_f32[1] = v22; /*0x92d421*/
  v23.m128_f32[2] = a1[2] - a2[2]; /*0x92d42b*/
  v23.m128_f32[3] = a1[3] - a2[3]; /*0x92d435*/
  if ( fabs(v3) >= flt_A372CC || fabs(v22) >= flt_A372CC ) /*0x92d45d*/
  {
    v9 = _mm_mul_ps(v23, v23); /*0x92d53a*/
    v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] /*0x92d552*/
                   + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
    v10 = 1.0 / fsqrt(v9.m128_f32[0]); /*0x92d565*/
    v11 = (__m128)0x3F000000u; /*0x92d588*/
    v12 = 3.0 - (float)((float)(v9.m128_f32[0] * v10) * v10); /*0x92d591*/
    v13 = (__m128)0x3F000000u; /*0x92d595*/
    v13.m128_f32[0] = (float)(0.5 * v10) * v12; /*0x92d59c*/
    v14 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v23); /*0x92d5aa*/
    v15 = _mm_shuffle_ps(v14, v14, 0xD2); /*0x92d5b3*/
    v16 = _mm_shuffle_ps(v14, v14, 0xC9); /*0x92d5b7*/
    v17 = _mm_sub_ps( /*0x92d5fa*/
            _mm_mul_ps(v16, _mm_shuffle_ps((__m128)0x3F80000000000000uLL, (__m128)0x3F80000000000000uLL, 0xD2)),
            _mm_mul_ps(v15, _mm_shuffle_ps((__m128)0x3F80000000000000uLL, (__m128)0x3F80000000000000uLL, 0xC9)));
    *a3 = v17; /*0x92d5fd*/
    v18 = _mm_mul_ps(v17, v17); /*0x92d600*/
    if ( (float)(_mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] /*0x92d630*/
               + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0])) < (double)flt_AA1C3C )
    {
      v24.m128_u64[0] = 0; /*0x92d632*/
      v24.m128_u64[1] = 0x3F800000; /*0x92d642*/
      *a3 = _mm_sub_ps(_mm_mul_ps(v16, _mm_shuffle_ps(v24, v24, 0xD2)), _mm_mul_ps(v15, _mm_shuffle_ps(v24, v24, 0xC9))); /*0x92d66e*/
    }
    v19 = _mm_mul_ps(*a3, *a3); /*0x92d677*/
    v20 = _mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]; /*0x92d681*/
    v21 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]; /*0x92d688*/
    v25 = 1.0 / fsqrt(v21 + v20); /*0x92d69c*/
    v11.m128_f32[0] = (float)(0.5 * v25) * (float)(3.0 - (float)((float)((float)(v21 + v20) * v25) * v25)); /*0x92d6b7*/
    *a3 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), *a3); /*0x92d6c5*/
  }
  else
  {
    v4 = _mm_sub_ps( /*0x92d4b8*/
           _mm_mul_ps(
             _mm_shuffle_ps(v23, v23, 0xC9),
             _mm_shuffle_ps((__m128)0x3F800000uLL, (__m128)0x3F800000uLL, 0xD2)),
           _mm_mul_ps(
             _mm_shuffle_ps(v23, v23, 0xD2),
             _mm_shuffle_ps((__m128)0x3F800000uLL, (__m128)0x3F800000uLL, 0xC9)));
    v5 = _mm_mul_ps(v4, v4); /*0x92d4be*/
    v5.m128_f32[0] = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] /*0x92d4d6*/
                   + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
    v6 = 1.0 / fsqrt(v5.m128_f32[0]); /*0x92d4e9*/
    v7 = 3.0 - (float)((float)(v5.m128_f32[0] * v6) * v6); /*0x92d504*/
    v8 = (__m128)0x3F000000u; /*0x92d510*/
    v8.m128_f32[0] = (float)(0.5 * v6) * v7; /*0x92d51a*/
    *a3 = _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v4); /*0x92d528*/
  }
}
