__m128 *__thiscall sub_88FD10(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v4; // xmm3
  __m128 v5; // xmm5
  __m128 v6; // xmm0
  __m128 v7; // xmm4
  __m128 v8; // xmm1

  v4 = a2[2];
  v5 = a2[1];
  v6 = _mm_sub_ps(*a3, a2[3]);
  v7 = _mm_shuffle_ps(v4, v4, 0x44);
  v8 = _mm_shuffle_ps(*a2, v5, 0x44);
  *this = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v8, v7, 0x88), _mm_shuffle_ps(v6, v6, 0)),
              _mm_mul_ps(_mm_shuffle_ps(v8, v7, 0xDD), _mm_shuffle_ps(v6, v6, 0x55))),
            _mm_mul_ps(
              _mm_shuffle_ps(_mm_shuffle_ps(*a2, v5, 0xEE), _mm_shuffle_ps(v4, v4, 0xEE), 0x88),
              _mm_shuffle_ps(v6, v6, 0xAA)));
  return a2;
}
