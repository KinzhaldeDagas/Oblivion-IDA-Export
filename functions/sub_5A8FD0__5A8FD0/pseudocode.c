void sub_5A8FD0()
{
  Tile *OpenMenuTile; // eax
  Tile *v1; // esi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F2);
  v1 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    if ( Tile_GetParentMenu(OpenMenuTile) )
      Tile_SetFloat(v1, (_DWORD *)0xFA1, 1.0);
  }
}
