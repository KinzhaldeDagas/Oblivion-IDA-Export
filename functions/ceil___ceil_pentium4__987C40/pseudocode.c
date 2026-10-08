double __cdecl ceil_::__ceil_pentium4(__m128i a1)
{
  __m128i v2; // xmm7
  __m128i v3; // xmm0
  int v4; // eax
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __int64 v7; // xmm1_8
  double result; // st7

  v2 = _mm_loadl_epi64(&a1); /*0x987c52*/
  v3 = _mm_srli_epi64(v2, 0x34u); /*0x987c56*/
  v4 = _mm_cvtsi128_si32(v3); /*0x987c5b*/
  v5 = _mm_sub_epi32((__m128i)xmmword_AA3FA0, (__m128i)_mm_and_pd((__m128d)v3, (__m128d)xmmword_AA3FC0)); /*0x987c67*/
  v6 = _mm_srl_epi64(v2, v5); /*0x987c6b*/
  if ( (v4 & 0x800) == 0 ) /*0x987c74*/
    return ceil_::positive(v4, v6, v5, a1); /*0x987c74*/
  if ( v4 < 0xBFF ) /*0x987c7b*/
    return ceil_::ret_zero_1(); /*0x987c7b*/
  v7 = v6.m128i_i64[0] << v5.m128i_i8[0]; /*0x987c7d*/
  if ( v4 > 0xC32 ) /*0x987c86*/
  {
    ceil_::return_x_0(*(double *)a1.m128i_i64); /*0x987c86*/
  }
  else
  {
    a1.m128i_i64[0] = v7; /*0x987c88*/
    return *(double *)&v7; /*0x987c8e*/
  }
  return result; /*0x987c92*/
}
