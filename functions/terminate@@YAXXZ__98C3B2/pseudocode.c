void __cdecl __noreturn terminate()
{
  int v0; // ebp
  void (*v1)(void); // eax

  v1 = (void (*)(void))_getptd(v0)[0x1E]; /*0x98c3c3*/
  if ( v1 ) /*0x98c3c8*/
    v1(); /*0x98c3ce*/
  abort(); /*0x98c3e0*/
}
