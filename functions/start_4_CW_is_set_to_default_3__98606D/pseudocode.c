void __noreturn start_4_::CW_is_set_to_default_3()
{
  __asm /*0x98606d*/
  {
    fcos
    fstsw   ax
  }
  if ( (_AX & 0x400) == 0 ) /*0x986073*/
    start_4_::exit_3(); /*0x986074*/
  start_4_::reduce_arg_0(); /*0x986073*/
}
