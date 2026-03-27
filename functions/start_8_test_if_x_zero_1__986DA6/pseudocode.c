int __usercall start_8_::test_if_x_zero_1@<eax>(int a1@<eax>, long double a2@<st0>, int a3, int a4)
{
  if ( (a1 & 0xFFFFF) != 0 || a4 )
    return start_8_::x_is_denormal_1(a2, a1);
  else
    return start_8_::_ErrorHandling_1();
}
