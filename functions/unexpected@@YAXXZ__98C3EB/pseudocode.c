void __usercall __noreturn unexpected(int a1@<ebp>)
{
  void (*v1)(void); // eax

  v1 = (void (*)(void))_getptd(a1)[0x1F]; /*0x98c3f0*/
  if ( v1 ) /*0x98c3f5*/
    v1(); /*0x98c3f7*/
  terminate(); /*0x98c3f9*/
}
