double __usercall sub_5A3D00@<st0>(
        double a1@<st2>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        int a6)
{
  Tile *OpenMenuTile; // eax
  Tile *v8; // esi
  _DWORD *ParentMenu; // edi
  double v10; // st7
  double result; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F3); /*0x5a3d06*/
  v8 = OpenMenuTile; /*0x5a3d0b*/
  if ( OpenMenuTile ) /*0x5a3d12*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5a3d1c*/
    if ( ParentMenu ) /*0x5a3d20*/
    {
      if ( a6 ) /*0x5a3d29*/
      {
        if ( InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed == 0xFF ) /*0x5a3d3e*/
          InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed = a6; /*0x5a3d4c*/
      }
      v10 = fConstant_2; /*0x5a3d52*/
      Tile_SetFloat(v8, 0x1772u, fConstant_2); /*0x5a3d63*/
      return Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, v10); /*0x5a3d6d*/
    }
  }
  return result; /*0x5a3d6c*/
}
