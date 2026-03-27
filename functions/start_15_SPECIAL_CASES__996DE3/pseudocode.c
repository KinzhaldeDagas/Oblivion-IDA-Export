int __usercall start_15_::SPECIAL_CASES@<eax>(unsigned int a1@<eax>, double a2)
{
  if ( a1 >= 0x7FF00000 )
    return start_15_::INF_NAN(LODWORD(a2), HIDWORD(a2));
  if ( HIDWORD(a2) >= 0x80000000 )
    return start_15_::UF();
  return start_15_::CALL_LIBM_ERROR_2(0xE, 1.797693134862316e308 * 1.797693134862316e308, a2);
}
