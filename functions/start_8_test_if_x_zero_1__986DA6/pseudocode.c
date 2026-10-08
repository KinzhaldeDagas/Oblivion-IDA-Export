int __usercall start_8_::test_if_x_zero_1@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0xFFFFF) != 0 || a3 ) /*0x986db2*/
    return start_8_::x_is_denormal_1(a1); /*0x986dab*/
  else
    return start_8_::_ErrorHandling_1(); /*0x986dbd*/
}
