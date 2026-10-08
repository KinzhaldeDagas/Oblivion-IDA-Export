void __usercall rtforln0(int a1@<ebp>)
{
  *(_BYTE *)(a1 - 0x90) = 2; /*0x994b24*/
  __asm /*0x994b2b*/
  {
    fstp    st
    fld     tbyte_B31CDA
  }
}
