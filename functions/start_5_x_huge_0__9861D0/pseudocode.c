int __usercall start_5_::x_huge_0@<eax>(char a1@<cf>, char a2@<zf>, int a3, int a4, int a5)
{
  if ( a1 | a2 )
  {
    if ( !(a4 | a5 & 0xFFFFF) )
    {
      if ( (a5 & 0x80000000) != 0 )
        start_5_::exit_4();
      start_5_::ret_zero_0();
    }
  }
  return start_5_::not_in_range_0();
}
