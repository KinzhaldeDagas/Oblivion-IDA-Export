char __usercall sub_57BBF0@<al>(
        double a1@<st2>,
        double a2@<st1>,
        double a3@<st0>,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  BSStringT *OpenMenuTile; // esi
  void *ParentMenu; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x57bbf6*/
    return 0; /*0x57bbf6*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57bc12*/
    return 0; /*0x57bc12*/
  if ( !a4 ) /*0x57bc22*/
    return 0; /*0x57bc22*/
  OpenMenuTile = (BSStringT *)Menu_GetOpenMenuTile(0x400); /*0x57bc32*/
  if ( !OpenMenuTile ) /*0x57bc39*/
  {
    OpenMenuTile = PopoutMenu_Create_(a1, a2, a3); /*0x57bc40*/
    if ( !OpenMenuTile ) /*0x57bc44*/
      return 0; /*0x57bc44*/
  }
  if ( !Tile_GetParentMenu(OpenMenuTile) ) /*0x57bc48*/
    return 0; /*0x57bc48*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57bc61*/
  if ( !OblivionDynamicCast( /*0x57bc67*/
          ParentMenu,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &MagicPopupMenu `RTTI Type Descriptor',
          0) )
    return 0; /*0x57bcb6*/
  Tile_SetFloat((Tile *)OpenMenuTile, (_DWORD *)0xFAB, 0.0); /*0x57bc80*/
  ActiveEffectsMenu_BuildPopup__(a5, a2, a4, a5, a6, a7, a8); /*0x57bca8*/
  return 1; /*0x57bcb0*/
}
