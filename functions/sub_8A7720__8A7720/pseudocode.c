void __thiscall sub_8A7720(LPCRITICAL_SECTION lpCriticalSection)
{
  int v2; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  unsigned __int64 v6; // rax
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax

  if ( !TryEnterCriticalSection(lpCriticalSection) )
  {
    v2 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v4 = (_DWORD *)ThreadLocalStoragePointer[TlsIndex];
    if ( v4[0x6D] )
    {
      if ( v4[0x69] < v4[0x6A] )
      {
        v5 = (_DWORD *)v4[0x69];
        *v5 = "TtCriticalLock";
        v6 = __rdtsc();
        v5[1] = v6;
        v4[0x69] = v5 + 3;
      }
      EnterCriticalSection(lpCriticalSection);
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v2] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v2] + 0x1A8) )
      {
        v7 = (_DWORD *)v4[0x69];
        *v7 = "Et";
        v8 = __rdtsc();
        v7[1] = v8;
        v4[0x69] = v7 + 3;
      }
    }
    else
    {
      EnterCriticalSection(lpCriticalSection);
    }
  }
}
