void __thiscall sub_9264D0(LPCRITICAL_SECTION lpCriticalSection, _DWORD *a2, int a3)
{
  int v4; // eax

  sub_8A7720(lpCriticalSection); /*0x9264d3*/
  sub_9263E0((_DWORD *)lpCriticalSection + 5 * a3 + 0x10, a2); /*0x9264e8*/
  v4 = *((_DWORD *)lpCriticalSection + 0x1B); /*0x9264ed*/
  if ( v4 ) /*0x9264f2*/
  {
    *((_DWORD *)lpCriticalSection + 0x1B) = v4 - 1; /*0x9264fa*/
    ReleaseSemaphore_0((HANDLE *)lpCriticalSection + 0x1C, 1); /*0x9264fd*/
  }
  LeaveCriticalSection(lpCriticalSection); /*0x926503*/
}
