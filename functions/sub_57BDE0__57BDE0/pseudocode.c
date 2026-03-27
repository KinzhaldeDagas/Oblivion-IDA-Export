void *sub_57BDE0()
{
  _DWORD *OpenMenuTile; // ecx
  void *result; // eax
  void *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A);
  result = 0;
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    return OblivionDynamicCast(
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &PersuasionMenu `RTTI Type Descriptor',
             0);
  }
  return result;
}
