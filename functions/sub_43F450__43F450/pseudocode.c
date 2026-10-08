__m128 *__thiscall sub_43F450(__m128 *this)
{
  __m128 *result; // eax

  result = this; /*0x43f457*/
  if ( (_mm_movemask_ps( /*0x43f483*/
          _mm_cmplt_ps(
            _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0),
            _mm_and_ps(_mm_sub_ps(*(this + 6), (__m128)unk_BA7A40), (__m128)xmmword_A372D0)))
      & 7) != 0 )
    *(this + 1) = _mm_add_ps(*(this + 6), *this); /*0x43f48b*/
  return result; /*0x43f48f*/
}
