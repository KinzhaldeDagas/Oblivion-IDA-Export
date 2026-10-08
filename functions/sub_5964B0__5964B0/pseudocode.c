double __usercall sub_5964B0@<st0>(
        double a1@<st2>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double result@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x415); /*0x5964b5*/
  if ( OpenMenuTile ) /*0x5964bf*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5964c3*/
    if ( ParentMenu ) /*0x5964ca*/
      return Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, result); /*0x5964ce*/
  }
  return result; /*0x5964d3*/
}
