int __stdcall __crtInitCritSecNoSpinCount(LPCRITICAL_SECTION lpCriticalSection, int a2)
{
  InitializeCriticalSection(lpCriticalSection); /*0x98de04*/
  return 1; /*0x98de0d*/
}
