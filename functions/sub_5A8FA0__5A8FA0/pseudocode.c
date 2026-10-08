double __usercall sub_5A8FA0@<st0>(
        double a1@<st2>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double result@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2); /*0x5a8fa5*/
  if ( OpenMenuTile ) /*0x5a8faf*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5a8fb3*/
    if ( ParentMenu ) /*0x5a8fba*/
      return Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, result); /*0x5a8fbe*/
  }
  return result; /*0x5a8fc3*/
}
