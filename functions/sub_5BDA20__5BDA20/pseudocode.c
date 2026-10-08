void sub_5BDA20()
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F5); /*0x5bda25*/
  if ( OpenMenuTile ) /*0x5bda2f*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5bda33*/
    if ( ParentMenu ) /*0x5bda3a*/
      Menu::StartFadeIn(ParentMenu); /*0x5bda3e*/
  }
}
