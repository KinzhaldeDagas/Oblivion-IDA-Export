__m128 *__thiscall sub_8EAC80(__m128 *this, unsigned int a2, __m128 *a3)
{
  *(this + 0xD) = _mm_add_ps(
                    *(this + 0xD),
                    _mm_mul_ps(
                      _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x30), (__m128)*((unsigned int *)this + 0x30), 0),
                      _mm_mul_ps(_mm_shuffle_ps((__m128)a2, (__m128)a2, 0), *a3)));
  return a3;
}
