double __usercall _pow_pentium4_::Y_INF_NAN_CHECK_X@<st0>(
        __m128i a1@<xmm7>,
        __m128i a2@<xmm2>,
        __m128d a3@<xmm3>,
        __m128i a4@<xmm4>,
        double a5)
{
  int v5; // edx
  int v6; // ecx
  double result; // st7

  *(double *)a1.m128i_i64 = a5; /*0x994390*/
  *(double *)a4.m128i_i64 = a5; /*0x994396*/
  v5 = _mm_cvtsi128_si32(a1); /*0x99439c*/
  v6 = _mm_cvtsi128_si32(_mm_srli_epi64(a1, 0x20u)); /*0x9943a9*/
  if ( (v6 & 0x7FFFFFFFu) < 0x7FF00000 || (v6 & 0x7FFFFFFFu) <= 0x7FF00000 && !v5 ) /*0x9943c4*/
    return _pow_pentium4_::Y_INF_NAN(v5, v6, a2, a3, a4, a5); /*0x9943ca*/
  _pow_pentium4_::X_NAN((void *)v6); /*0x9943bb*/
  return result;
}
