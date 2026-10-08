// AchievementsNative evidence: MagicPopupMenu close request. If menu 0x400 is open and parent casts to MagicPopupMenu, sets state at +0x58 to 3 so 0x5B4080 slides the popup closed.
void sub_5B3E50()
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v2; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x400); /*0x5b3e55*/
  if ( OpenMenuTile ) /*0x5b3e5f*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5b3e71*/
    v2 = OblivionDynamicCast( /*0x5b3e77*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &MagicPopupMenu `RTTI Type Descriptor',
           0);
    if ( v2 ) /*0x5b3e81*/
      v2[0x16] = 3; /*0x5b3e83*/
  }
}
