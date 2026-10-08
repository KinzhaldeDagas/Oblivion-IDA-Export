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

  v2 = *(_DWORD *)(a1 + 0x21C); /*0x8e83b7*/
  v3 = 0; /*0x8e83ce*/
  v16 = 0; /*0x8e83d0*/
  v15 = v2; /*0x8e83d4*/
  v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v2 + 4); /*0x8e83d5*/
  v17 = 4; /*0x8e83d8*/
  v4(v15, &v16, 4, &v17, 1); /*0x8e83e0*/
  v5 = *(_DWORD *)(a2 + 8); /*0x8e83e6*/
  if ( v5 >= 0 ) /*0x8e83ee*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8e8400*/
    if ( !v6 ) /*0x8e8408*/
      v6 = unk_BA7D9C; /*0x8e840a*/
    sub_8A75D0(v6, *(_DWORD **)a2, 0x10 * v5, 0x14); /*0x8e841e*/
  }
  v7 = v16; /*0x8e8426*/
  v8 = *(_DWORD *)(a2 + 8) & 0x40000000 | 0x80000000; /*0x8e842f*/
  *(_DWORD *)(a2 + 8) = v8; /*0x8e8434*/
  v9 = v8 & 0x3FFFFFFF; /*0x8e8437*/
  *(_DWORD *)a2 = 0; /*0x8e843e*/
  *(_DWORD *)(a2 + 4) = 0; /*0x8e8440*/
  v10 = v7; /*0x8e8443*/
  if ( v9 < v7 ) /*0x8e8445*/
  {
    v11 = 2 * v9; /*0x8e8447*/
    if ( v7 < v11 ) /*0x8e844b*/
      v7 = v11; /*0x8e844d*/
    sub_8A6E40((const void **)a2, v7, 0x10); /*0x8e8453*/
    v7 = v16; /*0x8e8458*/
  }
  *(_DWORD *)(a2 + 4) = v10; /*0x8e845f*/
  v12 = 0x10 * v7; /*0x8e8464*/
  if ( v7 ) /*0x8e8469*/
  {
    v13 = 0; /*0x8e846c*/
    do /*0x8e8498*/
    {
      (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(a1 + 0x21C) + 4))( /*0x8e8489*/
        *(_DWORD *)(a1 + 0x21C),
        v13 + *(_DWORD *)a2,
        0x10,
        0,
        0);
      ++v3; /*0x8e848b*/
      v13 += 0x10; /*0x8e8491*/
    }
    while ( v3 < v16 ); /*0x8e8498*/
  }
  return v12; /*0x8e849b*/
}
