float *__cdecl sub_8D1EF0(__m128 *a1, float *a2)
{
  __m128 v2; // xmm2
  __m128 v3; // xmm0
  __m128 v4; // xmm6
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  float v7; // xmm3_4
  __m128 v9; // xmm2
  float v10; // xmm5_4
  __m128 v11; // xmm2
  float v12; // xmm3_4
  float v13; // xmm4_4
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  double v16; // st7
  float v17; // [esp+Ch] [ebp-14h]
  float v18; // [esp+10h] [ebp-10h]
  float v19; // [esp+10h] [ebp-10h]

  v2 = a1[1];
  v3 = _mm_sub_ps(a1[2], v2);
  v4 = _mm_sub_ps(v2, *a1);
  v5 = _mm_sub_ps(*a1, a1[2]);
  v6 = _mm_mul_ps(v3, v3);
  v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]);
  v7 = fsqrt(v6.m128_f32[0]);
  *a2 = (float)(0.5 * (float)(1.0 / v7))
      * (float)(3.0 - (float)((float)(v6.m128_f32[0] * (float)(1.0 / v7)) * (float)(1.0 / v7)));
  v9 = _mm_mul_ps(v5, v5);
  v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
  v10 = fsqrt(v9.m128_f32[0]);
  v17 = (float)(0.5 * (float)(1.0 / v10))
      * (float)(3.0 - (float)((float)(v9.m128_f32[0] * (float)(1.0 / v10)) * (float)(1.0 / v10)));
  v11 = _mm_mul_ps(v4, v4);
  v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
  v18 = 1.0 / fsqrt(v11.m128_f32[0]);
  v12 = 3.0 - (float)((float)(v11.m128_f32[0] * v18) * v18);
  v13 = 0.5 * v18;
  a2[1] = v17;
  v14 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xC9), _mm_shuffle_ps(v5, v5, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xD2), _mm_shuffle_ps(v5, v5, 0xC9)));
  v15 = _mm_mul_ps(v14, v14);
  v19 = fsqrt(
          _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]));
  v16 = fConstant_1 / v19;
  a2[2] = v13 * v12;
  a2[4] = v19;
  a2[3] = v16;
  return a2;
}
