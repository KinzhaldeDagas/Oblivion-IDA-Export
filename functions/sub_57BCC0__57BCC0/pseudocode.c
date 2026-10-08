// AchievementsNative evidence: armor/soul/sigil popup wrapper. Args observed from InventoryMenu hover: inventory entry, exposed popup X, source row Y, bottom margin, popup depth; opens/validates MagicPopupMenu then forwards to 0x5B4E10.
char __usercall sub_57BCC0@<al>(
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

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x57bcc5*/
    return 0; /*0x57bcc5*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57bce1*/
    return 0; /*0x57bce1*/
  OpenMenuTile = (BSStringT *)Menu_GetOpenMenuTile(0x400); /*0x57bcf5*/
  if ( !OpenMenuTile ) /*0x57bcfc*/
  {
    OpenMenuTile = PopoutMenu_Create_(a1, a2, a3); /*0x57bd03*/
    if ( !OpenMenuTile ) /*0x57bd07*/
      return 0; /*0x57bd07*/
  }
  if ( !Tile_GetParentMenu(OpenMenuTile) ) /*0x57bd0b*/
    return 0; /*0x57bd0b*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57bd24*/
  if ( !OblivionDynamicCast( /*0x57bd2a*/
          ParentMenu,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &MagicPopupMenu `RTTI Type Descriptor',
          0) )
    return 0; /*0x57bd7b*/
  Tile_SetFloat((Tile *)OpenMenuTile, (_DWORD *)0xFAB, 0.0); /*0x57bd43*/
  sub_5B4E10(a5, a2, a3, a4, a5, a6, a7, a8); /*0x57bd6f*/
  return 1; /*0x57bd79*/
}
