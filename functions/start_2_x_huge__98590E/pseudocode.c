int __usercall start_2_::x_huge@<eax>(char a1@<cf>, char a2@<zf>, int a3, int a4, int a5)
{
  if ( a1 | a2 ) /*0x98590e*/
  {
    if ( !(a4 | a5 & 0xFFFFF) ) /*0x98591b*/
    {
      __asm /*0x985927*/
      {
        fstp    st
        fld     tbyte ptr ds:0B319BAh
      }
      if ( (a5 & 0x80000000) != 0 ) /*0x98592f*/
        __asm { fchs } /*0x985931*/
      start_2_::exit_1(); /*0x985933*/
    }
  }
  return start_2_::not_in_range();
}
