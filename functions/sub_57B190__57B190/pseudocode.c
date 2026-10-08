void __cdecl sub_57B190(unsigned __int8 *a1)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD **v4; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b194*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b1b0*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b1c2*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b1cc*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57b1ee*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x57b203*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57b20d*/
          v4 = (_DWORD **)OblivionDynamicCast( /*0x57b213*/
                            ParentMenu,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                            &HUDMainMenu `RTTI Type Descriptor',
                            0);
          if ( v4 ) /*0x57b21d*/
            sub_5A6A40(v4, a1); /*0x57b226*/
        }
      }
    }
  }
}
