int __usercall start_9_::inf_or_nan_7@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0xFFFFF) == 0 && !a3 )
    start_9_::exit_8();
  return start_9_::not_infinity_7();
}
