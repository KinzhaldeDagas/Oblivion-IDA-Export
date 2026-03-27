void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer((void *)dword_BA9E28);
  if ( v0 )
    v0();
  terminate();
}
