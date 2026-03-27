int __cdecl sub_8E83B0(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  void (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // ebp
  int v11; // eax
  int v12; // ebp
  int v13; // ebx
  int v15; // [esp-14h] [ebp-28h]
  unsigned int v16; // [esp+Ch] [ebp-8h] BYREF
  int v17; // [esp+10h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(a1 + 0x21C);
  v3 = 0;
  v16 = 0;
  v15 = v2;
  v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v2 + 4);
  v17 = 4;
  v4(v15, &v16, 4, &v17, 1);
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 >= 0 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    sub_8A75D0(v6, *(_DWORD **)a2, 0x10 * v5, 0x14);
  }
  v7 = v16;
  v8 = *(_DWORD *)(a2 + 8) & 0x40000000 | 0x80000000;
  *(_DWORD *)(a2 + 8) = v8;
  v9 = v8 & 0x3FFFFFFF;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  v10 = v7;
  if ( v9 < v7 )
  {
    v11 = 2 * v9;
    if ( v7 < v11 )
      v7 = v11;
    sub_8A6E40((const void **)a2, v7, 0x10);
    v7 = v16;
  }
  *(_DWORD *)(a2 + 4) = v10;
  v12 = 0x10 * v7;
  if ( v7 )
  {
    v13 = 0;
    do
    {
      (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(a1 + 0x21C) + 4))(
        *(_DWORD *)(a1 + 0x21C),
        v13 + *(_DWORD *)a2,
        0x10,
        0,
        0);
      ++v3;
      v13 += 0x10;
    }
    while ( v3 < v16 );
  }
  return v12;
}
