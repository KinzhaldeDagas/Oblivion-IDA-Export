double __usercall start_15@<st0>(__m128d a1@<xmm0>, int a2, int a3)
{
  __m128d v3; // xmm0
  int v4; // eax
  __m128i v5; // xmm7
  __m128d v6; // xmm1
  int v7; // eax
  __m128d v8; // xmm0
  __m128d v9; // xmm2
  __m128d v10; // xmm4
  __m128d v11; // xmm0
  __m128d v12; // xmm0
  double v13; // xmm2_8
  double v14; // xmm0_8
  double result; // st7

  v3 = _mm_unpacklo_pd(a1, a1);
  v4 = _mm_extract_epi16((__m128i)v3, 3) & 0x7FFF;
  if ( ((v4 - 0x3C90) | (unsigned int)(0x408F - v4)) >= 0x80000000 )
  {
    start_15_::RETURN_ONE_0(a2, a3);
  }
  else
  {
    v5 = (__m128i)_mm_add_pd(_mm_mul_pd((__m128d)xmmword_AAE3C0, v3), (__m128d)xmmword_AAE3A0);
    v6 = _mm_sub_pd((__m128d)v5, (__m128d)xmmword_AAE3A0);
    v7 = _mm_cvtsi128_si32(v5);
    v8 = _mm_sub_pd(_mm_sub_pd(v3, _mm_mul_pd((__m128d)xmmword_AAE3D0, v6)), _mm_mul_pd((__m128d)xmmword_AAE3E0, v6));
    v9 = (__m128d)algn_AAE410[v7 & 0x3F];
    v10 = _mm_mul_pd((__m128d)xmmword_AAE3F0, v8);
    v6.m128d_f64[0] = v8.m128d_f64[0];
    v11 = _mm_mul_pd(v8, v8);
    v11.m128d_f64[0] = v11.m128d_f64[0] * v11.m128d_f64[0];
    v12 = _mm_mul_pd(v11, _mm_add_pd((__m128d)xmmword_AAE400, v10));
    v6.m128d_f64[0] = v6.m128d_f64[0] + v9.m128d_f64[0] + v12.m128d_f64[0];
    *(_QWORD *)&v13 = *(_QWORD *)&_mm_unpackhi_pd(v9, v9).m128d_f64[0]
                    | (_mm_add_epi64(
                         _mm_and_si128(v5, _mm_load_si128((const __m128i *)&xmmword_AAE380)),
                         _mm_load_si128((const __m128i *)&xmmword_AAE390)).m128i_u64[0] << 0x2E);
    v14 = _mm_unpackhi_pd(v12, v12).m128d_f64[0] + v6.m128d_f64[0];
    if ( (unsigned int)((v7 >> 6) + 0x37E) > 0x77C )
      start_15_::ADJUST();
    else
      return v14 * v13 + v13;
  }
  return result;
}
