int __usercall start_0_::test_if_x_zero@<eax>(int a1@<eax>, int a2, int a3)
{
  if ( (a1 & 0x7FF00000) == 0 && (a1 & 0xFFFFF) == 0 && !a3 ) /*0x982c9e*/
    start_0_::exit(); /*0x982ca0*/
  return start_0_::negative_x();
}
