void __usercall sub_57B600(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F5);
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
          if ( !OblivionDynamicCast(
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &PauseMenu `RTTI Type Descriptor',
                  0) )
            sub_5BDCD0(a1, a2, a3, a4);
        }
      }
    }
  }
}
