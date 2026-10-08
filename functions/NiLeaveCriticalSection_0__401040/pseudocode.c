int __thiscall NiLeaveCriticalSection_0(LPCRITICAL_SECTION lpCriticalSection)
{
  int result; // eax

  LeaveCriticalSection(lpCriticalSection); /*0x401041*/
  return result; /*0x401047*/
}
