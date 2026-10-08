int __usercall unknown_libname_100_::unknown_libname_106@<eax>(_DWORD *a1@<ebp>)
{
  *(_DWORD *)((char *)a1 + 0xFFFFFF72) = 3; /*0x990a43*/
  __asm /*0x990a4d*/
  {
    fld     ds:dbl_AA5070
    fxch    st(1)
    fscale
    fstp    st(1)
    fld     st
    fabs
    fcomp   ds:dbl_AA5060
    fstsw   ax
  }
  if ( (_AX & 0x100) == 0 && (_AX & 0x4000) == 0 ) /*0x990a66*/
    __asm { fmul    ds:dbl_AA5080 } /*0x990a69*/
  return unknown_libname_100_::unknown_libname_107(a1);
}
