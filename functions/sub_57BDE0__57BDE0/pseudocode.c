void *sub_57BDE0()
{
  _DWORD *OpenMenuTile; // ecx
  void *result; // eax
  void *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A); /*0x57bdea*/
  result = 0; /*0x57bdef*/
  if ( OpenMenuTile ) /*0x57bdf3*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57be01*/
    return OblivionDynamicCast( /*0x57be07*/
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &PersuasionMenu `RTTI Type Descriptor',
             0);
  }
  return result; /*0x57be0f*/
}
