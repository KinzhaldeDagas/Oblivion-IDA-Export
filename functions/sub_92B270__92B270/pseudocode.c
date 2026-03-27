int __thiscall sub_92B270(_DWORD **this, _BYTE *a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // ebx
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  char v16; // [esp+Fh] [ebp-5h] BYREF
  int v17; // [esp+10h] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtrcBvShape";
    v9 = __rdtsc();
    v17 = v9;
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  (*(void (__thiscall **)(_DWORD, char *, int, int))(**(this + 4) + 0x14))(*(this + 4), &v16, a3, a4);
  v10 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v10 + 0x1A4) >= *(_DWORD *)(v10 + 0x1A8) )
  {
    LODWORD(v14) = a2;
  }
  else
  {
    v11 = ThreadLocalStoragePointer[v5];
    v12 = *(_DWORD **)(v10 + 0x1A4);
    *v12 = "Et";
    v13 = __rdtsc();
    v14 = __PAIR64__(v13, (unsigned int)a2);
    v12[1] = HIDWORD(v14);
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3;
  }
  *a2 = v16;
  return v14;
}
