__m128 *__thiscall sub_8D2A60(__m128 *this, __m128 *a2)
{
  *this = _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *this);
  *(this + 1) = _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *(this + 1));
  *(this + 2) = _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *(this + 2));
  return a2;
}
