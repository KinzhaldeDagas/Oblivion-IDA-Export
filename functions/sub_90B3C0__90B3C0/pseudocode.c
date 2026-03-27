int __cdecl sub_90B3C0(int *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // ebx
  _DWORD *v17; // ecx
  _DWORD v19[4]; // [esp+10h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TthkBvAgent";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = a1[2];
  v11 = *a1;
  v19[3] = a1;
  v19[2] = v10;
  v12 = *(_DWORD *)(v11 + 0xC);
  v19[1] = a1[1];
  v19[0] = v12;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
  v14 = *(unsigned __int8 *)(*a3 + 0x20 * v13 + (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2) + 0x190);
  (*(void (__cdecl **)(_DWORD *, _DWORD *, _DWORD *, int))(*a3 + 0x14 * v14 + 0x994))(v19, a2, a3, a4);
  LODWORD(v15) = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
  {
    v16 = ThreadLocalStoragePointer[v5];
    v17 = *(_DWORD **)(v15 + 0x1A4);
    *v17 = "Et";
    v15 = __rdtsc();
    v17[1] = v15;
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3;
  }
  return v15;
}
