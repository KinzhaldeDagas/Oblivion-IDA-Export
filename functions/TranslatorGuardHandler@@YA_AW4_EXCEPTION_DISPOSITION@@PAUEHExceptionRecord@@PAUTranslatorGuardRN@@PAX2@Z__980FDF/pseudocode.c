enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        _DWORD *TargetFrame,
        void *a3)
{
  enum _EXCEPTION_DISPOSITION (*v4)(void); // [esp+4h] [ebp-4h] BYREF

  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    TargetFrame[9] = 1;
    return ExceptionContinueSearch;
  }
  else
  {
    __InternalCxxFrameHandler(
      (int)ExceptionRecord,
      TargetFrame[4],
      (int)a3,
      0,
      TargetFrame[3],
      TargetFrame[5],
      TargetFrame[6],
      1);
    if ( !TargetFrame[9] )
      unknown_libname_8(TargetFrame, ExceptionRecord);
    unknown_libname_10((_DWORD *)0x123, &v4, 0, 0, 0, 0, 0);
    return v4();
  }
}
