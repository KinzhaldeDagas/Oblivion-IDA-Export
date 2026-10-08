double sub_596470()
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x415); /*0x596475*/
  if ( !OpenMenuTile ) /*0x59647f*/
    return 1.0; /*0x5964a3*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x596491*/
  return (double)*((int *)OblivionDynamicCast( /*0x5964a2*/
                            ParentMenu,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                            &BreathMenu `RTTI Type Descriptor',
                            0)
                 + 0xC);
}
