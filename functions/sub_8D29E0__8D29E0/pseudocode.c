__m128 *__thiscall sub_8D29E0(__m128 *this, __m128 *a2)
{
  *this = _mm_add_ps(*this, *a2); /*0x8d29ef*/
  *(this + 1) = _mm_add_ps(*(this + 1), a2[1]); /*0x8d29fd*/
  *(this + 2) = _mm_add_ps(*(this + 2), a2[2]); /*0x8d2a0f*/
  return a2; /*0x8d2a15*/
}
