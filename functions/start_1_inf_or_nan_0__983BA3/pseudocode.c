int __usercall start_1_::inf_or_nan_0@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0xFFFFF) != 0 || a3 )
    return start_1_::not_infinity_0();
  else
    return start_1_::_Error_handling_0();
}
