int __thiscall sub_903450(int *this, int *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // esi
  unsigned __int64 v11; // rax
  int v12; // ebx
  int v13; // edx
  int v14; // ebp
  _DWORD *v15; // edi
  int v16; // esi
  unsigned __int64 v17; // rax
  int v18; // esi
  _DWORD *v19; // ecx
  _DWORD v21[4]; // [esp+14h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v8 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
  {
    v9 = ThreadLocalStoragePointer[TlsIndex];
    v10 = *(_DWORD **)(v8 + 0x1A4);
    *v10 = "TtListAgent";
    v11 = __rdtsc();
    v10[1] = v11;
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3;
  }
  v12 = *(this + 4);
  v13 = a2[2];
  v14 = *a2;
  v15 = (_DWORD *)*(this + 3);
  v16 = 0;
  v21[3] = a2;
  v21[2] = v13;
  if ( v12 > 0 )
  {
    do
    {
      v21[0] = *(_DWORD *)(*(_DWORD *)(v14 + 0x10) + 8 * v16);
      v21[1] = v16;
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int, int))(*(_DWORD *)*v15 + 0x10))(*v15, v21, a3, a4, a5, a6);
      ++v15;
      ++v16;
    }
    while ( v16 < v12 );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v17) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) )
  {
    v18 = ThreadLocalStoragePointer[TlsIndex];
    v19 = *(_DWORD **)(v17 + 0x1A4);
    *v19 = "Et";
    v17 = __rdtsc();
    v19[1] = v17;
    *(_DWORD *)(v18 + 0x1A4) = v19 + 3;
  }
  return v17;
}
