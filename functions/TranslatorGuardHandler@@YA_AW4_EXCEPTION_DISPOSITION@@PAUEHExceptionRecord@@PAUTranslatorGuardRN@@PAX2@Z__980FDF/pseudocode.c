enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        _DWORD *TargetFrame,
        void *a3)
{
  enum _EXCEPTION_DISPOSITION (*v4)(void); // [esp+4h] [ebp-4h] BYREF

  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 ) /*0x980ffc*/
  {
    TargetFrame[9] = 1; /*0x981001*/
    return ExceptionContinueSearch; /*0x98100a*/
  }
  else
  {
    __InternalCxxFrameHandler( /*0x981031*/
      (int)ExceptionRecord,
      TargetFrame[4],
      (int)a3,
      0,
      TargetFrame[3],
      TargetFrame[5],
      TargetFrame[6],
      1u);
    if ( !TargetFrame[9] ) /*0x98103c*/
      unknown_libname_8(TargetFrame, ExceptionRecord); /*0x981048*/
    unknown_libname_10((_DWORD *)0x123, (int (__usercall **)@<eax>(int@<ebp>))&v4, 0, 0, 0, 0, 0); /*0x981060*/
    return v4(); /*0x981074*/
  }
}
