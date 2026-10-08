void __cdecl __CxxRestoreUnhandledExceptionFilter()
{
  LONG (*v0)(PEXCEPTION_POINTERS); // eax

  if ( LOBYTE(dword_BA9E10[0x20D]) ) /*0x992894*/
  {
    v0 = (LONG (*)(PEXCEPTION_POINTERS))_decode_pointer((void *)dword_BA9E10[0x20C]); /*0x99289c*/
    SetUnhandledExceptionFilter(v0); /*0x9928a3*/
    LOBYTE(dword_BA9E10[0x20D]) = 0; /*0x9928a9*/
  }
}
