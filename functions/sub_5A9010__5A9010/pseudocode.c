void sub_5A9010()
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // esi
  int ParentMenu; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F2);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      Tile_SetFloat(v4, (_DWORD *)0xFA1, fConstant_2);
      sub_584390(ParentMenu);
    }
  }
}
