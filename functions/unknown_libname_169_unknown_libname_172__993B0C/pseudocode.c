int __usercall unknown_libname_169_::unknown_libname_172@<eax>(
        char a1@<cl>,
        int a2@<ebp>,
        long double a3@<st1>,
        long double a4@<st0>)
{
  *(_BYTE *)(a2 - 0x90) = 0xFE; /*0x993b0c*/
  __asm /*0x993b13*/
  {
    fabs
    fxch    st(1)
    fabs
    fxch    st(1)
  }
  return unknown_libname_169_::unknown_libname_173(a1, a3, a4);
}
