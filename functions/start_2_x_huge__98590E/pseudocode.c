int __usercall start_2_::x_huge@<eax>(char a1@<cf>, char a2@<zf>, int a3, int a4, int a5)
{
  if ( a1 | a2 )
  {
    if ( !(a4 | a5 & 0xFFFFF) )
      start_2_::exit_1();
  }
  return start_2_::not_in_range();
}
