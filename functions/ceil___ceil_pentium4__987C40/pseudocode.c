double __cdecl ceil_::__ceil_pentium4(const __m128i a1)
{
  __m128i v1; // xmm7
  __m128i v2; // xmm0
  int v3; // eax
  unsigned __int8 v4; // xmm2_1
  double result; // st7

  v1 = _mm_loadl_epi64(&a1);
  v2 = _mm_srli_epi64(v1, 0x34u);
  v3 = _mm_cvtsi128_si32(v2);
  v4 = _mm_sub_epi32((__m128i)xmmword_AA3FA0, (__m128i)_mm_and_pd((__m128d)v2, (__m128d)xmmword_AA3FC0)).m128i_u8[0];
  if ( (v3 & 0x800) != 0 )
  {
    if ( v3 < 0xBFF )
    {
      ceil_::ret_zero_1();
    }
    else if ( v3 > 0xC32 )
    {
      ceil_::return_x_0();
    }
    else
    {
      a1.m128i_i64[0] = (unsigned __int64)v1.m128i_i64[0] >> v4 << v4;
      return *(double *)a1.m128i_i64;
    }
  }
  else
  {
    ceil_::positive(a1.m128i_i64[0]);
  }
  return result;
}
