double __usercall start_17_::SPECIAL_CASES_1@<st0>(void *this@<ecx>, __m128d a2@<xmm0>, __int64 a3)
{
  double result; // st7

  a2.m128d_f64[0] = *(double *)&a3; /*0x997266*/
  if ( _mm_extract_epi16((__m128i)_mm_cmpeq_sd((__m128d)xmmword_AAF1E0, a2), 0) ) /*0x997279*/
  {
    start_17_::INPUT_ZERO_0(this); /*0x997281*/
  }
  else if ( this == (void *)0xFFFFFFFF ) /*0x997286*/
  {
    return start_17_::INPUT_DENORM_0((__m128i)a2, a3); /*0x997286*/
  }
  else if ( (unsigned int)this > 0x7FE ) /*0x99728e*/
  {
    start_17_::INPUT_NEGATIVE_0(a3); /*0x99728e*/
  }
  else
  {
    a2.m128d_f64[0] = *(double *)&a3; /*0x997290*/
    if ( _mm_extract_epi16( /*0x9972b3*/
           (__m128i)_mm_cmpeq_sd(
                      (__m128d)xmmword_AAF1D0,
                      _mm_or_pd(_mm_and_pd(a2, (__m128d)xmmword_AAF160), (__m128d)xmmword_AAF1D0)),
           0) )
    {
      JUMPOUT(0x9972BD); /*0x9972bd*/
    }
    start_17_::INPUT_NaN_0(this); /*0x9972bb*/
  }
  return result;
}
