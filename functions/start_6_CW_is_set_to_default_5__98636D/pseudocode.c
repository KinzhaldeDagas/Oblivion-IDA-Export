void __noreturn start_6_::CW_is_set_to_default_5()
{
  __asm /*0x98636d*/
  {
    fsin
    fstsw   ax
  }
  if ( (_AX & 0x400) == 0 ) /*0x986373*/
    start_6_::exit_5(); /*0x986374*/
  start_6_::reduce_arg_1(); /*0x986373*/
}
