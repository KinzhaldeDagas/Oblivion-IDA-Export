void __usercall sub_57B740(char a1@<bl>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  double (__thiscall ***v10)(void *, int); // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x402);
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
          v10 = (double (__thiscall ***)(void *, int))OblivionDynamicCast(
                                                        ParentMenu,
                                                        0,
                                                        (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                                        &BookMenu `RTTI Type Descriptor',
                                                        0);
          if ( v10 )
            a4 = (**v10)(v10, 1);
          sub_5962C0(a1, a2, a4, a3, a5, a6);
        }
      }
    }
  }
}
