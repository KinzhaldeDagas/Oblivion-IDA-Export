double __usercall ceil_::positive@<st0>(int a1@<eax>, __m128i a2@<xmm1>, __m128i a3@<xmm2>, const __m128i a4)
{
  __m128d v4; // xmm1
  double v5; // xmm0_8
  double result; // st7

  v4 = (__m128d)_mm_sll_epi64(a2, a3);
  v5 = _mm_cmpnle_pd((__m128d)_mm_loadl_epi64(&a4), v4).m128d_f64[0];
  if ( a1 < 0x3FF )
  {
    ceil_::ret_one(a4.m128i_i64[0]);
  }
  else if ( a1 > 0x432 )
  {
    ceil_::return_x_0(*(double *)a4.m128i_i64);
  }
  else
  {
    *(double *)a4.m128i_i64 = v4.m128d_f64[0] + COERCE_DOUBLE(*(_QWORD *)&v5 & 0x3FF0000000000000LL);
    return *(double *)a4.m128i_i64;
  }
  return result;
}
