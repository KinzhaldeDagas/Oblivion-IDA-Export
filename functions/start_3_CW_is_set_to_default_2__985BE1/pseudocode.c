int __usercall start_3_::CW_is_set_to_default_2@<eax>(
        int a1@<eax>,
        int a2@<ecx>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // ecx
  int v8; // eax
  char v9; // zf

  v7 = a2 & 0x7FF00000; /*0x985be1*/
  if ( v7 == 0x7FF00000 ) /*0x985bf1*/
    return start_3_::special_exponent(a1, a3, a4, a5, a6, a7); /*0x985bf1*/
  unknown_libname_160(v7, &a4); /*0x985bf7*/
  if ( v9 ) /*0x985bfc*/
    return start_3_::special_base(a3, a4, a5); /*0x985bfc*/
  if ( (v8 & 0x7FF00000) != 0 ) /*0x985c07*/
    return start_3_::base_is_not_zero(a3, a4, a5); /*0x985c08*/
  return start_3_::test_if_we_have_zero_base(a3, a4, a5, a6, a7);
}
