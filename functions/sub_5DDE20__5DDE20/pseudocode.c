void __usercall sub_5DDE20(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // edi
  void *ParentMenu; // eax
  _BYTE *v6; // esi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FA);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v6 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &VideoMenu `RTTI Type Descriptor',
           0);
    if ( v6 )
    {
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      sub_584740(v6, a1, a2);
      if ( byte_B02D70 != v6[0x114] )
        byte_B3B740 = 1;
      if ( ShaderPackage < 5 )
        byte_B06F14 = 0;
    }
  }
}
