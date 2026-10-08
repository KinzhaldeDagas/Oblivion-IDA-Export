void __thiscall sub_8A7720(LPCRITICAL_SECTION lpCriticalSection)
{
  int v2; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  unsigned __int64 v6; // rax
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax

  if ( !TryEnterCriticalSection(lpCriticalSection) ) /*0x8a7725*/
  {
    v2 = MEMORY[0xBA9DE4]; /*0x8a7734*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8a773c*/
    v4 = (_DWORD *)ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8a7743*/
    if ( v4[0x6D] ) /*0x8a7746*/
    {
      if ( v4[0x69] < v4[0x6A] ) /*0x8a775e*/
      {
        v5 = (_DWORD *)v4[0x69]; /*0x8a7760*/
        *v5 = "TtCriticalLock"; /*0x8a7766*/
        v6 = __rdtsc(); /*0x8a776c*/
        v5[1] = v6; /*0x8a7776*/
        v4[0x69] = v5 + 3; /*0x8a777c*/
      }
      EnterCriticalSection(lpCriticalSection); /*0x8a7783*/
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v2] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v2] + 0x1A8) ) /*0x8a7798*/
      {
        v7 = (_DWORD *)v4[0x69]; /*0x8a779a*/
        *v7 = "Et"; /*0x8a77a0*/
        v8 = __rdtsc(); /*0x8a77a6*/
        v7[1] = v8; /*0x8a77b0*/
        v4[0x69] = v7 + 3; /*0x8a77b7*/
      }
    }
    else
    {
      EnterCriticalSection(lpCriticalSection); /*0x8a77c3*/
    }
  }
}
