void __usercall sub_57B740(double a1@<st2>, double a2@<st1>, double a3@<st0>, int a4, Tile *a5)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  double (__thiscall ***v9)(void *, int); // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b744*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b760*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b772*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b77c*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57b79e*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x402); /*0x57b7b3*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57b7bd*/
          v9 = (double (__thiscall ***)(void *, int))OblivionDynamicCast( /*0x57b7c3*/
                                                       ParentMenu,
                                                       0,
                                                       (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                                       &BookMenu `RTTI Type Descriptor',
                                                       0);
          if ( v9 ) /*0x57b7cd*/
            a3 = (**v9)(v9, 1); /*0x57b7d7*/
          BookMenu_Create(a1, a3, a2, a4, a5); /*0x57b7d9*/
        }
      }
    }
  }
}
