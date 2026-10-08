int __usercall start_8_::CW_is_set_to_default_7@<eax>(int a1@<eax>, long double a2@<st0>, int a3, int a4)
{
  if ( (a1 & 0x7FF00000) == 0 ) /*0x986d46*/
    return start_8_::test_if_x_zero_1(a1, a2, a3, a4); /*0x986d46*/
  if ( a1 >= 0 ) /*0x986d4d*/
    start_8_::normal_1(a2); /*0x986d4e*/
  return start_8_::negative_x_1();
}
