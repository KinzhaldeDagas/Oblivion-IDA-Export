double sub_5A9010()
{
  Tile *OpenMenuTile; // eax
  Tile *v1; // esi
  _DWORD *ParentMenu; // edi
  double result; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F2); /*0x5a9016*/
  v1 = OpenMenuTile; /*0x5a901b*/
  if ( OpenMenuTile ) /*0x5a9022*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5a902c*/
    if ( ParentMenu ) /*0x5a9030*/
    {
      result = fConstant_2; /*0x5a9032*/
      Tile_SetFloat(v1, 0xFA1u, fConstant_2); /*0x5a9043*/
      Menu::StartFadeIn(ParentMenu); /*0x5a904c*/
    }
  }
  return result; /*0x5a904b*/
}
