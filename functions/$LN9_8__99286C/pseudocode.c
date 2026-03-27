int _LN9_8()
{
  LPTOP_LEVEL_EXCEPTION_FILTER v0; // eax

  v0 = SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)__CxxUnhandledExceptionFilter);
  dword_BAA640 = (int)_encode_pointer(v0);
  byte_BAA644 = 1;
  return 0;
}
