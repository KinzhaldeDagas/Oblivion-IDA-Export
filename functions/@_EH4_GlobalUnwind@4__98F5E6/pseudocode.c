int __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind_0(TargetFrame, _EH4_GlobalUnwind, 0, 0);
  return _EH4_GlobalUnwind();
}
