LONG __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  PEXCEPTION_RECORD ExceptionRecord; // eax
  UINT_PTR v3; // eax

  ExceptionRecord = ExceptionInfo->ExceptionRecord; /*0x992805*/
  if ( ExceptionInfo->ExceptionRecord->ExceptionCode == 0xE06D7363 && ExceptionRecord->NumberParameters == 3 ) /*0x992813*/
  {
    v3 = ExceptionRecord->ExceptionInformation[0]; /*0x992815*/
    if ( v3 == 0x19930520 || v3 == 0x19930521 || v3 == 0x19930522 || v3 == 0x1994000 ) /*0x992832*/
      terminate(); /*0x992834*/
  }
  return __CxxUnhandledExceptionFilter((int)ExceptionInfo, (int)ExceptionInfo);
}
