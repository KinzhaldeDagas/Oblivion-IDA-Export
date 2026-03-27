int __usercall start_16_::SPECIAL_CASES_0@<eax>(unsigned int a1@<ecx>, __m128d a2@<xmm0>, double a3)
{
  __m128d v3; // xmm0

  v3.m128d_f64[0] = a3;
  if ( _mm_extract_epi16((__m128i)_mm_cmpeq_sd((__m128d)xmmword_AAE8D0, v3), 0) )
    return start_16_::INPUT_ZERO();
  if ( a1 == 0xFFFFFFFF )
    return start_16_::INPUT_DENORM();
  if ( a1 > 0x7FE )
    return start_16_::INPUT_NEGATIVE();
  a2.m128d_f64[0] = a3;
  if ( _mm_extract_epi16(
         (__m128i)_mm_cmpeq_sd(
                    (__m128d)xmmword_AAE8C0,
                    _mm_or_pd(_mm_and_pd(a2, (__m128d)xmmword_AAE860), (__m128d)xmmword_AAE8C0)),
         0) )
  {
    JUMPOUT(0x997035);
  }
  return start_16_::INPUT_NaN();
}
