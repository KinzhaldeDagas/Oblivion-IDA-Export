LPCRITICAL_SECTION __thiscall sub_926390(LPCRITICAL_SECTION lpCriticalSection)
{
  InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0x1F40);
  *((_DWORD *)lpCriticalSection + 0x10) = 0;
  *((_DWORD *)lpCriticalSection + 0x11) = 0;
  *((_DWORD *)lpCriticalSection + 0x12) = 0;
  *((_DWORD *)lpCriticalSection + 0x13) = 0;
  *((_DWORD *)lpCriticalSection + 0x14) = 0;
  *((_DWORD *)lpCriticalSection + 0x15) = 0;
  *((_QWORD *)lpCriticalSection + 0xB) = 0;
  *((_DWORD *)lpCriticalSection + 0x18) = 0;
  *((_DWORD *)lpCriticalSection + 0x19) = 0;
  CreateSemaphore((HANDLE *)lpCriticalSection + 0x1C, 0, 0x3E8);
  *((_DWORD *)lpCriticalSection + 0x1B) = 0;
  *((_DWORD *)lpCriticalSection + 0x1A) = 0;
  return lpCriticalSection;
}
