void __usercall sub_578E30(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void (__thiscall ***v5)(void *, int); // esi
  InterfaceManager *Singleton; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF); /*0x578e35*/
  if ( OpenMenuTile ) /*0x578e3f*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x578e52*/
    v5 = (void (__thiscall ***)(void *, int))OblivionDynamicCast( /*0x578e5d*/
                                               ParentMenu,
                                               0,
                                               (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                               &LoadingMenu `RTTI Type Descriptor',
                                               0);
    if ( v5 ) /*0x578e64*/
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x578e71*/
      sub_57CFE0((int)Singleton, a1, a2, a3, 0x3EF, 0); /*0x578e7b*/
      (**v5)(v5, 1); /*0x578e88*/
    }
  }
}
