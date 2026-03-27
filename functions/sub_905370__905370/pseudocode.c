int __cdecl sub_905370(int *a1, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // esi
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // edx
  _DWORD *i; // ecx
  unsigned __int64 v16; // rax
  int v17; // esi
  _DWORD *v18; // ecx
  int v20; // [esp+24h] [ebp-228h]
  char v21; // [esp+2Bh] [ebp-221h] BYREF
  _DWORD v22[4]; // [esp+2Ch] [ebp-220h] BYREF
  _BYTE v23[524]; // [esp+3Ch] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtShapeCollection";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *a1;
  v22[2] = a1[2];
  v11 = *a2;
  v22[3] = a1;
  v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x20))(v10);
  if ( v12 != 0xFFFFFFFF )
  {
    do
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, _DWORD *, int *, int, int))(a3 + 4))(
                       *(_DWORD *)(a3 + 4),
                       &v21,
                       a3,
                       a2,
                       a1,
                       v10,
                       v12) )
      {
        v22[0] = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v10 + 0x28))(v10, v12, v23);
        v22[1] = v12;
        v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v22[0] + 8))(v22[0]);
        if ( v20 == 0x18 )
        {
          v14 = a2;
          for ( i = (_DWORD *)a2[3]; i; i = (_DWORD *)i[3] )
            v14 = i;
          if ( (v14[7] & 0x2000) != 0 )
            v20 = 3;
        }
        (*(void (__cdecl **)(_DWORD *, _DWORD *, int, int, int))(*(_DWORD *)a3
                                                               + 0x14
                                                               * (*(unsigned __int8 *)(*(_DWORD *)a3
                                                                                     + 0x20 * v13
                                                                                     + v20
                                                                                     + 0x190)
                                                                + 0x7B)))(
          v22,
          a2,
          a3,
          a4,
          a5);
      }
      v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x24))(v10, v12);
    }
    while ( v12 != 0xFFFFFFFF );
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
