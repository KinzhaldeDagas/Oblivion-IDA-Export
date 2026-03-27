double __cdecl _pow_pentium4_::RET_ZERO_UF(float a1, float a2, double a3)
{
  unsigned int v3; // ecx

  return _pow_pentium4_::CALL_LIBM_ERROR_0(
           0x19,
           COERCE_DOUBLE(
             COERCE_UNSIGNED_INT64(2.225073858507201e-308 * 2.225073858507201e-308)
           | (_mm_cvtsi32_si128(v3).m128i_u64[0] << 0x2D)),
           a1,
           a2,
           a3);
}
