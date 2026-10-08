double __usercall sub_5DDA50@<st0>(
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

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FB); /*0x5dda56*/
  v8 = OpenMenuTile; /*0x5dda5b*/
  if ( OpenMenuTile ) /*0x5dda62*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5dda6c*/
    if ( ParentMenu ) /*0x5dda70*/
    {
      Tile_SetFloat(v8, 0x1772u, fConstant_2); /*0x5dda83*/
      return Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, result); /*0x5dda8c*/
    }
  }
  return result; /*0x5dda8b*/
}
