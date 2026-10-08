void __usercall sub_57B6A0(double a1@<st2>, double a2@<st1>, double a3@<st0>, _BYTE *a4)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  double (__thiscall ***v11)(void *, int); // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b6a4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b6c0*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b6d2*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b6dc*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57b6fe*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F6); /*0x57b713*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57b71d*/
          v11 = (double (__thiscall ***)(void *, int))OblivionDynamicCast( /*0x57b723*/
                                                        ParentMenu,
                                                        0,
                                                        (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                                        &LockPickMenu `RTTI Type Descriptor',
                                                        0);
          if ( v11 ) /*0x57b72d*/
            a3 = (**v11)(v11, 1); /*0x57b737*/
          sub_5AF440(a1, a2, a3, a4); /*0x57b739*/
        }
      }
    }
  }
}
