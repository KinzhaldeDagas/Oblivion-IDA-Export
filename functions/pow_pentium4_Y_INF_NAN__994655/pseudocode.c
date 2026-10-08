double __usercall _pow_pentium4_::Y_INF_NAN@<st0>(
        unsigned int a1@<edx>,
        unsigned int a2@<ecx>,
        __m128i a3@<xmm2>,
        __m128d a4@<xmm3>,
        __m128i a5@<xmm4>,
        double a6)
{
  int v6; // eax
  void *v7; // ecx
  double result; // st7

  a4.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL); /*0x994655*/
  if ( (unsigned __int8)_mm_movemask_epi8(_mm_cmpeq_epi32((__m128i)0LL, (__m128i)_mm_and_pd(a4, (__m128d)a3))) == 0xFF ) /*0x994677*/
  {
    *(double *)a5.m128i_i64 = a6; /*0x99467e*/
    v6 = _mm_extract_epi16(a3, 3) & 0x8000; /*0x994684*/
    v7 = (void *)(a2 ^ 0xBFF00000); /*0x994689*/
    if ( __PAIR64__((unsigned int)v7, a1) ) /*0x994694*/
    {
      if ( v6 ) /*0x99469d*/
      {
        if ( (_mm_extract_epi16(a5, 3) & 0x7FF0u) < 0x3FF0 ) /*0x9946ae*/
          return _pow_pentium4_::RET_INF(); /*0x9946ae*/
        else
          return 0.0; /*0x9946b0*/
      }
      else
      {
        return _pow_pentium4_::Y_INF(a5); /*0x99469d*/
      }
    }
    else
    {
      _pow_pentium4_::RET_ONE(v7); /*0x994694*/
    }
  }
  else
  {
    _pow_pentium4_::RET_Y_NAN((void *)a2); /*0x994677*/
  }
  return result; /*0x9946b2*/
}
