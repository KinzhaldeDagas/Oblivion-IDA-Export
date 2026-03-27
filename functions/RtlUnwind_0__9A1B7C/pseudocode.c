// attributes: thunk
void __stdcall RtlUnwind_0(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}
