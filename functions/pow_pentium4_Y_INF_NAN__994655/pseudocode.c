double __usercall _pow_pentium4_::Y_INF_NAN@<st0>(
        int a1@<edx>,
        int a2@<ecx>,
        __m128i a3@<xmm2>,
        __m128d a4@<xmm3>,
        __m128i a5@<xmm4>,
        double a6)
{
  int v6; // eax
  double result; // st7

  a4.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL);
  if ( (unsigned __int8)_mm_movemask_epi8(_mm_cmpeq_epi32((__m128i)0LL, (__m128i)_mm_and_pd(a4, (__m128d)a3))) == 0xFF )
  {
    *(double *)a5.m128i_i64 = a6;
    v6 = _mm_extract_epi16(a3, 3) & 0x8000;
    if ( a2 ^ 0xBFF00000 | a1 )
    {
      if ( v6 )
      {
        if ( (_mm_extract_epi16(a5, 3) & 0x7FF0u) < 0x3FF0 )
          _pow_pentium4_::RET_INF();
        else
          return 0.0;
      }
      else
      {
        _pow_pentium4_::Y_INF();
      }
    }
    else
    {
      _pow_pentium4_::RET_ONE();
    }
  }
  else
  {
    _pow_pentium4_::RET_Y_NAN();
  }
  return result;
}
