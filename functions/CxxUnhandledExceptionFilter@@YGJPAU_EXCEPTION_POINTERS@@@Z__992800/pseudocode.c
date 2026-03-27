LONG __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  PEXCEPTION_RECORD ExceptionRecord; // eax
  UINT_PTR v3; // eax

  ExceptionRecord = ExceptionInfo->ExceptionRecord;
  if ( ExceptionInfo->ExceptionRecord->ExceptionCode == 0xE06D7363 && ExceptionRecord->NumberParameters == 3 )
  {
    v3 = ExceptionRecord->ExceptionInformation[0];
    if ( v3 == 0x19930520 || v3 == 0x19930521 || v3 == 0x19930522 || v3 == 0x1994000 )
      terminate();
  }
  return __CxxUnhandledExceptionFilter(ExceptionInfo);
}
