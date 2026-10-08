double __usercall start_16_::NEG_INF_NAN@<st0>(double a1@<xmm1>, __m128i a2@<xmm2>, double a3)
{
  int v3; // ecx

  *(double *)a2.m128i_i64 = a3; /*0x9970bf*/
  v3 = _mm_cvtsi128_si32(_mm_srli_epi64(a2, 0x20u)) & 0xFFFFF; /*0x9970d8*/
  if ( v3 | _mm_cvtsi128_si32(a2) ) /*0x9970de*/
    return start_16_::CALL_LIBM_ERROR_3(0x3E8, a1, a3); /*0x9970ea*/
  else
    return start_16_::NEG_NORMAL_INFINITY((void *)v3, a3); /*0x9970e3*/
}
