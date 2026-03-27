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

  v4 = *(__m128 **)(a3 + 0x14);
  v5 = *(__m128 **)(a3 + 0x18);
  result = *a4;
  v7 = a4[1];
  v8 = (__m128 *)xmmword_B2F090;
  v18 = 3;
  do
  {
    *result = *v8;
    v9 = _mm_sub_ps(*a1, v4[4]);
    v10 = _mm_sub_ps(*a2, v5[4]);
    v11 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0xC9), _mm_shuffle_ps(*v8, *v8, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0xD2), _mm_shuffle_ps(*v8, *v8, 0xC9)));
    if ( !v4->m128_i8[0xC] )
      v11 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(v4[5], _mm_shuffle_ps(v11, v11, 0)),
                _mm_mul_ps(v4[6], _mm_shuffle_ps(v11, v11, 0x55))),
              _mm_mul_ps(v4[7], _mm_shuffle_ps(v11, v11, 0xAA)));
    result[1] = v11;
    v12 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(*v8, *v8, 0xC9), _mm_shuffle_ps(v10, v10, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(*v8, *v8, 0xD2), _mm_shuffle_ps(v10, v10, 0xC9)));
    if ( !v5->m128_i8[0xC] )
      v12 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(v5[5], _mm_shuffle_ps(v12, v12, 0)),
                _mm_mul_ps(v5[6], _mm_shuffle_ps(v12, v12, 0x55))),
              _mm_mul_ps(v5[7], _mm_shuffle_ps(v12, v12, 0xAA)));
    v13 = result[1];
    result[2] = v12;
    v14 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v13, v13), v4[3]), _mm_mul_ps(_mm_mul_ps(result[2], result[2]), v5[3]));
    v15 = v5[3].m128_f32[3]
        + v4[3].m128_f32[3]
        + flt_A9B1EC
        + (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]));
    v7 = (__m128 *)((char *)v7 + 4);
    result[2].m128_f32[3] = v15;
    result += 3;
    ++v8;
    result[0xFFFFFFFE].m128_f32[3] = fConstant_1 / v15;
    v16 = _mm_mul_ps(_mm_sub_ps(*a2, *a1), v8[0xFFFFFFFF]);
    v17 = v18-- == 1;
    result[0xFFFFFFFD].m128_f32[3] = (float)(_mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
                                           + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]))
                                   * *(float *)(a3 + 4);
    v7[0xFFFFFFFF].m128_i32[3] = 0x3040D;
  }
  while ( !v17 );
  a4[1] = v7;
  *a4 = result;
  return result;
}
