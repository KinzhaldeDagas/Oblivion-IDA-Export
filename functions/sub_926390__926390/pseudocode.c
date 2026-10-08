LPCRITICAL_SECTION __thiscall sub_926390(LPCRITICAL_SECTION lpCriticalSection)
{
  InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0x1F40); /*0x92639a*/
  *((_DWORD *)lpCriticalSection + 0x10) = 0; /*0x9263a8*/
  *((_DWORD *)lpCriticalSection + 0x11) = 0; /*0x9263ab*/
  *((_DWORD *)lpCriticalSection + 0x12) = 0; /*0x9263ae*/
  *((_DWORD *)lpCriticalSection + 0x13) = 0; /*0x9263b1*/
  *((_DWORD *)lpCriticalSection + 0x14) = 0; /*0x9263b4*/
  *((_DWORD *)lpCriticalSection + 0x15) = 0; /*0x9263c0*/
  *((_QWORD *)lpCriticalSection + 0xB) = 0; /*0x9263c2*/
  *((_DWORD *)lpCriticalSection + 0x18) = 0; /*0x9263c8*/
  *((_DWORD *)lpCriticalSection + 0x19) = 0; /*0x9263cb*/
  CreateSemaphore((HANDLE *)lpCriticalSection + 0x1C, 0, 0x3E8); /*0x9263ce*/
  *((_DWORD *)lpCriticalSection + 0x1B) = 0; /*0x9263d3*/
  *((_DWORD *)lpCriticalSection + 0x1A) = 0; /*0x9263d6*/
  return lpCriticalSection; /*0x9263d9*/
}
