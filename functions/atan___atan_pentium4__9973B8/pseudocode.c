double __cdecl atan_::__atan_pentium4(const __m128i a1)
{
  return start_18((__m128d)_mm_loadl_epi64(&a1), a1.m128i_i64[0]);
}
