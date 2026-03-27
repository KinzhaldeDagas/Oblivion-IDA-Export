int __thiscall sub_903360(int *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // esi
  unsigned __int64 v10; // rax
  int v11; // ebx
  int v12; // edx
  int v13; // ebp
  _DWORD *v14; // edi
  int v15; // esi
  unsigned __int64 v16; // rax
  int v17; // esi
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
  v11 = *(this + 4);
  v12 = a2[2];
  v13 = *a2;
  v14 = (_DWORD *)*(this + 3);
  v15 = 0;
  v20[3] = a2;
  v20[2] = v12;
  if ( v11 > 0 )
  {
    do
    {
      v20[0] = *(_DWORD *)(*(_DWORD *)(v13 + 0x10) + 8 * v15);
      v20[1] = v15;
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int))(*(_DWORD *)*v14 + 0xC))(*v14, v20, a3, a4, a5);
      ++v14;
      ++v15;
    }
    while ( v15 < v11 );
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
