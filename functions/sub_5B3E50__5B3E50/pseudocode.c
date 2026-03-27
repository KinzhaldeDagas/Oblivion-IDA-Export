void sub_5B3E50()
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v2; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x400);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v2 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &MagicPopupMenu `RTTI Type Descriptor',
           0);
    if ( v2 )
      v2[0x16] = 3;
  }
}
