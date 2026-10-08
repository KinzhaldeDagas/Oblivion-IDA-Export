int _LN9_8()
{
  LPTOP_LEVEL_EXCEPTION_FILTER v0; // eax

  v0 = SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)__CxxUnhandledExceptionFilter); /*0x992871*/
  dword_BA9E10[0x20C] = _encode_pointer(v0); /*0x99287d*/
  LOBYTE(dword_BA9E10[0x20D]) = 1; /*0x992883*/
  return 0; /*0x99288c*/
}
