double __usercall sub_57B600@<st0>(
        char a1@<bpl>,
        double a2@<st2>,
        double a3@<st1>,
        double result@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>)
{
  InterfaceManager *Singleton; // eax
  double Float; // st4
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b604*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b620*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b632*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b63c*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57b64e*/
        if ( Float == fConstant_2 ) /*0x57b65e*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F5); /*0x57b673*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57b67d*/
          if ( !OblivionDynamicCast( /*0x57b683*/
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &PauseMenu `RTTI Type Descriptor',
                  0) )
            return sub_5BDCD0(a1, a2, a3, result, a5, a6, a7, a8, Float); /*0x57b68f*/
        }
      }
    }
  }
  return result; /*0x57b694*/
}
