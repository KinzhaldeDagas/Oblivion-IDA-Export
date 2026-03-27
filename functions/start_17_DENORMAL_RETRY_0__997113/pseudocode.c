double __usercall start_17_::DENORMAL_RETRY_0@<st0>(int a1@<edx>, __m128i a2@<xmm0>, __int64 a3)
{
  __m128d v4; // xmm0
  int v5; // eax
  __m128d v6; // xmm4
  __m128d v7; // xmm6
  __m128d v8; // xmm0
  __m128d v9; // xmm6
  __m128d v10; // xmm7
  __m128d v11; // xmm4
  __m128d v12; // xmm0
  unsigned int v13; // ecx
  int v14; // ecx
  __m128d v15; // xmm6
  int v16; // edx
  __m128d v17; // xmm3
  __m128d v18; // xmm7
  double v19; // xmm2_8
  __m128d v20; // xmm0
  double result; // st7

  v4 = _mm_or_pd(
         _mm_and_pd(_mm_unpacklo_pd((__m128d)a2, (__m128d)a2), (__m128d)xmmword_AAF160),
         (__m128d)xmmword_AAF1D0);
  v5 = _mm_extract_epi16((__m128i)_mm_add_pd((__m128d)xmmword_AAF180, v4), 0) & 0x7F0;
  v6 = *(__m128d *)(v5 + 0xAAF670);
  v10 = *(__m128d *)(v5 + 0xAAF260);
  v7 = _mm_and_pd((__m128d)xmmword_AAF190, v4);
  v8 = _mm_sub_pd(v4, v7);
  v9 = _mm_sub_pd(_mm_mul_pd(v7, v6), (__m128d)xmmword_AAF170);
  v10.m128d_f64[0] = v10.m128d_f64[0] + v9.m128d_f64[0];
  v11 = _mm_mul_pd(v8, v6);
  v12 = _mm_add_pd(v11, v9);
  v13 = (_mm_extract_epi16(_mm_srli_epi64(a2, 0x34u), 0) & 0xFFF) - 1;
  if ( v13 > 0x7FD )
  {
    start_17_::SPECIAL_CASES_1(a3);
  }
  else
  {
    v14 = a1 + v13 - 0x3FE;
    v9.m128d_f64[0] = (double)v14;
    v15 = _mm_unpacklo_pd(v9, v9);
    v16 = 0;
    if ( !((v14 << 0xA) + v5) )
      v16 = 0x10;
    v17 = _mm_mul_pd(v12, v12);
    v18 = _mm_add_pd(
            _mm_add_pd(v10, _mm_mul_pd(v15, (__m128d)xmmword_AAF1A0)),
            _mm_and_pd(v11, *(__m128d *)(v16 + 0xAAF1B0)));
    v17.m128d_f64[0] = v17.m128d_f64[0] * v17.m128d_f64[0] * v12.m128d_f64[0];
    v19 = 0.001616102407499711 * v12.m128d_f64[0];
    v20 = _mm_mul_pd(
            _mm_add_pd(
              _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_AAF220, v12), (__m128d)xmmword_AAF230), v12),
              (__m128d)xmmword_AAF240),
            v17);
    return _mm_unpackhi_pd(v20, v20).m128d_f64[0]
         + v20.m128d_f64[0]
         + v19
         + _mm_unpackhi_pd(v18, v18).m128d_f64[0]
         + v18.m128d_f64[0];
  }
  return result;
}
