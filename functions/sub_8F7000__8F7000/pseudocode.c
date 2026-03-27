__m128 *__thiscall sub_8F7000(__m128 *this, __m128 *a2)
{
  *a2 = _mm_shuffle_ps(*(this + 1), *(this + 1), 0xFF);
  return a2;
}
