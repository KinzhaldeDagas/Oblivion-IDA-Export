char __userpurge sub_57DA20@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, char *a5, char a6)
{
  int v7; // ecx
  int v8; // eax

  Tile_SetString(*(_DWORD **)(a1 + 0x1C), (_DWORD *)0xFE6, a5); /*0x57da30*/
  v7 = *(_DWORD *)(a1 + 0x1C); /*0x57da3a*/
  v8 = *(_DWORD *)(v7 + 0x2C); /*0x57da3d*/
  if ( a6 ) /*0x57da40*/
    v8 = *(_DWORD *)(v7 + 0x2C) & 0xFFFE; /*0x57da42*/
  *(_DWORD *)(v7 + 0x2C) = v8 | 0x20; /*0x57da4c*/
  return sub_58E870(*(_DWORD *)(a1 + 0x1C), a2, a3, a4); /*0x57da57*/
}
