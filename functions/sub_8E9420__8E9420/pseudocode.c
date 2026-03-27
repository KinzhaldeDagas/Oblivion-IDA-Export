__m128 *__thiscall sub_8E9420(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v4; // xmm0

  *(this + 0xD) = _mm_add_ps(
                    *(this + 0xD),
                    _mm_mul_ps(
                      _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x30), (__m128)*((unsigned int *)this + 0x30), 0),
                      *a2));
  v4 = _mm_sub_ps(*a3, *(this + 6));
  *(this + 0xE) = _mm_add_ps(
                    *(this + 0xE),
                    _mm_mul_ps(
                      _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x31), (__m128)*((unsigned int *)this + 0x31), 0),
                      _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0xC9), _mm_shuffle_ps(*a2, *a2, 0xD2)),
                        _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0xD2), _mm_shuffle_ps(*a2, *a2, 0xC9)))));
  return a2;
}
