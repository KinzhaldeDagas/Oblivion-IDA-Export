void __cdecl sub_5AD750(TESObjectCELL *a1)
{
  _DWORD *OpenMenuTile; // eax
  int *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF);
  if ( OpenMenuTile )
  {
    ParentMenu = (int *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
      sub_5AD700(ParentMenu, a1);
  }
}
