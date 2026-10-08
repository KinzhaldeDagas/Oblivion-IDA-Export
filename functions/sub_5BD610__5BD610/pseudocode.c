void sub_5BD610()
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F7); /*0x5bd615*/
  if ( OpenMenuTile ) /*0x5bd61f*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5bd623*/
    if ( ParentMenu ) /*0x5bd62a*/
      Menu::StartFadeIn(ParentMenu); /*0x5bd62e*/
  }
}
