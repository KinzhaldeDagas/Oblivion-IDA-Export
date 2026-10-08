double __usercall sub_5B41E0@<st0>(double a1@<st2>, double a2@<st7>, double a3@<st6>, double a4@<st5>, double a5@<st4>)
{
  Tile *OpenMenuTile; // eax
  Tile *v7; // esi
  double v8; // st7
  _DWORD *ParentMenu; // eax
  double result; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x400); /*0x5b41e6*/
  v7 = OpenMenuTile; /*0x5b41eb*/
  if ( OpenMenuTile ) /*0x5b41f2*/
  {
    if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x5b41f6*/
    {
      v8 = fConstant_2; /*0x5b41ff*/
      Tile_SetFloat(v7, 0x1772u, fConstant_2); /*0x5b4210*/
      ParentMenu = (_DWORD *)Tile_GetParentMenu(v7); /*0x5b4217*/
      return Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, v8); /*0x5b421f*/
    }
  }
  return result; /*0x5b421e*/
}
