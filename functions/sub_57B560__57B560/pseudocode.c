void __usercall sub_57B560(char a1@<bpl>, double a2@<st1>, double a3@<st0>)
{
  InterfaceManager *Singleton; // eax
  double Float; // st5
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b564*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b580*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b592*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b59c*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57b5ae*/
        if ( Float == fConstant_2 ) /*0x57b5be*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F5); /*0x57b5d3*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57b5dd*/
          if ( !OblivionDynamicCast( /*0x57b5e3*/
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &PauseMenu `RTTI Type Descriptor',
                  0) )
            sub_5BDA90(a1, Float, a2, a3); /*0x57b5ef*/
        }
      }
    }
  }
}
