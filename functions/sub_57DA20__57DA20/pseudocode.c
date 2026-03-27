char __userpurge sub_57DA20@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        const char *a5,
        char a6)
{
  int v7; // ecx
  int v8; // eax

  Tile_SetString(*(_DWORD **)(a1 + 0x1C), (_DWORD *)0xFE6, a5);
  v7 = *(_DWORD *)(a1 + 0x1C);
  v8 = *(_DWORD *)(v7 + 0x2C);
  if ( a6 )
    v8 = *(_DWORD *)(v7 + 0x2C) & 0xFFFE;
  *(_DWORD *)(v7 + 0x2C) = v8 | 0x20;
  return sub_58E870(*(_DWORD *)(a1 + 0x1C), a2, a3, a4);
}
