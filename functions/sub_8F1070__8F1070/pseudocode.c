__m128 *__cdecl sub_8F1070(__m128 *a1, int a2, __m128 *a3, float *a4)
{
  __m128 *v4; // ecx
  __m128 *v5; // edx
  __m128 v6; // xmm0
  __m128 *result; // eax
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  double v10; // st7

  v4 = *(__m128 **)(a2 + 0x14); /*0x8f107c*/
  v5 = *(__m128 **)(a2 + 0x18); /*0x8f107f*/
  v6 = *a1; /*0x8f108a*/
  result = a3; /*0x8f108f*/
  if ( !v4->m128_i8[0xC] ) /*0x8f1082*/
    v6 = _mm_add_ps( /*0x8f10c1*/
           _mm_add_ps(_mm_mul_ps(v4[5], _mm_shuffle_ps(v6, v6, 0)), _mm_mul_ps(v4[6], _mm_shuffle_ps(v6, v6, 0x55))),
           _mm_mul_ps(v4[7], _mm_shuffle_ps(v6, v6, 0xAA)));
  *a3 = v6; /*0x8f10c4*/
  if ( v5->m128_i8[0xC] ) /*0x8f10c7*/
  {
    a3[1] = _mm_xor_ps(*a1, (__m128)xmmword_A965C0); /*0x8f10db*/
  }
  else
  {
    v8 = _mm_xor_ps(*a1, (__m128)xmmword_A965C0); /*0x8f10f3*/
    a3[1] = _mm_add_ps( /*0x8f111e*/
              _mm_add_ps(_mm_mul_ps(v5[5], _mm_shuffle_ps(v8, v8, 0)), _mm_mul_ps(v5[6], _mm_shuffle_ps(v8, v8, 0x55))),
              _mm_mul_ps(v5[7], _mm_shuffle_ps(v8, v8, 0xAA)));
  }
  v9 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(*a3, *a3), v4[3]), _mm_mul_ps(_mm_mul_ps(a3[1], a3[1]), v5[3])); /*0x8f1149*/
  v10 = fConstant_1 /*0x8f1179*/
      / ((float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]))
       + flt_A9B1EC);
  a3->m128_f32[3] = v10; /*0x8f117f*/
  *a4 = v10; /*0x8f1182*/
  return result; /*0x8f1184*/
}
