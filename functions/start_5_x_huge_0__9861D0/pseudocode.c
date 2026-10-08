int __usercall start_5_::x_huge_0@<eax>(char a1@<cf>, char a2@<zf>, int a3, int a4, int a5)
{
  if ( a1 | a2 ) /*0x9861d0*/
  {
    if ( !(a4 | a5 & 0xFFFFF) ) /*0x9861dd*/
    {
      __asm { fstp    st } /*0x9861e9*/
      if ( (a5 & 0x80000000) != 0 ) /*0x9861eb*/
      {
        __asm { fldpi } /*0x9861ed*/
        start_5_::exit_4(); /*0x9861ef*/
      }
      start_5_::ret_zero_0(); /*0x9861eb*/
    }
  }
  return start_5_::not_in_range_0();
}
