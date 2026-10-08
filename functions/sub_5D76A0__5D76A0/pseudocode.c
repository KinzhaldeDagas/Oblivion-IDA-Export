double __usercall sub_5D76A0@<st0>(
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

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x411); /*0x5d76a6*/
  v8 = OpenMenuTile; /*0x5d76ab*/
  if ( OpenMenuTile ) /*0x5d76b2*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5d76bc*/
    if ( ParentMenu ) /*0x5d76c0*/
    {
      sub_57DE50(0x15); /*0x5d76c4*/
      Tile_SetFloat(v8, 0x1772u, fConstant_2); /*0x5d76d9*/
      return Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, result); /*0x5d76e2*/
    }
  }
  return result; /*0x5d76e1*/
}
