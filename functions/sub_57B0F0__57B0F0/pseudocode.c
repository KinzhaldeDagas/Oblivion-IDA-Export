void __cdecl sub_57B0F0(UInt32 specialization)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void *v4; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b0f4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b110*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b122*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b12c*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57b14e*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2); /*0x57b163*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57b16d*/
          v4 = OblivionDynamicCast( /*0x57b173*/
                 ParentMenu,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                 &HUDSubtitleMenu `RTTI Type Descriptor',
                 0);
          if ( v4 ) /*0x57b17d*/
            Shared_SetDwordAtOffset40(v4, specialization);// In this UI call context, Shared_SetDwordAtOffset40 writes the target object's +0x40 field; the shared setter must not impose a TESClass type here. /*0x57b186*/
        }
      }
    }
  }
}
