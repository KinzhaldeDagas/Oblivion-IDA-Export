int __usercall start_8_::CW_is_set_to_default_7@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0x7FF00000) == 0 )
    return start_8_::test_if_x_zero_1(a2, a3);
  if ( a1 < 0 )
    return start_8_::negative_x_1();
  return start_8_::normal_1();
}
