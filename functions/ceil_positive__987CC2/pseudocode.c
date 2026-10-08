double __usercall ceil_::positive@<st0>(int a1@<eax>, __m128i a2@<xmm1>, __m128i a3@<xmm2>, const __m128i a4)
{
  __m128d v4; // xmm1
  __m128d v5; // xmm3
  double v6; // xmm0_8

  v4 = (__m128d)_mm_sll_epi64(a2, a3); /*0x987cc8*/
  v5 = (__m128d)_mm_loadl_epi64(&a4); /*0x987ccc*/
  v6 = _mm_cmpnle_pd(v5, v4).m128d_f64[0]; /*0x987cd0*/
  if ( a1 < 0x3FF ) /*0x987cda*/
    return ceil_::ret_one(v5); /*0x987cda*/
  if ( a1 > 0x432 ) /*0x987ce1*/
    return ceil_::return_x_0(*(double *)a4.m128i_i64); /*0x987ce1*/
  *(double *)a4.m128i_i64 = v4.m128d_f64[0] + COERCE_DOUBLE(*(_QWORD *)&v6 & 0x3FF0000000000000LL); /*0x987cef*/
  return *(double *)a4.m128i_i64; /*0x987cf9*/
}
