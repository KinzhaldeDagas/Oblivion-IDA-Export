__m128 *__thiscall sub_88FCC0(__m128 *this, __m128 *a2, __m128 *a3)
{
  *this = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(*a2, _mm_shuffle_ps(*a3, *a3, 0)), _mm_mul_ps(a2[1], _mm_shuffle_ps(*a3, *a3, 0x55))),
            _mm_add_ps(_mm_mul_ps(a2[2], _mm_shuffle_ps(*a3, *a3, 0xAA)), a2[3]));
  return a2;
}
