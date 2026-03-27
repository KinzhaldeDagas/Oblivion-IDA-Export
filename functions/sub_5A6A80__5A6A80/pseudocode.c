void sub_5A6A80()
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v1; // esi
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
  v1 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    if ( Tile_GetParentMenu(OpenMenuTile) )
    {
      ParentMenu = (_DWORD *)Tile_GetParentMenu(v1);
      sub_5A66A0(ParentMenu);
    }
  }
}
