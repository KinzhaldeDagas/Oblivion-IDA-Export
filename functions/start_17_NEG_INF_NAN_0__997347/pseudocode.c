double __usercall start_17_::NEG_INF_NAN_0@<st0>(double a1@<xmm1>, __m128i a2@<xmm2>, double a3)
{
  int v3; // ecx

  *(double *)a2.m128i_i64 = a3; /*0x997347*/
  v3 = _mm_cvtsi128_si32(_mm_srli_epi64(a2, 0x20u)) & 0xFFFFF; /*0x997360*/
  if ( v3 | _mm_cvtsi128_si32(a2) ) /*0x997366*/
    return start_17_::CALL_LIBM_ERROR_4(0x3E9, a1, a3); /*0x997372*/
  else
    return start_17_::NEG_NORMAL_INFINITY_0((void *)v3, a3); /*0x99736b*/
}
