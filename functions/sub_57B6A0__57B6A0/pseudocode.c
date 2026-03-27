void __usercall sub_57B6A0(
        int a1@<ebx>,
        char a2@<bpl>,
        int a3@<edi>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        _BYTE *a8)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  double (__thiscall ***v11)(void *, int); // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F6);
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
          v11 = (double (__thiscall ***)(void *, int))OblivionDynamicCast(
                                                        ParentMenu,
                                                        0,
                                                        (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                                        &LockPickMenu `RTTI Type Descriptor',
                                                        0);
          if ( v11 )
            a7 = (**v11)(v11, 1);
          sub_5AF440(a1, a2, a3, a4, a5, a6, a7, a8);
        }
      }
    }
  }
}
