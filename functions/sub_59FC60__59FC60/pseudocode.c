void __usercall sub_59FC60(int *a1@<ebp>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v5; // edi
  int ParentMenu; // eax
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // ecx

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x413);
  v5 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v7 = (_DWORD *)ParentMenu;
    if ( ParentMenu )
    {
      v8 = *(_DWORD *)(ParentMenu + 0x78);
      if ( v8 )
      {
        sub_5D8180(v8, a2, a3, a4);
        sub_5D8370(v7[0x1E], a2, a3, a4);
      }
      else
      {
        v9 = *(_DWORD *)(ParentMenu + 0x7C);
        if ( v9 )
        {
          sub_5A2160(v9, a2, a3, a4);
          sub_5A2520(v7[0x1F], a1, a2, a3, a4);
        }
      }
      Tile_SetFloat(v5, (_DWORD *)0x1772, fConstant_2);
      sub_584740(v7, a2, a3);
    }
  }
}
