void __cdecl __noreturn unexpected()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[0x1F];
  if ( v0 )
    v0();
  terminate();
}
