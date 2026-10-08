int __usercall start_7_::CW_is_set_to_default_6@<eax>(int a1@<eax>, long double a2@<st0>, int a3, int a4)
{
  if ( (a1 & 0x7FF00000) == 0 ) /*0x986bf6*/
    return start_7_::test_if_x_zero_0(a1, a2, a3, a4); /*0x986bf6*/
  if ( a1 >= 0 ) /*0x986bfd*/
    start_7_::normal_0(a2); /*0x986bfe*/
  return start_7_::negative_x_0();
}
