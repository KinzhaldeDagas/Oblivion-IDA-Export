int __usercall start_7_::test_if_x_zero_0@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0xFFFFF) != 0 || a3 ) /*0x986c62*/
    return start_7_::x_is_denormal_0(a1); /*0x986c5b*/
  else
    return start_7_::_ErrorHandling_0(); /*0x986c6d*/
}
