void __cdecl __CxxRestoreUnhandledExceptionFilter()
{
  LONG (*v0)(PEXCEPTION_POINTERS); // eax

  if ( byte_BAA644 )
  {
    v0 = (LONG (*)(PEXCEPTION_POINTERS))_decode_pointer((void *)dword_BAA640);
    SetUnhandledExceptionFilter(v0);
    byte_BAA644 = 0;
  }
}
