DWORD __thiscall sub_43F2E0(LPCRITICAL_SECTION lpCriticalSection)
{
  DWORD result; // eax

  EnterCriticalSection(lpCriticalSection);
  result = GetCurrentThreadId();
  ++*((_DWORD *)lpCriticalSection + 0x1F);
  *((_DWORD *)lpCriticalSection + 0x1E) = result;
  return result;
}
