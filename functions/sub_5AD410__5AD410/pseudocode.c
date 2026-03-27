bool sub_5AD410()
{
  _DWORD *OpenMenuTile; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF);
  return OpenMenuTile && Tile_GetParentMenu(OpenMenuTile);
}
