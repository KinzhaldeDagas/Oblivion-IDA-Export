__m128 *__thiscall sub_8D2A20(__m128 *this, __m128 *a2)
{
  *this = _mm_sub_ps(*this, *a2);
  *(this + 1) = _mm_sub_ps(*(this + 1), a2[1]);
  *(this + 2) = _mm_sub_ps(*(this + 2), a2[2]);
  return a2;
}
