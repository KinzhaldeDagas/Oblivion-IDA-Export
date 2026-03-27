int __stdcall __crtInitCritSecNoSpinCount(LPCRITICAL_SECTION lpCriticalSection, int a2)
{
  InitializeCriticalSection(lpCriticalSection);
  return 1;
}
