double __usercall start_11_::RETURN_PI_BY_2@<st0>(__int64 a1@<xmm7>)
{
  double result; // st7

  *(_QWORD *)&result = COERCE_UNSIGNED_INT64(6.123233995736766e-17 + 1.570796326794897) | ~COERCE__INT64(NAN) & a1;
  return result;
}
