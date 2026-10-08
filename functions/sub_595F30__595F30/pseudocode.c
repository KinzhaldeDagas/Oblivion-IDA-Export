void __usercall sub_595F30(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>)
{
  Tile *OpenMenuTile; // eax
  Tile *v9; // esi
  double v10; // st7
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x402); /*0x595f39*/
  v9 = OpenMenuTile; /*0x595f3e*/
  if ( OpenMenuTile ) /*0x595f45*/
  {
    if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x595f49*/
    {
      v10 = fConstant_2; /*0x595f52*/
      Tile_SetFloat(v9, 0x1772u, fConstant_2); /*0x595f63*/
      ParentMenu = (_DWORD *)Tile_GetParentMenu(v9); /*0x595f6a*/
      Menu::StartFadeOut(ParentMenu, a3, a4, a5, a6, a2, v10); /*0x595f71*/
      if ( (*(_BYTE *)(*(_DWORD *)(a1 + 0x34) + 0x88) & 1) != 0 ) /*0x595f80*/
        sub_57DE50(0x1A); /*0x595f84*/
      else
        sub_57DE50(0x1C); /*0x595f91*/
    }
  }
}
