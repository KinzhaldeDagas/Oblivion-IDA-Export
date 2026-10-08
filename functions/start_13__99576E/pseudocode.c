double __usercall start_13@<st0>(__m128i a1@<xmm0>, __m128d a2@<xmm2>, __m128d a3@<xmm7>, __m128i a4@<xmm3>)
{
  double v4; // xmm1_8
  int v5; // edx
  __m128d inserted; // xmm5
  __m128i v7; // xmm0
  unsigned int v8; // eax
  int v9; // edx
  __m128i v10; // xmm2
  double v11; // xmm3_8
  double v12; // xmm1_8
  double v13; // xmm7_8
  double v14; // xmm3_8
  __m128i v15; // xmm4

  *(double *)a4.m128i_i64 = 1.0; /*0x995776*/
  a2.m128d_f64[0] = NAN; /*0x995782*/
  v4 = *(double *)a1.m128i_i64; /*0x99578a*/
  v7 = _mm_srli_epi64(a1, 0x2Cu); /*0x99578e*/
  v5 = _mm_cvtsi128_si32(v7); /*0x995793*/
  a3.m128d_f64[0] = v4; /*0x995797*/
  inserted = (__m128d)_mm_insert_epi16((__m128i)0LL, 0x2000u, 2); /*0x9957a0*/
  *(double *)v7.m128i_i64 = v4; /*0x9957a5*/
  v8 = (v5 & 0x7FFFF) - 0x3FB00; /*0x9957b0*/
  if ( v8 >= 0x3BB ) /*0x9957ba*/
    return start_13_::LARGE_SMALL_INPUT_0( /*0x9957ba*/
             v8,
             v7,
             v4,
             COERCE__INT64(NAN),
             a4,
             COERCE__INT64(NAN),
             *(__int64 *)&inserted.m128d_f64[0],
             *(unsigned __int64 *)&v4);
  v9 = (v5 & 0xFFFC) - 0xFB00; /*0x9957d9*/
  v10 = (__m128i)_mm_or_pd(_mm_and_pd(a2, a3), inserted); /*0x9957e8*/
  v11 = sqrt(1.0 - v4 * v4) * *(double *)v10.m128i_i64; /*0x995809*/
  v12 = v4 * *(double *)((char *)qword_AAD1B0 + 2 * v9); /*0x99580d*/
  v13 = (a3.m128d_f64[0] + *(double *)v10.m128i_i64) /*0x995815*/
      * (*(double *)v7.m128i_i64 - *(double *)v10.m128i_i64)
      / (v12 + v11);
  v14 = v12 - v11; /*0x995832*/
  v15 = (__m128i)_mm_sub_pd( /*0x99585f*/
                   _mm_xor_pd(
                     *(__m128d *)((char *)xmmword_AAC2B0 + 4 * v9),
                     (__m128d)_mm_shuffle_epi32(_mm_slli_epi64(_mm_srli_epi64(v10, 0x3Fu), 0x3Fu), 0x44)),
                   (__m128d)xmmword_AAD9B0);
  return (-0.04464285714285714 * (v14 * v14) + -0.075) * (v14 * (v14 * v14) * (v14 * v14)) /*0x995895*/
       + -0.1666666666666667 * (v14 * (v14 * v14))
       - *(double *)v15.m128i_i64
       - v13
       - *(double *)_mm_shuffle_epi32(v15, 0xEE).m128i_i64;
}
