int __usercall start_6_::inf_or_nan_4@<eax>(int a1@<eax>, double a2@<st0>, int a3, int a4)
{
  if ( (a1 & 0xFFFFF) != 0 || a4 ) /*0x9863bb*/
    return start_6_::not_infinity_4(a1, a2); /*0x9863b4*/
  __asm /*0x9863bd*/
  {
    fstp    st
    fld     tbyte ptr ds:0B319B0h
  }
  return start_6_::_Error_handling_4();
}
