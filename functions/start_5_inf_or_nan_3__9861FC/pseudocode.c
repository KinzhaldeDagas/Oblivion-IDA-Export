int __usercall start_5_::inf_or_nan_3@<eax>(int a1@<eax>, double a2@<st0>, int a3, int a4)
{
  if ( (a1 & 0xFFFFF) != 0 || a4 ) /*0x986208*/
    return start_5_::not_infinity_3(a1, a2); /*0x986201*/
  else
    return start_5_::not_in_range_0(); /*0x986209*/
}
