__m128 *__cdecl sub_94FB80(__m128 *a1, __m128 *a2, __m128 *a3, __m128 *a4)
{
  __m128 v4; // xmm5
  __m128 v5; // xmm0
  __m128 v6; // xmm3
  __m128 v7; // xmm1
  __m128 v8; // xmm2

  v4 = a1[0x10];
  v5 = _mm_sub_ps(*a2, *a3);
  v6 = a2[1];
  v7 = _mm_shuffle_ps(a1[0xE], a1[0xF], 0x44);
  v8 = _mm_shuffle_ps(v4, v4, 0x44);
  *a4 = _mm_add_ps(
          _mm_sub_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(*a1, _mm_shuffle_ps(v6, v6, 0)), _mm_mul_ps(a1[1], _mm_shuffle_ps(v6, v6, 0x55))),
              _mm_mul_ps(a1[2], _mm_shuffle_ps(v6, v6, 0xAA))),
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(a1[7], _mm_shuffle_ps(a3[1], a3[1], 0)),
                _mm_mul_ps(a1[8], _mm_shuffle_ps(a3[1], a3[1], 0x55))),
              _mm_mul_ps(a1[9], _mm_shuffle_ps(a3[1], a3[1], 0xAA)))),
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v7, v8, 0x88), _mm_shuffle_ps(v5, v5, 0)),
              _mm_mul_ps(_mm_shuffle_ps(v7, v8, 0xDD), _mm_shuffle_ps(v5, v5, 0x55))),
            _mm_mul_ps(
              _mm_shuffle_ps(_mm_shuffle_ps(a1[0xE], a1[0xF], 0xEE), _mm_shuffle_ps(v4, v4, 0xEE), 0x88),
              _mm_shuffle_ps(v5, v5, 0xAA))));
  return a4;
}
