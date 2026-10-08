double __usercall floor_::negat@<st0>(int a1@<eax>, __m128i a2@<xmm1>, __m128i a3@<xmm2>, const __m128i a4)
{
  __m128d v4; // xmm1
  __m128d v5; // xmm3
  double v6; // xmm0_8

  v4 = (__m128d)_mm_sll_epi64(a2, a3); /*0x985ac8*/
  v5 = (__m128d)_mm_loadl_epi64(&a4); /*0x985acc*/
  v6 = _mm_cmplt_pd(v5, v4).m128d_f64[0]; /*0x985ad0*/
  if ( a1 < 0xBFF ) /*0x985ada*/
    return floor_::ret_neg_one(v5); /*0x985ada*/
  if ( a1 > 0xC32 ) /*0x985ae1*/
    return floor_::return_x(*(double *)a4.m128i_i64); /*0x985ae1*/
  *(double *)a4.m128i_i64 = v4.m128d_f64[0] - COERCE_DOUBLE(*(_QWORD *)&v6 & *(_QWORD *)0xAA3F40); /*0x985aef*/
  return *(double *)a4.m128i_i64; /*0x985af9*/
}
