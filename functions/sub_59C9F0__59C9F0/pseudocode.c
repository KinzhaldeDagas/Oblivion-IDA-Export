void __usercall sub_59C9F0(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // esi
  _DWORD *ParentMenu; // edi
  _DWORD *v6; // eax
  void *v7; // eax
  _DWORD *v8; // eax

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x417);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      sub_584740(ParentMenu, a1, a2);
      v6 = (_DWORD *)Menu_GetOpenMenuTile(0x414);
      v7 = (void *)Tile_GetParentMenu(v6);
      v8 = OblivionDynamicCast(
             v7,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &MainMenu `RTTI Type Descriptor',
             0);
      if ( v8 )
        sub_5B5A30(v8);
    }
  }
}
