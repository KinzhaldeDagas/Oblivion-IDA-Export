double __usercall sub_5B3E90@<st0>(
        double a1@<st2>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double result@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x400); /*0x5b3e95*/
  if ( OpenMenuTile ) /*0x5b3e9f*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5b3ea3*/
    if ( ParentMenu ) /*0x5b3eaa*/
    {
      ParentMenu[0x16] = 3; /*0x5b3eac*/
      return Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, result); /*0x5b3eb5*/
    }
  }
  return result; /*0x5b3eba*/
}
