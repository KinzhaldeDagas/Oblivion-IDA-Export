void __usercall memchr_::main_loop_start_0(unsigned int a1@<eax>, char *a2@<edx>, int a3@<ebx>)
{
  bool v3; // cf
  unsigned int v4; // eax

  v3 = a1 < 4; /*0x988ff1*/
  v4 = a1 - 4; /*0x988ff1*/
  if ( v3 ) /*0x988ff4*/
    memchr_::tail_less_then_4(v4, a2, a3); /*0x988ff4*/
  else
    memchr_::main_loop_entry(v4, a2, 0x1010101 * a3); /*0x989005*/
}
