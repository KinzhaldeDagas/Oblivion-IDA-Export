float *__cdecl sub_8F35D0(
        __m128 *a1,
        __m128 *a2,
        __m128 *a3,
        __m128 *a4,
        float *a5,
        float *a6,
        float *a7,
        __m128 *a8,
        __m128 *a9)
{
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  float v12; // xmm5_4
  __m128 v13; // xmm0
  float v14; // xmm4_4
  float v15; // xmm5_4
  __m128 v16; // xmm0
  float v17; // xmm5_4
  float v18; // xmm4_4
  __m128 v19; // xmm0
  float v20; // xmm3_4
  __m128 v21; // xmm0
  long double v22; // st7
  double v23; // st6
  long double v24; // st6
  double v25; // st6
  __m128 v26; // xmm1
  __m128 v27; // xmm0
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __m128 v30; // xmm0
  __m128 v31; // xmm0
  float v33; // [esp+Ch] [ebp-18h]
  float v34; // [esp+10h] [ebp-14h]
  float v35; // [esp+14h] [ebp-10h]
  float v36; // [esp+18h] [ebp-Ch]
  float v37; // [esp+20h] [ebp-4h] BYREF

  v9 = _mm_sub_ps(*a3, *a1);
  v10 = *a4;
  v11 = _mm_mul_ps(*a2, *a4);
  v12 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
  v13 = _mm_mul_ps(*a2, v9);
  v14 = _mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0];
  v33 = v12;
  v15 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0];
  v16 = _mm_mul_ps(*a4, v9);
  v17 = v15 + v14;
  v18 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
  v19 = _mm_mul_ps(*a2, *a2);
  v37 = v17;
  v9.m128_f32[0] = _mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0];
  v20 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0];
  v21 = _mm_mul_ps(v10, v10);
  v34 = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]);
  v22 = v34 * (float)(v20 + v9.m128_f32[0]);
  v23 = v33 * v33;
  v35 = v23;
  v24 = v22 - v23;
  if ( (fabs(v22) + v35) * flt_A99EFC >= fabs(v24) )
  {
    *a6 = 0.0;
  }
  else
  {
    v36 = v24;
    *a6 = (v34 * v37 - v18 * v33) / v36;
  }
  v25 = (v33 * *a6 - v18) / v34;
  *a7 = v25;
  v26 = *a2;
  v37 = *a6;
  v27 = (__m128)LODWORD(v37);
  v37 = v25;
  v28 = _mm_add_ps(*a1, _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v26));
  v29 = _mm_add_ps(*a3, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v37), (__m128)LODWORD(v37), 0), *a4));
  *a8 = v28;
  v30 = _mm_sub_ps(v28, v29);
  v31 = _mm_mul_ps(v30, v30);
  *a9 = v29;
  v37 = _mm_shuffle_ps(v31, v31, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]);
  *a5 = v37;
  return &v37;
}
