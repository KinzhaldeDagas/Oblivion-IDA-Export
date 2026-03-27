int __cdecl sub_9050F0(int *a1, int *a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // esi
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  unsigned __int64 v13; // rax
  int v14; // esi
  _DWORD *v15; // ecx
  int v17; // [esp+24h] [ebp-228h]
  char v18; // [esp+2Bh] [ebp-221h] BYREF
  _DWORD v19[4]; // [esp+2Ch] [ebp-220h] BYREF
  _BYTE v20[524]; // [esp+3Ch] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtShapeCollection";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = *a1;
  v19[2] = a1[2];
  v10 = *a2;
  v19[3] = a1;
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x20))(v9);
  if ( v11 != 0xFFFFFFFF )
  {
    do
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, int *, int *, int, int))(a3 + 4))(
                       *(_DWORD *)(a3 + 4),
                       &v18,
                       a3,
                       a2,
                       a1,
                       v9,
                       v11) )
      {
        v19[0] = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v9 + 0x28))(v9, v11, v20);
        v19[1] = v11;
        v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v19[0] + 8))(v19[0]);
        (*(void (__cdecl **)(_DWORD *, int *, int, int))(*(_DWORD *)a3
                                                       + 0x14
                                                       * *(unsigned __int8 *)(*(_DWORD *)a3 + 0x20 * v12 + v17 + 0x190)
                                                       + 0x998))(
          v19,
          a2,
          a3,
          a4);
      }
      v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x24))(v9, v11);
    }
    while ( v11 != 0xFFFFFFFF );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v13) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) )
  {
    v14 = ThreadLocalStoragePointer[TlsIndex];
    v15 = *(_DWORD **)(v13 + 0x1A4);
    *v15 = "Et";
    v13 = __rdtsc();
    v15[1] = v13;
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3;
  }
  return v13;
}
