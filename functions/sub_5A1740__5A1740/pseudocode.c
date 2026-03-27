void __usercall sub_5A1740(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // esi
  void *ParentMenu; // eax
  _DWORD *v6; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x412);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v6 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &EnchantmentMenu `RTTI Type Descriptor',
           0);
    if ( v6 )
    {
      sub_57DE50(0x24);
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      sub_584740(v6, a1, a2);
    }
  }
}
