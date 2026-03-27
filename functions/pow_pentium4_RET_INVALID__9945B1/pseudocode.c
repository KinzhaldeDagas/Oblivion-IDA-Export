int __usercall _pow_pentium4_::RET_INVALID@<eax>(
        __m128d a1@<xmm0>,
        __m128i a2@<xmm2>,
        __m128i a3@<xmm3>,
        __m128d a4@<xmm4>,
        __m128d a5@<xmm7>,
        double a6,
        double a7)
{
  int v7; // eax
  __m128i v8; // xmm2

  *(double *)a2.m128i_i64 = a6;
  v7 = _mm_cvtsi128_si32(a2);
  v8 = _mm_srli_epi64(a2, 0x20u);
  if ( _mm_cvtsi128_si32(v8) & 0x7FFFFFFF | v7 )
    return _pow_pentium4_::CALL_LIBM_ERROR_0(0, 0x1C);
  else
    return _pow_pentium4_::ZERO_X(0, a1, (__m128d)v8, a3, a4, a5, *(__int64 *)&a6, a7);
}
