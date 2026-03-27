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

  switch ( *(_BYTE *)a2 )
  {
    case 2:
      goto LABEL_4;
    case 4:
      (*(void (__cdecl **)(int, int, _DWORD))(0x34 * *(unsigned __int8 *)(a2 + 1) + a3 + 0x1698))(
        a2,
        a2 + 0x30,
        *(_DWORD *)(a2 + 0x10));
      break;
    case 6:
LABEL_4:
      (*(void (__cdecl **)(int, int, _DWORD))(0x34 * *(unsigned __int8 *)(a2 + 1) + a3 + 0x1698))(
        a2,
        a2 + 0x20,
        *(_DWORD *)(a2 + 0x10));
      break;
  }
  v11 = (unsigned __int16 *)(a2 + 0xC);
  v3 = (int *)(a2 + 0x14);
  v12 = 2;
  do
  {
    v4 = *v3;
    v5 = *v11;
    v6 = *(_DWORD *)(*v3 + 0x24);
    v7 = *v3 + 0x24;
    v8 = *(_DWORD *)(*v3 + 0x28) - 1;
    *(_DWORD *)(*v3 + 0x28) = v8;
    *(_DWORD *)(v6 + 8 * v5) = *(_DWORD *)(v6 + 8 * v8);
    *(_DWORD *)(v6 + 8 * v5 + 4) = *(_DWORD *)(v6 + 8 * v8 + 4);
    if ( v5 < *(_DWORD *)(v4 + 0x28) )
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)v7 + 8 * v5)
               + 2 * (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + 8 * v5) + 0x14) != v4)
               + 0xC) = v5;
    if ( 2 * *(_DWORD *)(v7 + 4) + 8 <= (*(_DWORD *)(v7 + 8) & 0x3FFFFFFF) )
      sub_8A6F90((const void **)v7, 8, 0, 0);
    ++v3;
    v9 = v12 == 1;
    ++v11;
    --v12;
  }
  while ( !v9 );
  return sub_8E67F0(a1, a2);
}
