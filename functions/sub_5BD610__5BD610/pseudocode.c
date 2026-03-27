void sub_5BD610()
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F7);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
      sub_584390(ParentMenu);
  }
}
