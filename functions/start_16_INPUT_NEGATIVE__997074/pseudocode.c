double __usercall start_16_::INPUT_NEGATIVE@<st0>(double a1@<xmm1>, __m128i a2@<xmm2>, __int16 a3@<cx>, double a4)
{
  void *v4; // ecx
  double result; // st7

  v4 = (void *)((a3 + 1) & 0x7FF); /*0x997077*/
  if ( (unsigned int)v4 >= 0x7FF ) /*0x997083*/
    return start_16_::NEG_INF_NAN(a1, a2, a4); /*0x997083*/
  start_16_::NEG_NORMAL_INFINITY(v4); /*0x997084*/
  return result;
}
