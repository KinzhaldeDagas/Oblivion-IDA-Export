int __cdecl sub_5BF7D0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v9; // esi
  Tile *v10; // ecx

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A);
  if ( !OpenMenuTile || (ParentMenu = Tile_GetParentMenu(OpenMenuTile), (v9 = ParentMenu) == 0) )
    JUMPOUT(0x5BFB0B);
  v10 = *(Tile **)(ParentMenu + 0x3C);
  *(_DWORD *)(ParentMenu + 0x34) = 0xFFFFFFFF;
  *(_DWORD *)(ParentMenu + 0x2C) = 0;
  *(_BYTE *)(ParentMenu + 0x38) = 0;
  Tile_SetFloat(v10, (_DWORD *)0xFA7, 0.0);
  *(_DWORD *)(v9 + 0x30) = 0;
  return def_5BF850(a1, a2, a3, a4, a5, a6, a7);
}
