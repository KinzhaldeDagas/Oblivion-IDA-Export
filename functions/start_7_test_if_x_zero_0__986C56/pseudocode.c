int __usercall start_7_::test_if_x_zero_0@<eax>(int a1@<eax>, long double a2@<st0>, int a3, int a4)
{
  if ( (a1 & 0xFFFFF) != 0 || a4 )
    return start_7_::x_is_denormal_0(a2, a1);
  else
    return start_7_::_ErrorHandling_0();
}
