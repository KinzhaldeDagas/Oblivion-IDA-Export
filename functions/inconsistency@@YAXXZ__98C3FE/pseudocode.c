void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer((void *)dword_BA9E10[6]); /*0x98c410*/
  if ( v0 ) /*0x98c418*/
    v0(); /*0x98c41e*/
  terminate(); /*0x98c430*/
}
