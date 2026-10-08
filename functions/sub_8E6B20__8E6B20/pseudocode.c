int __cdecl sub_8E6B20(int a1, int a2, int a3)
{
  int *v3; // ebp
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // edi
  bool v9; // zf
  unsigned __int16 *v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  switch ( *(_BYTE *)a2 ) /*0x8e6b32*/
  {
    case 2: /*0x8e6b32*/
      goto LABEL_4; /*0x8e6b32*/
    case 4: /*0x8e6b32*/
      (*(void (__cdecl **)(int, int, _DWORD))(0x34 * *(unsigned __int8 *)(a2 + 1) + a3 + 0x1698))( /*0x8e6c1a*/
        a2,
        a2 + 0x30,
        *(_DWORD *)(a2 + 0x10));
      break; /*0x8e6c21*/
    case 6: /*0x8e6b32*/
LABEL_4:
      (*(void (__cdecl **)(int, int, _DWORD))(0x34 * *(unsigned __int8 *)(a2 + 1) + a3 + 0x1698))( /*0x8e6b56*/
        a2,
        a2 + 0x20,
        *(_DWORD *)(a2 + 0x10));
      break;
  }
  v11 = (unsigned __int16 *)(a2 + 0xC); /*0x8e6b60*/
  v3 = (int *)(a2 + 0x14); /*0x8e6b67*/
  v12 = 2; /*0x8e6b6a*/
  do /*0x8e6bea*/
  {
    v4 = *v3; /*0x8e6b72*/
    v5 = *v11; /*0x8e6b7c*/
    v6 = *(_DWORD *)(*v3 + 0x24); /*0x8e6b7f*/
    v7 = *v3 + 0x24; /*0x8e6b82*/
    v8 = *(_DWORD *)(*v3 + 0x28) - 1; /*0x8e6b85*/
    *(_DWORD *)(*v3 + 0x28) = v8; /*0x8e6b86*/
    *(_DWORD *)(v6 + 8 * v5) = *(_DWORD *)(v6 + 8 * v8); /*0x8e6b8c*/
    *(_DWORD *)(v6 + 8 * v5 + 4) = *(_DWORD *)(v6 + 8 * v8 + 4); /*0x8e6b93*/
    if ( v5 < *(_DWORD *)(v4 + 0x28) ) /*0x8e6b9a*/
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)v7 + 8 * v5) /*0x8e6bab*/
               + 2 * (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + 8 * v5) + 0x14) != v4)
               + 0xC) = v5;
    if ( 2 * *(_DWORD *)(v7 + 4) + 8 <= (*(_DWORD *)(v7 + 8) & 0x3FFFFFFF) ) /*0x8e6bc2*/
      sub_8A6F90((const void **)v7, 8, 0, 0); /*0x8e6bcb*/
    ++v3; /*0x8e6bde*/
    v9 = v12 == 1; /*0x8e6be1*/
    ++v11; /*0x8e6be2*/
    --v12; /*0x8e6be6*/
  }
  while ( !v9 ); /*0x8e6bea*/
  return sub_8E67F0(a1, a2); /*0x8e6bfe*/
}
