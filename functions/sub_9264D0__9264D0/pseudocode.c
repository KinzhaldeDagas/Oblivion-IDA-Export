void __thiscall sub_9264D0(LPCRITICAL_SECTION lpCriticalSection, _DWORD *a2, int a3)
{
  int v4; // eax

  sub_8A7720(lpCriticalSection);
  sub_9263E0((_DWORD *)lpCriticalSection + 5 * a3 + 0x10, a2);
  v4 = *((_DWORD *)lpCriticalSection + 0x1B);
  if ( v4 )
  {
    *((_DWORD *)lpCriticalSection + 0x1B) = v4 - 1;
    ReleaseSemaphore_0((HANDLE *)lpCriticalSection + 0x1C, 1);
  }
  LeaveCriticalSection(lpCriticalSection);
}
