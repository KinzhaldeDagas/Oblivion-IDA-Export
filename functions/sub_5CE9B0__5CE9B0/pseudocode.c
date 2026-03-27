void __usercall sub_5CE9B0(char a1@<bpl>, double a2@<st1>, double a3@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v5; // edi
  _DWORD *ParentMenu; // esi
  double v7; // st5
  Tile *v8; // eax
  Tile *v9; // esi
  void **v10; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x419);
  v5 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      v7 = fConstant_2;
      Tile_SetFloat(v5, (_DWORD *)0x1772, fConstant_2);
      sub_584740(ParentMenu, v7, a2);
      sub_6AC3D0((_DWORD *)OSGlobals->sound);
      if ( ParentMenu[0x11] && sub_578FE0() == 1 )
      {
        sub_57CAC0(a1, a2, a3, v7);
      }
      else if ( ParentMenu[0x12] )
      {
        v8 = (Tile *)Menu_GetOpenMenuTile(0x3F1);
        v9 = v8;
        if ( v8 )
        {
          v10 = (void **)Tile_GetParentMenu(v8);
          sub_58FBA0((int)v9, v7, a2, a3, 0);
          Tile_SetFloat(v9, (_DWORD *)0xFA1, fConstant_2);
          InventoryMenu_InitializeOrUpdate(v7, a2);
          sub_59E1D0(v10, 1);
        }
      }
      sub_57BD80();
    }
  }
}
