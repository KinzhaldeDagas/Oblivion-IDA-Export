double __usercall start_11_::RETURN_X@<st0>(__m128i a1@<xmm0>, double a2)
{
  *(double *)a1.m128i_i64 = a2; /*0x993aaf*/
  if ( (_mm_extract_epi16(a1, 3) & 0x7FF0u) - 0x10 < 0x7FE0 ) /*0x993ad4*/
    return start_11_::RETURN_X2(a2); /*0x993ad4*/
  else
    return start_11_::RETURN_X2(COERCE_DOUBLE(*(_QWORD *)&a2 | COERCE_UNSIGNED_INT64(a2 + 0.0))); /*0x993adf*/
}
