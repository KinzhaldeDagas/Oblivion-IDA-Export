double __usercall start_18_::xge8_0@<st0>(__m128i a1@<xmm2>, __int64 a2@<xmm6>)
{
  double v2; // xmm0_8
  __m128d v3; // xmm2

  v2 = *(double *)_mm_move_epi64(a1).m128i_i64; /*0x99755e*/
  v3 = (__m128d)_mm_loadl_epi64((const __m128i *)&qword_AAFB80); /*0x997562*/
  v3.m128d_f64[0] = v3.m128d_f64[0] / v2; /*0x99756a*/
  return start_18_::clcpol(0x300, _mm_unpacklo_pd(v3, v3), a2);
}
