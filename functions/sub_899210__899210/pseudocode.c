int __thiscall sub_899210(int this)
{
  int v1; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v3; // eax
  int v4; // ebp
  _DWORD *v5; // esi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // edi
  _DWORD *v9; // ecx

  v1 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v3 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v3 + 0x1A4) < *(_DWORD *)(v3 + 0x1A8) )
  {
    v4 = ThreadLocalStoragePointer[TlsIndex];
    v5 = *(_DWORD **)(v3 + 0x1A4);
    *v5 = "TtPendingOps";
    v6 = __rdtsc();
    v5[1] = v6;
    *(_DWORD *)(v4 + 0x1A4) = v5 + 3;
  }
  *(_DWORD *)(this + 0x84) = 0;
  sub_8D8BF0(*(int **)(this + 0x80));
  LODWORD(v7) = ThreadLocalStoragePointer[v1];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[v1];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "Et";
    v7 = __rdtsc();
    v9[1] = v7;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  return v7;
}
