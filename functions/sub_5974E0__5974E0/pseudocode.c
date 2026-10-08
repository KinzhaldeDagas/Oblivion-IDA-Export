void __cdecl sub_5974E0()
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v2; // esi

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x406); /*0x5974e5*/
  if ( OpenMenuTile ) /*0x5974ef*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x597502*/
    v2 = OblivionDynamicCast( /*0x59750d*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &ClassMenu `RTTI Type Descriptor',
           0);
    if ( v2 ) /*0x597514*/
    {
      if ( InterfaceManager_ConsumeMessageButton() == 1 ) /*0x59751d*/
        ClassMenu_CommitCustomClass(v2); /*0x597521*/
      v2[0x16] = 0; /*0x597526*/
      *((_BYTE *)v2 + 0x54) = 0; /*0x59752d*/
      Menu::StartFadeIn(v2); /*0x597534*/
    }
  }
}
