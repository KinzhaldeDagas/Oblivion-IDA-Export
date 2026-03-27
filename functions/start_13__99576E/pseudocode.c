double __usercall start_13@<st0>(__m128i a1@<xmm0>, __m128d a2@<xmm2>, __m128d a3@<xmm7>)
{
  int v3; // edx
  __m128d inserted; // xmm5
  int v5; // edx
  __m128i v6; // xmm2
  double v7; // xmm3_8
  double v8; // xmm1_8
  double v9; // xmm7_8
  double v10; // xmm3_8
  __m128i v11; // xmm4
  double result; // st7

  a2.m128d_f64[0] = NAN;
  v3 = _mm_cvtsi128_si32(_mm_srli_epi64(a1, 0x2Cu));
  a3.m128d_f64[0] = *(double *)a1.m128i_i64;
  inserted = (__m128d)_mm_insert_epi16((__m128i)0LL, 0x2000u, 2);
  if ( (v3 & 0x7FFFFu) - 0x3FB00 >= 0x3BB )
  {
    start_13_::LARGE_SMALL_INPUT_0();
  }
  else
  {
    v5 = (v3 & 0xFFFC) - 0xFB00;
    v6 = (__m128i)_mm_or_pd(_mm_and_pd(a2, a3), inserted);
    v7 = sqrt(1.0 - *(double *)a1.m128i_i64 * *(double *)a1.m128i_i64) * *(double *)v6.m128i_i64;
    v8 = *(double *)a1.m128i_i64 * *(double *)((char *)&qword_AAD1B0 + 2 * v5);
    v9 = (*(double *)a1.m128i_i64 + *(double *)v6.m128i_i64)
       * (*(double *)a1.m128i_i64 - *(double *)v6.m128i_i64)
       / (v8 + v7);
    v10 = v8 - v7;
    v11 = (__m128i)_mm_sub_pd(
                     _mm_xor_pd(
                       *(__m128d *)((char *)&xmmword_AAC2B0 + 4 * v5),
                       (__m128d)_mm_shuffle_epi32(_mm_slli_epi64(_mm_srli_epi64(v6, 0x3Fu), 0x3Fu), 0x44)),
                     (__m128d)xmmword_AAD9B0);
    return (-0.04464285714285714 * (v10 * v10) + -0.075) * (v10 * (v10 * v10) * (v10 * v10))
         + -0.1666666666666667 * (v10 * (v10 * v10))
         - *(double *)v11.m128i_i64
         - v9
         - *(double *)_mm_shuffle_epi32(v11, 0xEE).m128i_i64;
  }
  return result;
}
