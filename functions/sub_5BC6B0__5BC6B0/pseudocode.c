void __usercall sub_5BC6B0(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // edi
  int ParentMenu; // esi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3E9);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      byte_B143AE = 1;
      if ( InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed == 0xFF )
        InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed = *(_BYTE *)(ParentMenu + 0x60);
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      if ( !InterfaceManager_GetSingleton(0, 1)->unk054[3] || (Menu_GetB3A708(1), sub_5878B0(0x40E)) )
        (**(void (__thiscall ***)(int, int))ParentMenu)(ParentMenu, 1);
      else
        sub_584740((_DWORD *)ParentMenu, a1, a2);
    }
  }
}
