void __cdecl sub_5BEA90(char a1)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  Tile **v3; // esi
  float a3; // [esp+8h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v3 = (Tile **)ParentMenu;
    if ( ParentMenu )
    {
      if ( a1 != (Tile_GetFloat((_DWORD *)*(_DWORD *)(ParentMenu + 0x98), 0xFA1) == fConstant_2) )
      {
        a3 = (float)(2 - (a1 != 1));
        Tile_SetFloat(v3[0x26], (_DWORD *)0xFA1, a3);
        Tile_SetFloat(v3[0x27], (_DWORD *)0xFA1, a3);
        Tile_SetFloat(v3[0x28], (_DWORD *)0xFA1, a3);
        Tile_SetFloat(v3[0x29], (_DWORD *)0xFA1, a3);
      }
    }
  }
}
