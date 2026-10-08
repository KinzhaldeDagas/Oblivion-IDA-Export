int __usercall start_3_::test_if_we_have_zero_base@<eax>(double a1@<st0>, int a2, int a3, int a4, int a5, int a6)
{
  unsigned __int8 v6; // cl

  if ( a3 | a4 & 0xFFFFF ) /*0x985d0c*/
    return start_3_::base_is_not_zero(a1, a2, a3, a4); /*0x985d10*/
  __asm { fstp    st } /*0x985d16*/
  if ( !(a5 | a6 & 0x7FFFFFFF) ) /*0x985d21*/
    return start_3_::zero_to_zero(); /*0x985d25*/
  test_whether_TOS_is_int(a1); /*0x985d27*/
  if ( (a6 & 0x80000000) == 0 ) /*0x985d3b*/
    return start_3_::exp_is_positive(); /*0x985d3b*/
  __asm { fld     tbyte ptr ds:0B31CD0h } /*0x985d3d*/
  if ( (v6 & (HIBYTE(a4) >> 7)) != 0 ) /*0x985d45*/
    __asm { fchs } /*0x985d47*/
  return start_3_::ret_inf();
}
