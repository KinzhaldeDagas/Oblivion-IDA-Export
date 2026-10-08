int __usercall start_1_::inf_or_nan_0@<eax>(int a1@<eax>, double a2@<st0>, int a3, int a4)
{
  if ( (a1 & 0xFFFFF) != 0 || a4 ) /*0x983baf*/
    return start_1_::not_infinity_0(a1, a2); /*0x983ba8*/
  __asm /*0x983bb1*/
  {
    fstp    st
    fld     tbyte ptr ds:0B319B0h
  }
  return start_1_::_Error_handling_0();
}
