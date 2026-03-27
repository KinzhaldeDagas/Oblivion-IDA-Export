void __usercall __noreturn start_1_::redux_loop(long double a1@<st1>, long double a2@<st0>)
{
  char v3; // c2

  do
    a1 = __FPREM1__(a1, a2);
  while ( v3 );
  start_1_::exit_0();
}
