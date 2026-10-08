DWORD __thiscall sub_43F2E0(LPCRITICAL_SECTION lpCriticalSection)
{
  DWORD result; // eax

  EnterCriticalSection(lpCriticalSection); /*0x43f2e4*/
  result = GetCurrentThreadId(); /*0x43f2ea*/
  ++*((_DWORD *)lpCriticalSection + 0x1F); /*0x43f2f0*/
  *((_DWORD *)lpCriticalSection + 0x1E) = result; /*0x43f2f4*/
  return result; /*0x43f2f7*/
}
