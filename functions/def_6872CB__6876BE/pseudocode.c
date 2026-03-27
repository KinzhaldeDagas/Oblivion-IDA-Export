void def_6872CB()
{
  __asm
  {
    fstp    st; jumptable 006872CB default case
    fstp    st(4)
    fstp    st(2)
    fstp    st
  }
  JUMPOUT(0x6872E6);
}
