__m128 *__cdecl sub_8F1CC0(__m128 *a1, __m128 *a2, int a3, __m128 **a4)
{
  __m128 *v4; // ecx
  __m128 *v5; // esi
  __m128 *result; // eax
  __m128 *v7; // edi
  __m128 *v8; // edx
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  double v15; // st7
  __m128 v16; // xmm0
  bool v17; // zf
  int v18; // [esp+14h] [ebp-Ch]

  v4 = *(__m128 **)(a3 + 0x14); /*0x8f1ccf*/
  v5 = *(__m128 **)(a3 + 0x18); /*0x8f1cd4*/
  result = *a4; /*0x8f1cd7*/
  v7 = a4[1]; /*0x8f1cda*/
  v8 = (__m128 *)xmmword_B2F090; /*0x8f1cdd*/
  v18 = 3; /*0x8f1ce2*/
  do /*0x8f1ea2*/
  {
    *result = *v8; /*0x8f1cf6*/
    v9 = _mm_sub_ps(*a1, v4[4]); /*0x8f1d07*/
    v10 = _mm_sub_ps(*a2, v5[4]); /*0x8f1d12*/
    v11 = _mm_sub_ps( /*0x8f1d3d*/
            _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0xC9), _mm_shuffle_ps(*v8, *v8, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0xD2), _mm_shuffle_ps(*v8, *v8, 0xC9)));
    if ( !v4->m128_i8[0xC] ) /*0x8f1d0d*/
      v11 = _mm_add_ps( /*0x8f1d6f*/
              _mm_add_ps(
                _mm_mul_ps(v4[5], _mm_shuffle_ps(v11, v11, 0)),
                _mm_mul_ps(v4[6], _mm_shuffle_ps(v11, v11, 0x55))),
              _mm_mul_ps(v4[7], _mm_shuffle_ps(v11, v11, 0xAA)));
    result[1] = v11; /*0x8f1d72*/
    v12 = _mm_sub_ps( /*0x8f1da3*/
            _mm_mul_ps(_mm_shuffle_ps(*v8, *v8, 0xC9), _mm_shuffle_ps(v10, v10, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(*v8, *v8, 0xD2), _mm_shuffle_ps(v10, v10, 0xC9)));
    if ( !v5->m128_i8[0xC] ) /*0x8f1d79*/
      v12 = _mm_add_ps( /*0x8f1dd5*/
              _mm_add_ps(
                _mm_mul_ps(v5[5], _mm_shuffle_ps(v12, v12, 0)),
                _mm_mul_ps(v5[6], _mm_shuffle_ps(v12, v12, 0x55))),
              _mm_mul_ps(v5[7], _mm_shuffle_ps(v12, v12, 0xAA)));
    v13 = result[1]; /*0x8f1dd8*/
    result[2] = v12; /*0x8f1ddc*/
    v14 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v13, v13), v4[3]), _mm_mul_ps(_mm_mul_ps(result[2], result[2]), v5[3])); /*0x8f1e10*/
    v15 = v5[3].m128_f32[3] /*0x8f1e31*/
        + v4[3].m128_f32[3]
        + flt_A9B1EC
        + (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]));
    v7 = (__m128 *)((char *)v7 + 4); /*0x8f1e38*/
    result[2].m128_f32[3] = v15; /*0x8f1e3b*/
    result += 3; /*0x8f1e3e*/
    ++v8; /*0x8f1e47*/
    result[0xFFFFFFFE].m128_f32[3] = fConstant_1 / v15; /*0x8f1e4c*/
    v16 = _mm_mul_ps(_mm_sub_ps(*a2, *a1), v8[0xFFFFFFFF]); /*0x8f1e64*/
    v17 = v18-- == 1; /*0x8f1e93*/
    result[0xFFFFFFFD].m128_f32[3] = (float)(_mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x8f1e98*/
                                           + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]))
                                   * *(float *)(a3 + 4);
    v7[0xFFFFFFFF].m128_i32[3] = 0x3040D; /*0x8f1e9b*/
  }
  while ( !v17 ); /*0x8f1ea2*/
  a4[1] = v7; /*0x8f1eab*/
  *a4 = result; /*0x8f1eb0*/
  return result; /*0x8f1eae*/
}
