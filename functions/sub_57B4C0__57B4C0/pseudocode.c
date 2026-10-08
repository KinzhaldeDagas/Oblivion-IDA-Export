double __usercall sub_57B4C0@<st0>(double a1@<st1>, double result@<st0>)
{
  InterfaceManager *Singleton; // eax
  double Float; // st5
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b4c4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b4e0*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b4f2*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b4fc*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57b50e*/
        if ( Float == fConstant_2 ) /*0x57b51e*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F4); /*0x57b533*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57b53d*/
          if ( OblivionDynamicCast( /*0x57b543*/
                 ParentMenu,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                 &SleepWaitMenu `RTTI Type Descriptor',
                 0) )
          {
            return ClsoeSleepWaitMenu(Float, a1, result); /*0x57b54f*/
          }
        }
      }
    }
  }
  return result; /*0x57b554*/
}
