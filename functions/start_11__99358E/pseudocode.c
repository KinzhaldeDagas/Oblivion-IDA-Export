double __usercall start_11@<st0>(__m128i a1@<xmm0>, __m128d a2@<xmm2>, __m128d a3@<xmm7>, __m128i a4@<xmm3>)
{
  int v4; // edx
  __m128d inserted; // xmm5
  unsigned int v6; // eax
  int v7; // edx
  __m128i v8; // xmm2
  double v9; // xmm3_8
  double v10; // xmm1_8
  double v11; // xmm0_8
  double v12; // xmm3_8
  __m128i v13; // xmm4

  *(double *)a4.m128i_i64 = 1.0; /*0x993596*/
  a2.m128d_f64[0] = NAN; /*0x9935a2*/
  v4 = _mm_cvtsi128_si32(_mm_srli_epi64(a1, 0x2Cu)); /*0x9935b3*/
  a3.m128d_f64[0] = *(double *)a1.m128i_i64; /*0x9935b7*/
  inserted = (__m128d)_mm_insert_epi16((__m128i)0LL, 0x2000u, 2); /*0x9935c0*/
  v6 = (v4 & 0x7FFFF) - 0x3FB00; /*0x9935d0*/
  if ( v6 >= 0x3BB ) /*0x9935da*/
    return start_11_::LARGE_SMALL_INPUT( /*0x9935da*/
             v6,
             a1.m128i_i64[0],
             *(double *)a1.m128i_i64,
             COERCE__INT64(NAN),
             a4,
             *(__int64 *)&inserted.m128d_f64[0],
             (__m128i)a3);
  v7 = (v4 & 0xFFFC) - 0xFB00; /*0x9935f9*/
  v8 = (__m128i)_mm_or_pd(_mm_and_pd(a2, a3), inserted); /*0x993608*/
  v9 = sqrt(1.0 - *(double *)a1.m128i_i64 * *(double *)a1.m128i_i64) * *(double *)v8.m128i_i64; /*0x993629*/
  v10 = *(double *)a1.m128i_i64 * *(double *)((char *)qword_AA7770 + 2 * v7); /*0x99362d*/
  v11 = (*(double *)a1.m128i_i64 - *(double *)v8.m128i_i64) /*0x993635*/
      * (*(double *)a1.m128i_i64 + *(double *)v8.m128i_i64)
      / (v10 + v9);
  v12 = v10 - v9; /*0x993652*/
  v13 = (__m128i)_mm_xor_pd( /*0x993677*/
                   *(__m128d *)((char *)xmmword_AA6870 + 4 * v7),
                   (__m128d)_mm_shuffle_epi32(_mm_slli_epi64(_mm_srli_epi64(v8, 0x3Fu), 0x3Fu), 0x44));
  return v11 /*0x9936ad*/
       + (0.04464285714285714 * (v12 * v12) + 0.075) * (v12 * (v12 * v12) * (v12 * v12))
       + 0.1666666666666667 * (v12 * (v12 * v12))
       + *(double *)v13.m128i_i64
       + *(double *)_mm_shuffle_epi32(v13, 0xEE).m128i_i64;
}
