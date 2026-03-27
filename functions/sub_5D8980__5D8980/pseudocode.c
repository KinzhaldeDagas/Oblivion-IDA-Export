void __usercall sub_5D8980(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // esi
  int ParentMenu; // edi
  double v6; // st7
  Tile *v7; // eax
  Tile *v8; // esi
  int v9; // ebx

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x40D);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      v6 = fConstant_2;
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      sub_6AC3D0((_DWORD *)OSGlobals->sound);
      v7 = (Tile *)Menu_GetOpenMenuTile(0x3F1);
      v8 = v7;
      if ( v7 )
      {
        v9 = Tile_GetParentMenu(v7);
        sub_58FBA0((int)v8, a1, a2, v6, 0);
        Tile_SetFloat(v8, (_DWORD *)0xFA1, fConstant_2);
        *(_BYTE *)(v9 + 0x96) = 1;
        if ( *(_BYTE *)(ParentMenu + 0x5C) )
        {
          sub_5EF930(*(Actor **)(ParentMenu + 0x50));
          sub_59E030((void **)v9);
        }
      }
      sub_584740((_DWORD *)ParentMenu, a1, a2);
      sub_5B3E90(a1, a2);
    }
  }
}
