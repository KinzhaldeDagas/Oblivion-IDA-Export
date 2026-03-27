__m128 *__cdecl sub_8F1790(__m128 *a1, int a2, __m128 **a3)
{
  __m128 *v3; // edx
  __m128 *v4; // esi
  __m128 *v5; // eax
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  double v12; // st7
  __m128 *result; // eax
  __m128 v14; // xmm0
  __m128 *v15; // [esp+1Ch] [ebp-4h]

  v3 = *(__m128 **)(a2 + 0x14);
  v4 = *(__m128 **)(a2 + 0x18);
  v5 = *a3;
  v15 = a3[1];
  **a3 = a1[2];
  v6 = _mm_sub_ps(*a1, v3[4]);
  v7 = _mm_sub_ps(a1[1], v4[4]);
  v8 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xC9), _mm_shuffle_ps(a1[2], a1[2], 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xD2), _mm_shuffle_ps(a1[2], a1[2], 0xC9)));
  if ( !v3->m128_i8[0xC] )
    v8 = _mm_add_ps(
           _mm_add_ps(_mm_mul_ps(v3[5], _mm_shuffle_ps(v8, v8, 0)), _mm_mul_ps(v3[6], _mm_shuffle_ps(v8, v8, 0x55))),
           _mm_mul_ps(v3[7], _mm_shuffle_ps(v8, v8, 0xAA)));
  v5[1] = v8;
  v9 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(a1[2], a1[2], 0xC9), _mm_shuffle_ps(v7, v7, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(a1[2], a1[2], 0xD2), _mm_shuffle_ps(v7, v7, 0xC9)));
  if ( !v4->m128_i8[0xC] )
    v9 = _mm_add_ps(
           _mm_add_ps(_mm_mul_ps(v4[5], _mm_shuffle_ps(v9, v9, 0)), _mm_mul_ps(v4[6], _mm_shuffle_ps(v9, v9, 0x55))),
           _mm_mul_ps(v4[7], _mm_shuffle_ps(v9, v9, 0xAA)));
  v10 = v5[1];
  v5[2] = v9;
  v11 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v10, v10), v3[3]), _mm_mul_ps(_mm_mul_ps(v5[2], v5[2]), v4[3]));
  v12 = v4[3].m128_f32[3]
      + v3[3].m128_f32[3]
      + flt_A9B1EC
      + (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]));
  result = v5 + 3;
  result[0xFFFFFFFF].m128_f32[3] = v12;
  result[0xFFFFFFFE].m128_f32[3] = fConstant_1 / v12;
  v14 = _mm_mul_ps(_mm_sub_ps(a1[1], *a1), a1[2]);
  result[0xFFFFFFFD].m128_f32[3] = (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                                         + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]))
                                 * *(float *)(a2 + 4);
  v15->m128_i32[0] = 0x3040D;
  *a3 = result;
  a3[1] = (__m128 *)&v15->m128_i16[2];
  return result;
}
