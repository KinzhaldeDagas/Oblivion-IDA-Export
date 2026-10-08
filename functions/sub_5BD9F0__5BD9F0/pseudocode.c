double __usercall sub_5BD9F0@<st0>(
        double a1@<st2>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double result@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F5); /*0x5bd9f5*/
  if ( OpenMenuTile ) /*0x5bd9ff*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5bda03*/
    if ( ParentMenu ) /*0x5bda0a*/
      return Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, result); /*0x5bda0e*/
  }
  return result; /*0x5bda13*/
}
