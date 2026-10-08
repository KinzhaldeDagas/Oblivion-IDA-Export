double __fastcall unknown_libname_179(__int16 a1)
{
  double result; // st7

  __asm { fstp    st } /*0x993b65*/
  if ( !(_BYTE)a1 ) /*0x993b69*/
    return unknown_libname_179_::unknown_libname_181(SHIBYTE(a1)); /*0x993b69*/
  __asm /*0x993b6b*/
  {
    fstp    st
    fldpi
  }
  if ( HIBYTE(a1) ) /*0x993b71*/
    __asm { fchs } /*0x993b73*/
  unknown_libname_179_::unknown_libname_180(); /*0x993b71*/
  return result;
}
