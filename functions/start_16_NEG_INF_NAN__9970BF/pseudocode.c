double __usercall start_16_::NEG_INF_NAN@<st0>(double a1@<xmm1>, __m128i a2@<xmm2>, double a3)
{
  int v3; // ecx
  double result; // st7

  *(double *)a2.m128i_i64 = a3;
  v3 = _mm_cvtsi128_si32(_mm_srli_epi64(a2, 0x20u)) & 0xFFFFF;
  if ( v3 | _mm_cvtsi128_si32(a2) )
    return start_16_::CALL_LIBM_ERROR_3(0x3E8, a1, a3);
  start_16_::NEG_NORMAL_INFINITY((void *)v3);
  return result;
}
