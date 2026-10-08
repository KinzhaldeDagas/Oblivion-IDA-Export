int __usercall start_0_::inf_or_nan@<eax>(int a1@<eax>, double a2@<st0>, int a3, int a4)
{
  if ( (a1 & 0xFFFFF) != 0 || a4 ) /*0x982cb5*/
    return start_0_::not_infinity(a1, a2); /*0x982cae*/
  if ( (a1 & 0x80000000) == 0 ) /*0x982cbc*/
    start_0_::exit(); /*0x982cbc*/
  return start_0_::negative_x();
}
