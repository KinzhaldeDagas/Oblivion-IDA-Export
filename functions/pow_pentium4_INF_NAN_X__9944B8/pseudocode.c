int __usercall _pow_pentium4_::INF_NAN_X@<eax>(
        unsigned __int8 a1@<al>,
        __m128i a2@<xmm2>,
        __m128d a3@<xmm3>,
        __m128i a4@<xmm4>,
        int a5,
        int a6,
        __int64 a7)
{
  __m128i v7; // xmm1
  __m128i v8; // xmm1

  a3.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL);
  v7 = _mm_cmpeq_epi32((__m128i)0LL, (__m128i)_mm_and_pd(a3, (__m128d)a4));
  if ( (unsigned __int8)_mm_movemask_epi8(v7) != 0xFF )
    return _pow_pentium4_::X_NAN();
  if ( (_mm_extract_epi16(a4, 3) & 0x8000) == 0 )
    return _pow_pentium4_::X_INF(a5, a6, a7);
  if ( a1 != 0xFF )
    return _pow_pentium4_::X_NINF(a5, a6, a7);
  v7.m128i_i64[0] = a7;
  a2.m128i_i64[0] = a7;
  v8 = _mm_sub_epi32(
         _mm_srli_epi64((__m128i)_mm_and_pd((__m128d)v7, (__m128d)xmmword_AAB960), 0x34u),
         _mm_cvtsi32_si128(0x3F4u));
  if ( (unsigned __int8)_mm_movemask_epi8(_mm_cmpeq_epi32(_mm_sll_epi64(a2, v8), (__m128i)0LL)) == 0xFF )
    return _pow_pentium4_::X_NINF(a5, a6, a7);
  v8.m128i_i64[0] = a7;
  if ( (_mm_extract_epi16(v8, 3) & 0x8000) != 0 )
    return _pow_pentium4_::RET_NEG_ZERO();
  else
    return _pow_pentium4_::RET_NINF();
}
