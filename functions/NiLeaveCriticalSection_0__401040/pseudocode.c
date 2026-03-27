int __thiscall NiLeaveCriticalSection_0(LPCRITICAL_SECTION lpCriticalSection)
{
  int result; // eax

  LeaveCriticalSection(lpCriticalSection);
  return result;
}
