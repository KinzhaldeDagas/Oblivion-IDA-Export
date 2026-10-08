bool sub_5AD410()
{
  _DWORD *OpenMenuTile; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF); /*0x5ad415*/
  return OpenMenuTile && Tile_GetParentMenu(OpenMenuTile); /*0x5ad42e*/
}
