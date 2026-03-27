double __usercall start_13_::RETURN_ZERO_PI@<st0>(__m128i a1@<xmm7>)
{
  __int64 v1; // xmm7_8

  v1 = _mm_shuffle_epi32(_mm_cvtsi32_si128(-((unsigned int)_mm_extract_epi16(a1, 1) >> 0xF)), 0).m128i_i64[0];
  return COERCE_DOUBLE(COERCE_UNSIGNED_INT64(3.141592653589793) & v1)
       + COERCE_DOUBLE(COERCE_UNSIGNED_INT64(1.224646799147353e-16) & v1);
}
