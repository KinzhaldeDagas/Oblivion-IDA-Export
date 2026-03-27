int __usercall start_6_::inf_or_nan_4@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0xFFFFF) != 0 || a3 )
    return start_6_::not_infinity_4();
  else
    return start_6_::_Error_handling_4();
}
