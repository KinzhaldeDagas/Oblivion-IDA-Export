double sub_596470()
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x415);
  if ( !OpenMenuTile )
    return 1.0;
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  return (double)*((int *)OblivionDynamicCast(
                            ParentMenu,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                            &BreathMenu `RTTI Type Descriptor',
                            0)
                 + 0xC);
}
