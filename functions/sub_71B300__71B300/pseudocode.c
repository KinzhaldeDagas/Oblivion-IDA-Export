char *__stdcall sub_71B300(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebp
  unsigned int i; // esi
  int v6; // edx
  _DWORD *v7; // ecx
  _BYTE *v8; // eax
  _BYTE *v9; // eax
  char *v11; // eax
  size_t v12; // [esp-4h] [ebp-24h]

  if ( sub_70E260((_DWORD *)(a1 + 8), a2) )
    return 0;
  if ( !a3 )
    goto LABEL_18;
  if ( a3 == a1 )
    return (char *)a3;
  if ( !sub_71AD40((_DWORD *)(a3 + 8), a2)
    || **(_DWORD **)(a3 + 0x54) != **(_DWORD **)(a1 + 0x54)
    || **(_DWORD **)(a3 + 0x58) != **(_DWORD **)(a1 + 0x58)
    || (v4 = *(_DWORD *)(a3 + 0x60), v4 > *(_DWORD *)(a1 + 0x60)) )
  {
LABEL_18:
    v11 = (char *)FormHeapAlloc(0x70u);
    if ( v11 )
      return sub_70E3D0(v11, a1);
    return 0;
  }
  for ( i = 0; i < v4; ++i )
  {
    v6 = *(_DWORD *)(a1 + 0x5C);
    LODWORD(v12) = *(_DWORD *)(v6 + 4 * i + 4) - *(_DWORD *)(v6 + 4 * i);
    memcpy(
      (void *)(*(_DWORD *)(a3 + 0x50) + *(_DWORD *)(*(_DWORD *)(a3 + 0x5C) + 4 * i)),
      (const void *)(*(_DWORD *)(v6 + 4 * i) + *(_DWORD *)(a1 + 0x50)),
      v12);
  }
  if ( !*(_DWORD *)(a1 + 0x4C) )
    return (char *)a3;
  v7 = *(_DWORD **)(a3 + 0x4C);
  if ( v7 )
  {
    sub_732480(v7, *(_DWORD *)(a1 + 0x4C));
    return (char *)a3;
  }
  v8 = (_BYTE *)FormHeapAlloc(0x24u);
  if ( v8 )
    v9 = sub_732690(v8, *(_DWORD *)(a1 + 0x4C));
  else
    v9 = 0;
  sub_71B140((_DWORD *)a3, (int)v9);
  return (char *)a3;
}
