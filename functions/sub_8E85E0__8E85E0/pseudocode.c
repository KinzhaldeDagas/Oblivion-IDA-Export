int __cdecl sub_8E85E0(signed int a1, int a2)
{
  signed int v2; // ebp
  int v3; // eax
  int v4; // edi
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  void (__cdecl *v15)(int, int, int, signed int *, int); // edx
  int v17; // [esp-14h] [ebp-28h]
  int v18; // [esp-14h] [ebp-28h]
  int v19; // [esp-10h] [ebp-24h]
  int v20; // [esp+10h] [ebp-4h] BYREF

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 0x21C);
  v4 = 0;
  v20 = 0;
  v17 = v3;
  v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v3 + 4);
  a1 = 4;
  v5(v17, &v20, 4, &a1, 1);
  v6 = a2;
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 >= 0 )
  {
    v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v8 )
      v8 = dword_BA7D9C;
    sub_8A75D0(v8, *(_DWORD **)a2, 4 * v7, 0x14);
  }
  v9 = v20;
  v10 = *(_DWORD *)(v6 + 8) & 0x40000000 | 0x80000000;
  *(_DWORD *)(v6 + 8) = v10;
  v11 = v10 & 0x3FFFFFFF;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  v12 = v9;
  if ( v11 < v9 )
  {
    v13 = 2 * v11;
    if ( v9 < v13 )
      v9 = v13;
    sub_8A6E40((const void **)v6, v9, 4);
    v9 = v20;
  }
  *(_DWORD *)(v6 + 4) = v12;
  v14 = 4 * v9;
  if ( v9 > 0 )
  {
    do
    {
      v15 = *(void (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
      v19 = *(_DWORD *)v6 + 4 * v4;
      v18 = *(_DWORD *)(v2 + 0x21C);
      a1 = 4;
      v15(v18, v19, 4, &a1, 1);
      ++v4;
    }
    while ( v4 < v20 );
  }
  return v14;
}
