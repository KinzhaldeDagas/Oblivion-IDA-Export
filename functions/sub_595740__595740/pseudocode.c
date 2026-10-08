double __usercall sub_595740@<st0>(double a1@<st2>, double a2@<st7>, double a3@<st6>, double a4@<st5>, double a5@<st4>)
{
  Tile *OpenMenuTile; // eax
  Tile *v7; // esi
  _DWORD *ParentMenu; // edi
  double v9; // st7
  double result; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F9); /*0x595746*/
  v7 = OpenMenuTile; /*0x59574b*/
  if ( OpenMenuTile ) /*0x595752*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x59575c*/
    if ( ParentMenu ) /*0x595760*/
    {
      v9 = fConstant_2; /*0x595762*/
      Tile_SetFloat(v7, 0x1772u, fConstant_2); /*0x595773*/
      return Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, v9); /*0x59577c*/
    }
  }
  return result; /*0x59577b*/
}
