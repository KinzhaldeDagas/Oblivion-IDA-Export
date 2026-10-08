void __usercall start_3_::test_if_exp_is_int(double a1@<st0>)
{
  char v1; // cl

  __asm { fld     st(1) } /*0x985d6d*/
  test_whether_TOS_is_int(a1); /*0x985d6f*/
  __asm { fchs } /*0x985d74*/
  if ( v1 ) /*0x985d78*/
    start_3_::normal(a1); /*0x985d78*/
  __asm /*0x985d7e*/
  {
    fstp    st
    fstp    st
    fld     tbyte ptr ds:0B319B0h
  }
  start_3_::_ErrorHandling(); /*0x985d8d*/
}
