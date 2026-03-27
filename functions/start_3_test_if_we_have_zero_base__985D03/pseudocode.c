int __cdecl start_3_::test_if_we_have_zero_base(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx

  if ( a2 | a3 & 0xFFFFF )
    return start_3_::base_is_not_zero(a1, a2, a3);
  if ( !(a4 | a5 & 0x7FFFFFFF) )
    return start_3_::zero_to_zero();
  test_whether_TOS_is_int();
  if ( (a5 & 0x80000000) != 0 )
    return start_3_::ret_inf();
  BYTE1(v5) = HIBYTE(a3) >> 7;
  return start_3_::exp_is_positive(v5);
}
