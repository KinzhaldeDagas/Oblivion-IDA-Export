void __usercall __noreturn start_3_::normal(double a1@<st0>)
{
  char v1; // cl

  __asm { fyl2x } /*0x985c1a*/
  unknown_libname_157(a1); /*0x985c1c*/
  if ( v1 == 1 ) /*0x985c24*/
    __asm { fchs } /*0x985c26*/
  start_3_::exit_2(); /*0x985c27*/
}
