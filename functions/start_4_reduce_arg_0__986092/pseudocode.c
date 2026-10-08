void __usercall __noreturn start_4_::reduce_arg_0(long double a1@<st1>, long double a2@<st0>)
{
  __asm /*0x986092*/
  {
    fld     tbyte ptr ds:0AA509Ah
    fxch    st(1)
  }
  start_4_::redux_loop_0(a1, a2); /*0x986099*/
}
