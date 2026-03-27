double __cdecl _pow_pentium4_::RET_INF_OF(float a1, float a2, double a3)
{
  int v3; // ecx
  double result; // st7

  if ( v3 )
    return _pow_pentium4_::CALL_LIBM_ERROR_0(0x18, -8.98846567431158e307 * 8.98846567431158e307, a1, a2, a3);
  _pow_pentium4_::RET_INF_OF2(0, 0x18);
  return result;
}
