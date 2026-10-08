int __usercall start_5_::CW_is_set_to_default_4@<eax>(unsigned int a1@<eax>, int a2, int a3, int a4)
{
  if ( a1 < 0x3FF00000 ) /*0x9861a1*/
    start_5_::exit_4(); /*0x9861b2*/
  return start_5_::x_huge_0(a1 < 0x3FF00000, a1 == 0x3FF00000, a2, a3, a4);
}
