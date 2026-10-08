void __usercall __noreturn start_6_::reduce_arg_1(long double a1@<st1>, long double a2@<st0>)
{
  __asm /*0x986392*/
  {
    fld     tbyte ptr ds:0AA509Ah
    fxch    st(1)
  }
  start_6_::redux_loop_1(a1, a2); /*0x986399*/
}
