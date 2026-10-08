int __usercall start_2_::inf_or_nan_1@<eax>(int a1@<eax>, double a2@<st0>, int a3, int a4)
{
  if ( (a1 & 0xFFFFF) != 0 || a4 ) /*0x985948*/
    return start_2_::not_infinity_1(a1, a2); /*0x985941*/
  else
    return start_2_::not_in_range(); /*0x985949*/
}
