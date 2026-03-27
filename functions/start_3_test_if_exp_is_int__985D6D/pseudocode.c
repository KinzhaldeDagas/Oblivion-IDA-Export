int __usercall start_3_::test_if_exp_is_int@<eax>(double a1@<st0>)
{
  char v1; // cl

  test_whether_TOS_is_int(a1);
  if ( v1 )
    start_3_::normal();
  return start_3_::_ErrorHandling();
}
