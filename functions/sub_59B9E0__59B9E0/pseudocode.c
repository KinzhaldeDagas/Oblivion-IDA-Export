void __usercall sub_59B9E0(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // esi
  void *ParentMenu; // eax
  _DWORD *v6; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FD);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v6 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &ControlsMenu `RTTI Type Descriptor',
           0);
    if ( v6 )
    {
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      sub_584740(v6, a1, a2);
    }
  }
}
