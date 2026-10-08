int __usercall start_9_::inf_or_nan_7@<eax>(int a1@<eax>, double a2@<st0>, int a3, int a4)
{
  if ( (a1 & 0xFFFFF) == 0 && !a4 ) /*0x987141*/
  {
    __asm /*0x987143*/
    {
      fstp    st
      fld     tbyte ptr ds:0B319BAh
    }
    if ( a1 < 0 ) /*0x987150*/
      __asm { fchs } /*0x987152*/
    start_9_::exit_8(); /*0x987154*/
  }
  return start_9_::not_infinity_7(a1, a2);
}
