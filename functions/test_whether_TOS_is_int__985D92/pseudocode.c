int __usercall test_whether_TOS_is_int@<eax>(double a1@<st0>)
{
  double v3; // st7
  char v4; // cl

  _ST6 = a1;
  __asm { frndint }
  if ( _ST6 != a1 )
    return test_whether_TOS_is_int_::_not_int(0);
  v3 = a1 * dbl_B30D40;
  v4 = 1;
  _ST6 = v3;
  __asm { frndint }
  if ( _ST6 == v3 )
    v4 = 2;
  return test_whether_TOS_is_int_::_odd(v4);
}
