int __usercall start_4_::inf_or_nan_2@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0xFFFFF) != 0 || a3 )
    return start_4_::not_infinity_2();
  else
    return start_4_::_Error_handling_2();
}
