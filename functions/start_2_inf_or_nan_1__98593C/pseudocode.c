int __usercall start_2_::inf_or_nan_1@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0xFFFFF) != 0 || a3 )
    return start_2_::not_infinity_1();
  else
    return start_2_::not_in_range();
}
