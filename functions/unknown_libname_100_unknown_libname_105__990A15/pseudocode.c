int __usercall unknown_libname_100_::unknown_libname_105@<eax>(_DWORD *a1@<ebp>)
{
  *(_DWORD *)((char *)a1 + 0xFFFFFF72) = 4; /*0x990a15*/
  __asm /*0x990a1f*/
  {
    fld     ds:dbl_AA5078
    fxch    st(1)
    fscale
    fstp    st(1)
    fld     st
    fabs
    fcomp   ds:dbl_AA5068
    fstsw   ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x990a39*/
    __asm { fmul    ds:dbl_AA5088 } /*0x990a3b*/
  return unknown_libname_100_::unknown_libname_107(a1);
}
