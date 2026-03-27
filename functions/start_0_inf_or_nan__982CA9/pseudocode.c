int __usercall start_0_::inf_or_nan@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0xFFFFF) != 0 || a3 )
    return start_0_::not_infinity();
  if ( (a1 & 0x80000000) == 0 )
    start_0_::exit();
  return start_0_::negative_x();
}
