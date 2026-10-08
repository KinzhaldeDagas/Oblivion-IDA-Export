LPCRITICAL_SECTION __thiscall NiInitalizeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  InitializeCriticalSection(lpCriticalSection); /*0x401004*/
  return lpCriticalSection; /*0x40100c*/
}
