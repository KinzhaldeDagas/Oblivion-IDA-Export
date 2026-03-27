void __usercall sub_5C1000(double a1@<st1>)
{
  Tile *v3; // eax
  Tile *v4; // esi
  _DWORD *v5; // edi
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v8; // esi

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x416);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v8 = ParentMenu;
    if ( ParentMenu )
    {
      if ( *(_DWORD *)(ParentMenu + 0x24) != 2 )
      {
        Tile_SetFloat(*(Tile **)(ParentMenu + 0x2C), (_DWORD *)0xFA1, 1.0);
        Tile_SetFloat(*(Tile **)(v8 + 0x28), (_DWORD *)0xFA7, 0.0);
        byte_B3B43D = 0;
        v3 = (Tile *)Menu_GetOpenMenuTile(0x416);
        v4 = v3;
        if ( v3 )
        {
          v5 = (_DWORD *)Tile_GetParentMenu(v3);
          if ( v5 )
          {
            Tile_SetFloat(v4, (_DWORD *)0x1772, 1.0);
            sub_584740(v5, 1.0, a1);
          }
        }
      }
    }
  }
}
