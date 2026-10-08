double __usercall start_17_::INPUT_NEGATIVE_0@<st0>(double a1@<xmm1>, __m128i a2@<xmm2>, __int16 a3@<cx>, double a4)
{
  void *v4; // ecx
  double result; // st7

  v4 = (void *)((a3 + 1) & 0x7FF); /*0x9972ff*/
  if ( (unsigned int)v4 >= 0x7FF ) /*0x99730b*/
    return start_17_::NEG_INF_NAN_0(a1, a2, a4); /*0x99730b*/
  start_17_::NEG_NORMAL_INFINITY_0(v4); /*0x99730c*/
  return result;
}
