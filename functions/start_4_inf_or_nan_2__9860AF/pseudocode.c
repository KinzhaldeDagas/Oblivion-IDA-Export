int __usercall start_4_::inf_or_nan_2@<eax>(int a1@<eax>, double a2@<st0>, int a3, int a4)
{
  if ( (a1 & 0xFFFFF) != 0 || a4 ) /*0x9860bb*/
    return start_4_::not_infinity_2(a1, a2); /*0x9860b4*/
  __asm /*0x9860bd*/
  {
    fstp    st
    fld     tbyte ptr ds:0B319B0h
  }
  return start_4_::_Error_handling_2();
}
