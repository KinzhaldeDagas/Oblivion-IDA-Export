void __usercall sub_578E30(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void (__thiscall ***v6)(void *, int); // esi
  InterfaceManager *Singleton; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v6 = (void (__thiscall ***)(void *, int))OblivionDynamicCast(
                                               ParentMenu,
                                               0,
                                               (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                               &LoadingMenu `RTTI Type Descriptor',
                                               0);
    if ( v6 )
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_57CFE0((int)Singleton, a1, a2, a3, 0x3EF, 0);
      (**v6)(v6, 1);
    }
  }
}
