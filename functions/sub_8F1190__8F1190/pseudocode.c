float *__cdecl sub_8F1190(__m128 *a1, __m128 *a2, int a3, __m128 *a4, float *a5)
{
  __m128 *v5; // eax
  __m128 *v6; // ecx
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  double v13; // st7
  double v15; // st7

  v5 = *(__m128 **)(a3 + 0x14);
  v6 = *(__m128 **)(a3 + 0x18);
  *a4 = *a1;
  v7 = _mm_sub_ps(*a2, v5[4]);
  v8 = _mm_sub_ps(*a2, v6[4]);
  v9 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xC9), _mm_shuffle_ps(*a1, *a1, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xD2), _mm_shuffle_ps(*a1, *a1, 0xC9)));
  if ( !v5->m128_i8[0xC] )
    v9 = _mm_add_ps(
           _mm_add_ps(_mm_mul_ps(v5[5], _mm_shuffle_ps(v9, v9, 0)), _mm_mul_ps(v5[6], _mm_shuffle_ps(v9, v9, 0x55))),
           _mm_mul_ps(v5[7], _mm_shuffle_ps(v9, v9, 0xAA)));
  a4[1] = v9;
  v10 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(*a1, *a1, 0xC9), _mm_shuffle_ps(v8, v8, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(*a1, *a1, 0xD2), _mm_shuffle_ps(v8, v8, 0xC9)));
  if ( !v6->m128_i8[0xC] )
    v10 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(v6[5], _mm_shuffle_ps(v10, v10, 0)),
              _mm_mul_ps(v6[6], _mm_shuffle_ps(v10, v10, 0x55))),
            _mm_mul_ps(v6[7], _mm_shuffle_ps(v10, v10, 0xAA)));
  v11 = a4[1];
  a4[2] = v10;
  v12 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v11, v11), v5[3]), _mm_mul_ps(_mm_mul_ps(a4[2], a4[2]), v6[3]));
  v13 = v6[3].m128_f32[3]
      + v5[3].m128_f32[3]
      + flt_A9B1EC
      + (float)(_mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]));
  a4[2].m128_f32[3] = v13;
  v15 = fConstant_1 / v13;
  a4[1].m128_f32[3] = v15;
  *a5 = v15;
  return a5;
}
