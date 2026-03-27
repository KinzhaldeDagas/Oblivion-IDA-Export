_BYTE *__cdecl sub_950B10(_BYTE *a1, __m128 *a2, __m128 *a3, __m128 *a4, float a5)
{
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __m128 v7; // xmm6
  __m128 v8; // xmm5
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm0

  v5 = _mm_sub_ps(*a2, *a3);
  v6 = _mm_sub_ps(*a2, *a4);
  v7 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0xD2), _mm_shuffle_ps(v6, v6, 0xC9));
  v8 = _mm_shuffle_ps(v6, v6, 0xD2);
  v9 = _mm_sub_ps(*a3, *a2);
  v10 = _mm_sub_ps(*a3, *a4);
  v11 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0xC9), v8), v7);
  v12 = _mm_mul_ps(v11, v11);
  v13 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0xC9), _mm_shuffle_ps(v10, v10, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0xD2), _mm_shuffle_ps(v10, v10, 0xC9)));
  if ( (float)(_mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0])) < (double)a5
    || (v14 = _mm_mul_ps(v13, v13),
        (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0])) < (double)a5) )
  {
    *a1 = 0;
    return a1;
  }
  else
  {
    *a1 = 1;
    return a1;
  }
}
