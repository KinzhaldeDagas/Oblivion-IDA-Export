double __usercall _pow_pentium4_::SPECIAL_Y@<st0>(
        __m128d a1@<xmm2>,
        __m128d a2@<xmm3>,
        __m128i a3@<xmm4>,
        void *this@<ecx>,
        int a5@<edx>,
        double a6,
        double a7)
{
  __m128d v7; // xmm3
  double result; // st7

  *(double *)a3.m128i_i64 = a6; /*0x9945f8*/
  a1.m128d_f64[0] = a7; /*0x9945fe*/
  a2.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL); /*0x994604*/
  v7 = _mm_and_pd(a2, a1); /*0x994610*/
  if ( (unsigned __int8)_mm_movemask_epi8(_mm_cmpeq_epi32((__m128i)0LL, (__m128i)v7)) != 0xFF ) /*0x994626*/
  {
    _pow_pentium4_::RET_Y_NAN(this); /*0x994626*/
    return result; /*0x994626*/
  }
  if ( _mm_cvtsi128_si32(a3) ) /*0x99462c*/
    return _pow_pentium4_::Y_INF_NAN(a5, (int)this, (__m128i)a1, v7, a3, a6); /*0x994633*/
  a3 = _mm_srli_epi64(a3, 0x20u); /*0x994635*/
  a5 = _mm_cvtsi128_si32(a3); /*0x99463a*/
  if ( a5 != 0x3FF00000 ) /*0x994644*/
  {
    if ( a5 == 0xBFF00000 ) /*0x994650*/
      return 1.0; /*0x994654*/
    return _pow_pentium4_::Y_INF_NAN(a5, (int)this, (__m128i)a1, v7, a3, a6); /*0x994633*/
  }
  _pow_pentium4_::RET_ONE(this); /*0x994644*/
  return result; /*0x994654*/
}
