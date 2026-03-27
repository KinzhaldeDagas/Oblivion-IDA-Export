int __thiscall sub_90B2F0(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebp
  _DWORD *v9; // ebx
  unsigned __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  unsigned __int64 v14; // rax
  int v15; // esi
  _DWORD *v16; // ecx
  _DWORD v18[4]; // [esp+10h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = TlsIndex;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TthkBvAgent";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v11 = a2[2];
  v12 = *(this + 3);
  v18[3] = a2;
  v18[2] = v11;
  v13 = *(_DWORD *)(*a2 + 0xC);
  v18[1] = a2[1];
  v18[0] = v13;
  (*(void (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v12 + 8))(v12, v18, a3, a4, a5);
  LODWORD(v14) = ThreadLocalStoragePointer[v6];
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) )
  {
    v15 = ThreadLocalStoragePointer[v6];
    v16 = *(_DWORD **)(v14 + 0x1A4);
    *v16 = "Et";
    v14 = __rdtsc();
    v16[1] = v14;
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3;
  }
  return v14;
}
