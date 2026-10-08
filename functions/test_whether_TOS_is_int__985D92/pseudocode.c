void __usercall test_whether_TOS_is_int(double a1@<st0>)
{
  _ST6 = a1; /*0x985d92*/
  __asm { frndint } /*0x985d94*/
  if ( _ST6 == a1 ) /*0x985d9e*/
  {
    _ST6 = a1 * dbl_B30D40; /*0x985da8*/
    __asm { frndint } /*0x985daa*/
    test_whether_TOS_is_int_::_odd(); /*0x985db2*/
  }
  else
  {
    test_whether_TOS_is_int_::_not_int(); /*0x985d9e*/
  }
}
