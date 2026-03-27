int __usercall start_7_::CW_is_set_to_default_6@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0x7FF00000) == 0 )
    return start_7_::test_if_x_zero_0(a2, a3);
  if ( a1 < 0 )
    return start_7_::negative_x_0();
  return start_7_::normal_0();
}
