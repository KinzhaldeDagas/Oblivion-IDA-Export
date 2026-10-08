double __usercall _pow_pentium4_::INF_NAN_X@<st0>(
        unsigned __int8 a1@<al>,
        __m128i a2@<xmm2>,
        __m128d a3@<xmm3>,
        __m128i a4@<xmm4>,
        int a5,
        int a6,
        __int64 a7)
{
  __m128i v7; // xmm1
  void *v8; // ecx
  double result; // st7

  a3.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL); /*0x9944b8*/
  v7 = _mm_cmpeq_epi32((__m128i)0LL, (__m128i)_mm_and_pd(a3, (__m128d)a4)); /*0x9944c8*/
  v8 = (void *)(unsigned __int8)_mm_movemask_epi8(v7); /*0x9944d0*/
  if ( v8 == (void *)0xFF ) /*0x9944dc*/
  {
    if ( (_mm_extract_epi16(a4, 3) & 0x8000) != 0 ) /*0x9944f0*/
    {
      if ( a1 != 0xFF ) /*0x994500*/
        return _pow_pentium4_::X_NINF(v7, a5, a6, *(double *)&a7); /*0x994500*/
      v7.m128i_i64[0] = a7; /*0x994502*/
      a2.m128i_i64[0] = a7; /*0x994508*/
      v7 = _mm_sub_epi32( /*0x994524*/
             _mm_srli_epi64((__m128i)_mm_and_pd((__m128d)v7, (__m128d)xmmword_AAB960), 0x34u),
             _mm_cvtsi32_si128(0x3F4u));
      if ( (unsigned __int8)_mm_movemask_epi8(_mm_cmpeq_epi32(_mm_sll_epi64(a2, v7), (__m128i)0LL)) == 0xFF ) /*0x994542*/
      {
        return _pow_pentium4_::X_NINF(v7, a5, a6, *(double *)&a7); /*0x994500*/
      }
      else
      {
        v7.m128i_i64[0] = a7; /*0x994544*/
        if ( (_mm_extract_epi16(v7, 3) & 0x8000) != 0 ) /*0x994557*/
          return _pow_pentium4_::RET_NEG_ZERO(); /*0x994558*/
        else
          return _pow_pentium4_::RET_NINF(); /*0x994557*/
      }
    }
    else
    {
      return _pow_pentium4_::X_INF(v7, a5, a6, *(double *)&a7); /*0x9944f0*/
    }
  }
  else
  {
    _pow_pentium4_::X_NAN(v8); /*0x9944dc*/
  }
  return result;
}
