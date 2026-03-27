int __thiscall sub_91BC60(_BYTE *this, int a2, int a3)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v4; // edi
  int v5; // eax
  int v6; // ebp
  _DWORD *v7; // ebx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // esi
  _DWORD *v11; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v4 = TlsIndex;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TthkShapeDisplayViewer";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  if ( *(this + 0x10) )
  {
    sub_91BAC0(*((_DWORD *)this + 0xFFFFFFFB), a2, -1.0);
    LODWORD(v9) = ThreadLocalStoragePointer[v4];
    if ( *(_DWORD *)(v9 + 0x1A4) < *(_DWORD *)(v9 + 0x1A8) )
    {
LABEL_7:
      v10 = ThreadLocalStoragePointer[v4];
      v11 = *(_DWORD **)(v9 + 0x1A4);
      *v11 = "Et";
      v9 = __rdtsc();
      v11[1] = v9;
      *(_DWORD *)(v10 + 0x1A4) = v11 + 3;
    }
  }
  else
  {
    LODWORD(v9) = ThreadLocalStoragePointer[v4];
    if ( *(_DWORD *)(v9 + 0x1A4) < *(_DWORD *)(v9 + 0x1A8) )
      goto LABEL_7;
  }
  return v9;
}
