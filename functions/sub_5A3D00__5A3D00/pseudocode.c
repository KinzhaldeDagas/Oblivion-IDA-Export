void __usercall sub_5A3D00(double a1@<st2>, double a2@<st1>, int a3)
{
  Tile *OpenMenuTile; // eax
  Tile *v5; // esi
  _DWORD *ParentMenu; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F3);
  v5 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      if ( a3 )
      {
        if ( InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed == 0xFF )
          InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed = a3;
      }
      Tile_SetFloat(v5, (_DWORD *)0x1772, fConstant_2);
      sub_584740(ParentMenu, a1, a2);
    }
  }
}
