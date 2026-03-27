void __usercall sub_59F970(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  _DWORD *OpenMenuTile; // esi
  UnkBohBoh *v5; // eax
  int ParentMenu; // eax
  int *v7; // esi

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1);
  v5 = sub_6B8660();
  if ( OpenMenuTile )
  {
    if ( v5 )
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile);
      v7 = (int *)ParentMenu;
      if ( ParentMenu )
      {
        sub_59EA10(ParentMenu, a1, a2, a3, 1, 0);
        sub_59E2B0(v7, 1);
      }
    }
  }
}
