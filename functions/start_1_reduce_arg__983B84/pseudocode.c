void __usercall __noreturn start_1_::reduce_arg(long double a1@<st1>, long double a2@<st0>)
{
  __asm /*0x983b84*/
  {
    fld     tbyte ptr ds:0AA509Ah
    fxch    st(1)
  }
  start_1_::redux_loop(a1, a2); /*0x983b8b*/
}
