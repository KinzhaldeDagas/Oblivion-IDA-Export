int __thiscall sub_903550(int *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  int v14; // esi
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // edi
  _DWORD *v18; // ecx
  _DWORD v20[4]; // [esp+14h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtListAgent";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v11 = a2[2];
  v12 = *a2;
  v20[3] = a2;
  v13 = *(this + 4);
  v14 = 0;
  v20[2] = v11;
  if ( v13 > 0 )
  {
    do
    {
      v15 = *(this + 3);
      v20[0] = *(_DWORD *)(*(_DWORD *)(v12 + 0x10) + 8 * v14);
      v20[1] = v14;
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int))(**(_DWORD **)(v15 + 4 * v14) + 8))(
        *(_DWORD *)(v15 + 4 * v14),
        v20,
        a3,
        a4,
        a5);
      if ( *(_BYTE *)(a5 + 4) )
        break;
      ++v14;
    }
    while ( v14 < *(this + 4) );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v16) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
  {
    v17 = ThreadLocalStoragePointer[TlsIndex];
    v18 = *(_DWORD **)(v16 + 0x1A4);
    *v18 = "Et";
    v16 = __rdtsc();
    v18[1] = v16;
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3;
  }
  return v16;
}
