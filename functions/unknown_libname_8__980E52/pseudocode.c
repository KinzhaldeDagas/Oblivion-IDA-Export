unsigned int __stdcall unknown_libname_8(PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord)
{
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  RtlUnwind_0(TargetFrame, unknown_libname_8_::unknown_libname_9, ExceptionRecord, 0); /*0x980e76*/
  return unknown_libname_8_::unknown_libname_9((int)&savedregs, (int)TargetFrame, (int)ExceptionRecord);
}
