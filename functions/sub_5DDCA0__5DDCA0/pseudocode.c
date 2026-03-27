void sub_5DDCA0()
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FA);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
      sub_584390(ParentMenu);
  }
}
