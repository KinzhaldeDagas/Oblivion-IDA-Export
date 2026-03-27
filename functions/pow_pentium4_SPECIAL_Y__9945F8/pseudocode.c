double __usercall _pow_pentium4_::SPECIAL_Y@<st0>(
        __m128d a1@<xmm2>,
        __m128d a2@<xmm3>,
        __m128i a3@<xmm4>,
        double a4,
        double a5)
{
  int v5; // edx
  double result; // st7

  *(double *)a3.m128i_i64 = a4;
  a1.m128d_f64[0] = a5;
  a2.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL);
  if ( (unsigned __int8)_mm_movemask_epi8(_mm_cmpeq_epi32((__m128i)0LL, (__m128i)_mm_and_pd(a2, a1))) != 0xFF )
  {
    _pow_pentium4_::RET_Y_NAN();
    return result;
  }
  if ( _mm_cvtsi128_si32(a3) )
    goto LABEL_7;
  v5 = _mm_cvtsi128_si32(_mm_srli_epi64(a3, 0x20u));
  if ( v5 != 0x3FF00000 )
  {
    if ( v5 == 0xBFF00000 )
      return 1.0;
LABEL_7:
    _pow_pentium4_::Y_INF_NAN(*(__int64 *)&a4);
    return result;
  }
  _pow_pentium4_::RET_ONE();
  return result;
}
