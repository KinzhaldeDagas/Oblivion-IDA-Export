int __usercall start_17_::SPECIAL_CASES_1@<eax>(unsigned int a1@<ecx>, __m128d a2@<xmm0>, double a3)
{
  __m128d v3; // xmm0

  v3.m128d_f64[0] = a3;
  if ( _mm_extract_epi16((__m128i)_mm_cmpeq_sd((__m128d)xmmword_AAF1E0, v3), 0) )
    return start_17_::INPUT_ZERO_0();
  if ( a1 == 0xFFFFFFFF )
    return start_17_::INPUT_DENORM_0();
  if ( a1 > 0x7FE )
    return start_17_::INPUT_NEGATIVE_0();
  a2.m128d_f64[0] = a3;
  if ( _mm_extract_epi16(
         (__m128i)_mm_cmpeq_sd(
                    (__m128d)xmmword_AAF1D0,
                    _mm_or_pd(_mm_and_pd(a2, (__m128d)xmmword_AAF160), (__m128d)xmmword_AAF1D0)),
         0) )
  {
    JUMPOUT(0x9972BD);
  }
  return start_17_::INPUT_NaN_0();
}
