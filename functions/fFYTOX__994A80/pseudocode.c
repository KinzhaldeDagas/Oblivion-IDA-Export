int __usercall fFYTOX@<eax>(char a1@<ch>, int a2@<ebp>, double a3@<st0>)
{
  *(_BYTE *)(a2 - 0x90) = 0xFE; /*0x994a80*/
  if ( a1 ) /*0x994a89*/
    return negYTOX(a3); /*0x994a89*/
  __asm { fxch    st(1) } /*0x994a8b*/
  return fFYTOX_::fFXTOY(a2);
}
