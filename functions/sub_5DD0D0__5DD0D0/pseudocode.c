double __usercall sub_5DD0D0@<st0>(
        double a1@<st2>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double result@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v8; // esi
  _DWORD *ParentMenu; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x41B); /*0x5dd0d6*/
  v8 = OpenMenuTile; /*0x5dd0db*/
  if ( OpenMenuTile ) /*0x5dd0e2*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5dd0ec*/
    if ( ParentMenu ) /*0x5dd0f0*/
    {
      Tile_SetFloat(v8, 0x1772u, fConstant_2); /*0x5dd103*/
      return Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, result); /*0x5dd10c*/
    }
  }
  return result; /*0x5dd10b*/
}
