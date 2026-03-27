char __usercall sub_5B59B0@<al>(double a1@<st2>, double a2@<st1>)
{
  _DWORD *OpenMenuTile; // esi
  OSGlobals *ParentMenu; // eax
  char v5; // bl
  int *Singleton; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414);
  LOBYTE(ParentMenu) = sub_578D70();
  v5 = (char)ParentMenu;
  if ( OpenMenuTile )
  {
    ParentMenu = (OSGlobals *)Tile_GetParentMenu(OpenMenuTile);
    BYTE1(ParentMenu[1].sound) = 1;
  }
  if ( v5 == 1 )
  {
    if ( OpenMenuTile )
    {
      Singleton = (int *)InterfaceManager_GetSingleton(0, 1);
      *(_WORD *)(*(_DWORD *)(Singleton[0x1A] + 0x24) + 0x18) |= 1u;
      *(_WORD *)(*(_DWORD *)(Singleton[7] + 0x24) + 0x18) |= 1u;
      MiscPass(Singleton, a1, a2, 0);
    }
    ParentMenu = OSGlobals;
    OSGlobals->quitGame = 1;
  }
  else if ( OpenMenuTile )
  {
    ParentMenu = (OSGlobals *)Tile_GetParentMenu(OpenMenuTile);
    BYTE1(ParentMenu[1].sound) = 0;
  }
  return (char)ParentMenu;
}
