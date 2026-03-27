void __thiscall sub_926050(LPCRITICAL_SECTION lpCriticalSection)
{
  int v2; // eax
  int v3; // edi

  sub_8A7720(lpCriticalSection);
  v2 = *((_DWORD *)lpCriticalSection + 0x1B);
  *((_DWORD *)lpCriticalSection + 0x1B) = 0;
  if ( v2 > 0 )
  {
    v3 = v2;
    do
    {
      ReleaseSemaphore_0((HANDLE *)lpCriticalSection + 0x1C, 1);
      --v3;
    }
    while ( v3 );
  }
  LeaveCriticalSection(lpCriticalSection);
}
