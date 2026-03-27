__m128 *__thiscall sub_88FD90(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm5
  __m128 v6; // xmm4
  __m128 v7; // xmm0

  v3 = a2[2];
  v4 = a2[1];
  v6 = _mm_shuffle_ps(v3, v3, 0x44);
  v7 = _mm_shuffle_ps(*a2, v4, 0x44);
  *this = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v7, v6, 0x88), _mm_shuffle_ps(*a3, *a3, 0)),
              _mm_mul_ps(_mm_shuffle_ps(v7, v6, 0xDD), _mm_shuffle_ps(*a3, *a3, 0x55))),
            _mm_mul_ps(
              _mm_shuffle_ps(_mm_shuffle_ps(*a2, v4, 0xEE), _mm_shuffle_ps(v3, v3, 0xEE), 0x88),
              _mm_shuffle_ps(*a3, *a3, 0xAA)));
  return a3;
}
