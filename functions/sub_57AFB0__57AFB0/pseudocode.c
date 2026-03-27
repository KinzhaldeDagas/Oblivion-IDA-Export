void __usercall sub_57AFB0(double a1@<st1>)
{
  InterfaceManager *Singleton; // eax
  double Float; // st5
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void *v6; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE);
        if ( Float == fConstant_2 )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2);
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
          v6 = OblivionDynamicCast(
                 ParentMenu,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                 &HUDSubtitleMenu `RTTI Type Descriptor',
                 0);
          if ( v6 )
            sub_5A9280((int)v6, Float, a1);
        }
      }
    }
  }
}
