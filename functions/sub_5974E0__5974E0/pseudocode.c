void sub_5974E0()
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v5; // esi

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x406);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v5 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &ClassMenu `RTTI Type Descriptor',
           0);
    if ( v5 )
    {
      if ( sub_578D70() == 1 )
        sub_5973F0(v5);
      v5[0x16] = 0;
      *((_BYTE *)v5 + 0x54) = 0;
      sub_584390((int)v5);
    }
  }
}
