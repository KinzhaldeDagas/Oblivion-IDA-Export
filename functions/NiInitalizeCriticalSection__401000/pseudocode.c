LPCRITICAL_SECTION __thiscall NiInitalizeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  InitializeCriticalSection(lpCriticalSection);
  return lpCriticalSection;
}
