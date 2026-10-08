double __cdecl floor_::__floor_pentium4(__m128i a1)
{
  __m128i v2; // xmm7
  __m128i v3; // xmm0
  int v4; // eax
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __int64 v7; // xmm1_8
  double result; // st7

  v2 = _mm_loadl_epi64(&a1); /*0x985a52*/
  v3 = _mm_srli_epi64(v2, 0x34u); /*0x985a56*/
  v4 = _mm_cvtsi128_si32(v3); /*0x985a5b*/
  v5 = _mm_sub_epi32((__m128i)xmmword_AA3F50, (__m128i)_mm_and_pd((__m128d)v3, *(__m128d *)0xAA3F80)); /*0x985a67*/
  v6 = _mm_srl_epi64(v2, v5); /*0x985a6b*/
  if ( (v4 & 0x800) != 0 ) /*0x985a74*/
    return floor_::negat(v4, v6, v5, a1); /*0x985a74*/
  if ( v4 < 0x3FF ) /*0x985a7b*/
    return floor_::ret_zero(); /*0x985a7b*/
  v7 = v6.m128i_i64[0] << v5.m128i_i8[0]; /*0x985a7d*/
  if ( v4 > 0x432 ) /*0x985a86*/
  {
    floor_::return_x(*(double *)a1.m128i_i64); /*0x985a86*/
  }
  else
  {
    a1.m128i_i64[0] = v7; /*0x985a88*/
    return *(double *)&v7; /*0x985a8e*/
  }
  return result; /*0x985a92*/
}
