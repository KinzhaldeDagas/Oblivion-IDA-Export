double __usercall start_15_::ADJUST@<st0>(int a1@<eax>, __m128i a2@<xmm0>, __m128i a3@<xmm2>)
{
  int v4; // eax
  double result; // st7
  void *v6; // ecx
  double v7; // [esp+8h] [ebp-Ah]

  v4 = a1 >> 1; /*0x996cfe*/
  *(_QWORD *)&v7 = _mm_andnot_si128(_mm_load_si128((const __m128i *)&xmmword_AAE370), a3).m128i_u64[0] /*0x996d37*/
                 | (_mm_cvtsi32_si128(v4 + 0x3FF).m128i_u64[0] << 0x34);
  result = (*(double *)a2.m128i_i64 * v7 + v7) * COERCE_DOUBLE(_mm_cvtsi32_si128(a1 - v4 + 0x3FF).m128i_u64[0] << 0x34); /*0x996d4d*/
  *(double *)a2.m128i_i64 = result; /*0x996d52*/
  v6 = (void *)(_mm_extract_epi16(a2, 3) & 0x7FF0); /*0x996d63*/
  if ( (unsigned int)v6 >= 0x7FF0 ) /*0x996d6f*/
  {
    start_15_::OVERFLOW(v6); /*0x996d6f*/
  }
  else if ( v6 ) /*0x996d74*/
  {
    return start_15_::RETURN_1(result); /*0x996d76*/
  }
  else
  {
    start_15_::UNDERFLOW(0); /*0x996d74*/
  }
  return result;
}
