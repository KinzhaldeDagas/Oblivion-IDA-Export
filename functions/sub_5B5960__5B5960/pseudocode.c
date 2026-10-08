// ContinueFromLastSave decode: post-success main-menu Continue cleanup. Sets tile float 0x1772 on menu 0x414 and jumps to Menu close/transition helper sub_584740.
double __usercall sub_5B5960@<st0>(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v3; // esi
  _DWORD *ParentMenu; // edi
  double result; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x414); /*0x5b5966*/
  v3 = OpenMenuTile; /*0x5b596b*/
  if ( OpenMenuTile ) /*0x5b5972*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5b597c*/
    if ( ParentMenu ) /*0x5b5980*/
    {
      result = fConstant_2; /*0x5b5982*/
      Tile_SetFloat(v3, (_DWORD *)0x1772, fConstant_2); /*0x5b5993*/
      Menu::StartFadeOut(ParentMenu, a1, a2); /*0x5b599c*/
    }
  }
  return result; /*0x5b599b*/
}
