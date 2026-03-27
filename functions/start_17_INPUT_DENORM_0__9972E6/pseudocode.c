double __usercall start_17_::INPUT_DENORM_0@<st0>(__m128i a1@<xmm0>, __int64 a2)
{
  *(double *)a1.m128i_i64 = *(double *)a1.m128i_i64 * 4.503599627370496e15;
  return start_17_::DENORMAL_RETRY_0(0xFFFFFFCC, a1, a2);
}
