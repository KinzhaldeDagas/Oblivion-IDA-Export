int __usercall start_15_::ADJUST@<eax>(int a1@<eax>, __m128i a2@<xmm0>, __m128i a3@<xmm2>)
{
  int v4; // eax
  unsigned int v5; // ecx
  double v7; // [esp+8h] [ebp-Ah]

  v4 = a1 >> 1;
  *(_QWORD *)&v7 = _mm_andnot_si128(_mm_load_si128((const __m128i *)&xmmword_AAE370), a3).m128i_u64[0]
                 | (_mm_cvtsi32_si128(v4 + 0x3FF).m128i_u64[0] << 0x34);
  *(double *)a2.m128i_i64 = (*(double *)a2.m128i_i64 * v7 + v7)
                          * COERCE_DOUBLE(_mm_cvtsi32_si128(a1 - v4 + 0x3FF).m128i_u64[0] << 0x34);
  v5 = _mm_extract_epi16(a2, 3) & 0x7FF0;
  if ( v5 >= 0x7FF0 )
    return start_15_::OVERFLOW();
  if ( v5 )
    return start_15_::RETURN_1();
  return start_15_::UNDERFLOW();
}
