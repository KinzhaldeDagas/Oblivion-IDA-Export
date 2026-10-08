__m128 *__thiscall sub_8D2A60(__m128 *this, __m128 *a2)
{
  *this = _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *this); /*0x8d2a76*/
  *(this + 1) = _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *(this + 1)); /*0x8d2a8a*/
  *(this + 2) = _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *(this + 2)); /*0x8d2aa2*/
  return a2; /*0x8d2aa8*/
}
