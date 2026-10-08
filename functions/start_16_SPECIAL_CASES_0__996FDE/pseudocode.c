double __usercall start_16_::SPECIAL_CASES_0@<st0>(void *this@<ecx>, __m128d a2@<xmm0>, __int64 a3)
{
  double result; // st7

  a2.m128d_f64[0] = *(double *)&a3; /*0x996fde*/
  if ( _mm_extract_epi16((__m128i)_mm_cmpeq_sd((__m128d)xmmword_AAE8D0, a2), 0) ) /*0x996ff1*/
  {
    start_16_::INPUT_ZERO(this); /*0x996ff9*/
  }
  else if ( this == (void *)0xFFFFFFFF ) /*0x996ffe*/
  {
    return start_16_::INPUT_DENORM((__m128i)a2, a3); /*0x996ffe*/
  }
  else if ( (unsigned int)this > 0x7FE ) /*0x997006*/
  {
    start_16_::INPUT_NEGATIVE(a3); /*0x997006*/
  }
  else
  {
    a2.m128d_f64[0] = *(double *)&a3; /*0x997008*/
    if ( _mm_extract_epi16( /*0x99702b*/
           (__m128i)_mm_cmpeq_sd(
                      (__m128d)xmmword_AAE8C0,
                      _mm_or_pd(_mm_and_pd(a2, (__m128d)xmmword_AAE860), (__m128d)xmmword_AAE8C0)),
           0) )
    {
      JUMPOUT(0x997035); /*0x997035*/
    }
    start_16_::INPUT_NaN(this); /*0x997033*/
  }
  return result;
}
