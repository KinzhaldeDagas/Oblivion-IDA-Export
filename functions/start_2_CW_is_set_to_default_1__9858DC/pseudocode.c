int __usercall start_2_::CW_is_set_to_default_1@<eax>(unsigned int a1@<eax>, int a2, int a3, int a4)
{
  if ( a1 < 0x3FF00000 ) /*0x9858e1*/
    start_2_::exit_1(); /*0x9858f0*/
  return start_2_::x_huge(a1 < 0x3FF00000, a1 == 0x3FF00000, a2, a3, a4);
}
