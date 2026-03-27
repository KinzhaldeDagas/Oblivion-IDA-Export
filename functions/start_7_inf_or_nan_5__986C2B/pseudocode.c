int __usercall start_7_::inf_or_nan_5@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0xFFFFF) != 0 || a3 )
    return start_7_::not_infinity_5();
  if ( (a1 & 0x80000000) == 0 )
    start_7_::exit_6();
  return start_7_::negative_x_0();
}
