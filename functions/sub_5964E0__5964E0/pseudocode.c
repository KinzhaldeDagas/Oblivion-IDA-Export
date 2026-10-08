void sub_5964E0()
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x415); /*0x5964e5*/
  if ( OpenMenuTile ) /*0x5964ef*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5964f3*/
    if ( ParentMenu ) /*0x5964fa*/
      Menu::StartFadeIn(ParentMenu); /*0x5964fe*/
  }
}
