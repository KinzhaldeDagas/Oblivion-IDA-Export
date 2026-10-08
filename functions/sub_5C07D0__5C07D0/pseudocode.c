void __usercall sub_5C07D0(double a1@<st2>, double a2@<st7>, double a3@<st6>, double a4@<st5>, double a5@<st4>)
{
  _DWORD *v6; // eax
  int v7; // eax
  Tile *OpenMenuTile; // eax
  Tile *v9; // esi
  _DWORD *ParentMenu; // edi
  double v11; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F8); /*0x5c07d6*/
  v9 = OpenMenuTile; /*0x5c07db*/
  if ( OpenMenuTile ) /*0x5c07e2*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5c07ec*/
    if ( ParentMenu ) /*0x5c07f0*/
    {
      v11 = fConstant_2; /*0x5c07f2*/
      Tile_SetFloat(v9, 0x1772u, fConstant_2); /*0x5c0803*/
      Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, v11); /*0x5c080a*/
      v6 = (_DWORD *)Menu_GetOpenMenuTile(0x3F0); /*0x598645*/
      if ( v6 ) /*0x59864f*/
      {
        v7 = Tile_GetParentMenu(v6); /*0x598653*/
        if ( v7 ) /*0x59865a*/
          *(_BYTE *)(v7 + 0x54) = 0; /*0x59865c*/
      }
    }
  }
}
