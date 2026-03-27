__m128 *__cdecl sub_8F15F0(__m128 *a1, int a2, __m128 **a3)
{
  __m128 *result; // eax
  __m128 *v4; // ecx
  __m128 *v5; // edx
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  double v12; // st7
  double v13; // st7
  __m128 *v14; // ecx
  double v15; // st6

  result = *a3;
  v4 = *(__m128 **)(a2 + 0x14);
  v5 = *(__m128 **)(a2 + 0x18);
  **a3 = a1[1];
  v6 = _mm_sub_ps(*a1, v4[4]);
  v7 = _mm_sub_ps(*a1, v5[4]);
  v8 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xC9), _mm_shuffle_ps(a1[1], a1[1], 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xD2), _mm_shuffle_ps(a1[1], a1[1], 0xC9)));
  if ( !v4->m128_i8[0xC] )
    v8 = _mm_add_ps(
           _mm_add_ps(_mm_mul_ps(v4[5], _mm_shuffle_ps(v8, v8, 0)), _mm_mul_ps(v4[6], _mm_shuffle_ps(v8, v8, 0x55))),
           _mm_mul_ps(v4[7], _mm_shuffle_ps(v8, v8, 0xAA)));
  result[1] = v8;
  v9 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(a1[1], a1[1], 0xC9), _mm_shuffle_ps(v7, v7, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(a1[1], a1[1], 0xD2), _mm_shuffle_ps(v7, v7, 0xC9)));
  if ( !v5->m128_i8[0xC] )
    v9 = _mm_add_ps(
           _mm_add_ps(_mm_mul_ps(v5[5], _mm_shuffle_ps(v9, v9, 0)), _mm_mul_ps(v5[6], _mm_shuffle_ps(v9, v9, 0x55))),
           _mm_mul_ps(v5[7], _mm_shuffle_ps(v9, v9, 0xAA)));
  v10 = result[1];
  result[2] = v9;
  v11 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v10, v10), v4[3]), _mm_mul_ps(_mm_mul_ps(result[2], result[2]), v5[3]));
  v12 = v5[3].m128_f32[3]
      + v4[3].m128_f32[3]
      + flt_A9B1EC
      + (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]));
  result[2].m128_f32[3] = v12;
  result[1].m128_f32[3] = fConstant_1 / v12;
  v13 = *(float *)(a1[2].m128_i32[1] + 4);
  v14 = a3[1];
  v15 = a1[2].m128_f32[0] * *(float *)a2;
  v14->m128_i32[0] = 0x30806;
  v14 = (__m128 *)((char *)v14 + 8);
  v14[0xFFFFFFFF].m128_f32[3] = v15;
  *a3 = result + 3;
  a3[1] = v14;
  result->m128_f32[3] = v13 * *(float *)(a2 + 4);
  return result;
}
