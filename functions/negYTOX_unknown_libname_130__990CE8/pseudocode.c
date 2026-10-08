void __usercall negYTOX_::unknown_libname_130(int a1@<ebp>)
{
  __asm /*0x990ce8*/
  {
    fstp    st
    fld     tbyte_B319B0
  }
  if ( *(char *)(a1 - 0x90) > 0 ) /*0x990cf7*/
    JUMPOUT(0x990D00); /*0x990d00*/
  unknown_libname_131(a1); /*0x990cf8*/
}
