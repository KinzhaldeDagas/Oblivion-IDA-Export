void __thiscall sub_926050(LPCRITICAL_SECTION lpCriticalSection)
{
  int v2; // eax
  int v3; // edi

  sub_8A7720(lpCriticalSection); /*0x926053*/
  v2 = *((_DWORD *)lpCriticalSection + 0x1B); /*0x926058*/
  *((_DWORD *)lpCriticalSection + 0x1B) = 0; /*0x92605d*/
  if ( v2 > 0 ) /*0x926064*/
  {
    v3 = v2; /*0x92606b*/
    do /*0x92607a*/
    {
      ReleaseSemaphore_0((HANDLE *)lpCriticalSection + 0x1C, 1); /*0x926074*/
      --v3; /*0x926079*/
    }
    while ( v3 ); /*0x92607a*/
  }
  LeaveCriticalSection(lpCriticalSection); /*0x92607f*/
}
