double __usercall sub_5A3810@<st0>(double a1@<st2>, double a2@<st7>, double a3@<st6>, double a4@<st5>, double a5@<st4>)
{
  Tile *OpenMenuTile; // eax
  Tile *v7; // esi
  _DWORD *ParentMenu; // edi
  double v9; // st7
  double result; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FC); /*0x5a3816*/
  v7 = OpenMenuTile; /*0x5a381b*/
  if ( OpenMenuTile ) /*0x5a3822*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5a382c*/
    if ( ParentMenu ) /*0x5a3830*/
    {
      v9 = fConstant_2; /*0x5a3832*/
      Tile_SetFloat(v7, 0x1772u, fConstant_2); /*0x5a3843*/
      return Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, v9); /*0x5a384c*/
    }
  }
  return result; /*0x5a384b*/
}
