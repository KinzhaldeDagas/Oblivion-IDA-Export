char sub_59B8C0()
{
  _DWORD *v4; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v7; // esi

  LOBYTE(v4) = sub_578D70();
  if ( (_BYTE)v4 == 2 )
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FD);
    if ( OpenMenuTile )
      ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    else
      ParentMenu = 0;
    v4 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &ControlsMenu `RTTI Type Descriptor',
           0);
    v7 = v4;
    if ( v4 )
    {
      LOBYTE(v4) = InputGlobals::ResetControlMap((DIDEVCAPS *)OSGlobals->input, v4[0x17]);
      *((_BYTE *)v7 + 0xD4) = 1;
    }
  }
  return (char)v4;
}
