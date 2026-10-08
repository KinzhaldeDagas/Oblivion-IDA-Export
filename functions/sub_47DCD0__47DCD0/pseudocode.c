float *__thiscall sub_47DCD0(float *this, __m128 *a2)
{
  *this = a2->m128_f32[0]; /*0x47dcf6*/
  *(this + 1) = _mm_shuffle_ps(*a2, *a2, 0x55).m128_f32[0]; /*0x47dd09*/
  *(this + 2) = _mm_shuffle_ps(*a2, *a2, 0xAA).m128_f32[0]; /*0x47dd1d*/
  *(this + 3) = _mm_shuffle_ps(*a2, *a2, 0xFF).m128_f32[0]; /*0x47dd37*/
  return this; /*0x47dd3a*/
}
