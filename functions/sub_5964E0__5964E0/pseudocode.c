void sub_5964E0()
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x415);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
      sub_584390(ParentMenu);
  }
}
