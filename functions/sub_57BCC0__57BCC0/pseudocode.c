char __usercall sub_57BCC0@<al>(
        char a1@<bpl>,
        char a2@<dil>,
        double a3@<st2>,
        double a4@<st1>,
        int a5,
        float a6,
        float a7,
        float a8,
        float a9)
{
  unsigned int *OpenMenuTile; // esi
  void *ParentMenu; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  OpenMenuTile = (unsigned int *)Menu_GetOpenMenuTile(0x400);
  if ( !OpenMenuTile )
  {
    OpenMenuTile = PopoutMenu_Create_(a1, a2, a3, a4);
    if ( !OpenMenuTile )
      return 0;
  }
  if ( !Tile_GetParentMenu(OpenMenuTile) )
    return 0;
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  if ( !OblivionDynamicCast(
          ParentMenu,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &MagicPopupMenu `RTTI Type Descriptor',
          0) )
    return 0;
  Tile_SetFloat((Tile *)OpenMenuTile, (_DWORD *)0xFAB, 0.0);
  sub_5B4E10(a3, a4, a5, a6, a7, a8, a9);
  return 1;
}
