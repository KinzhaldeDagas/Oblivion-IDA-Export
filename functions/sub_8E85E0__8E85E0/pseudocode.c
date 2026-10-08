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

  v2 = a1; /*0x8e85e3*/
  v3 = *(_DWORD *)(a1 + 0x21C); /*0x8e85e7*/
  v4 = 0; /*0x8e85fd*/
  v20 = 0; /*0x8e85ff*/
  v17 = v3; /*0x8e8603*/
  v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v3 + 4); /*0x8e8604*/
  a1 = 4; /*0x8e8607*/
  v5(v17, &v20, 4, &a1, 1); /*0x8e860f*/
  v6 = a2; /*0x8e8611*/
  v7 = *(_DWORD *)(a2 + 8); /*0x8e8615*/
  if ( v7 >= 0 ) /*0x8e861d*/
  {
    v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8e862f*/
    if ( !v8 ) /*0x8e8637*/
      v8 = unk_BA7D9C; /*0x8e8639*/
    sub_8A75D0(v8, *(_DWORD **)a2, 4 * v7, 0x14); /*0x8e864e*/
  }
  v9 = v20; /*0x8e8656*/
  v10 = *(_DWORD *)(v6 + 8) & 0x40000000 | 0x80000000; /*0x8e865f*/
  *(_DWORD *)(v6 + 8) = v10; /*0x8e8664*/
  v11 = v10 & 0x3FFFFFFF; /*0x8e8667*/
  *(_DWORD *)v6 = 0; /*0x8e866e*/
  *(_DWORD *)(v6 + 4) = 0; /*0x8e8670*/
  v12 = v9; /*0x8e8673*/
  if ( v11 < v9 ) /*0x8e8675*/
  {
    v13 = 2 * v11; /*0x8e8677*/
    if ( v9 < v13 ) /*0x8e867b*/
      v9 = v13; /*0x8e867d*/
    sub_8A6E40((const void **)v6, v9, 4); /*0x8e8683*/
    v9 = v20; /*0x8e8688*/
  }
  *(_DWORD *)(v6 + 4) = v12; /*0x8e8691*/
  v14 = 4 * v9; /*0x8e8694*/
  if ( v9 > 0 ) /*0x8e869b*/
  {
    do /*0x8e86cd*/
    {
      v15 = *(void (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x8e86b2*/
      v19 = *(_DWORD *)v6 + 4 * v4; /*0x8e86b7*/
      v18 = *(_DWORD *)(v2 + 0x21C); /*0x8e86b8*/
      a1 = 4; /*0x8e86b9*/
      v15(v18, v19, 4, &a1, 1); /*0x8e86c1*/
      ++v4; /*0x8e86c3*/
    }
    while ( v4 < v20 ); /*0x8e86cd*/
  }
  return v14; /*0x8e86cf*/
}
