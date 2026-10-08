int __usercall start_8_::inf_or_nan_6@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0xFFFFF) != 0 || a3 ) /*0x986d87*/
    return start_8_::not_infinity_6(); /*0x986d80*/
  if ( (a1 & 0x80000000) == 0 ) /*0x986d8e*/
    start_8_::exit_7(); /*0x986d8e*/
  return start_8_::negative_x_1();
}
