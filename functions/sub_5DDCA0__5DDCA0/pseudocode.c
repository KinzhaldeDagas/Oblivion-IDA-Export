void sub_5DDCA0()
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FA); /*0x5ddca5*/
  if ( OpenMenuTile ) /*0x5ddcaf*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5ddcb3*/
    if ( ParentMenu ) /*0x5ddcba*/
      Menu::StartFadeIn(ParentMenu); /*0x5ddcbe*/
  }
}
