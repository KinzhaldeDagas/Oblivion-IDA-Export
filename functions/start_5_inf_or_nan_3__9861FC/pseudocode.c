int __usercall start_5_::inf_or_nan_3@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0xFFFFF) != 0 || a3 )
    return start_5_::not_infinity_3();
  else
    return start_5_::not_in_range_0();
}
