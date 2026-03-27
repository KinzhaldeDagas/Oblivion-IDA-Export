int __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind_0(TargetFrame, _global_unwind2_::_gu_return, 0, 0);
  return _global_unwind2_::_gu_return();
}
