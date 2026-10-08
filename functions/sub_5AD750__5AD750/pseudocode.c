void __cdecl sub_5AD750(TESObjectCELL *a1)
{
  _DWORD *OpenMenuTile; // eax
  int *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF); /*0x5ad755*/
  if ( OpenMenuTile ) /*0x5ad75f*/
  {
    ParentMenu = (int *)Tile_GetParentMenu(OpenMenuTile); /*0x5ad763*/
    if ( ParentMenu ) /*0x5ad76a*/
      sub_5AD700(ParentMenu, a1); /*0x5ad773*/
  }
}
