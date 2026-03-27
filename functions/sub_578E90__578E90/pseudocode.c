void __cdecl sub_578E90(float *a1)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v3; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v3 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &LoadingMenu `RTTI Type Descriptor',
           0);
    if ( v3 )
      sub_5AD380(v3, a1);
  }
}
