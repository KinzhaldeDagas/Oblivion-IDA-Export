double __usercall start_15_::SPECIAL_CASES@<st0>(unsigned int a1@<eax>, int a2@<ecx>, double a3)
{
  double result; // st7

  if ( a1 >= 0x7FF00000 ) /*0x996de8*/
    return start_15_::INF_NAN(a1, a2, SLODWORD(a3), SHIDWORD(a3)); /*0x996de8*/
  if ( HIDWORD(a3) < 0x80000000 ) /*0x996df3*/
    return start_15_::CALL_LIBM_ERROR_2(0xE, 1.797693134862316e308 * 1.797693134862316e308, a3); /*0x996e06*/
  start_15_::UF(a3); /*0x996df3*/
  return result;
}
