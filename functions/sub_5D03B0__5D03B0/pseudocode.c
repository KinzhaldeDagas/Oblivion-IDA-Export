void __usercall sub_5D03B0(double a1@<st2>, double a2@<st1>, char a3@<bpl>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // edi
  _DWORD *ParentMenu; // esi
  double v6; // st7
  Tile *v7; // eax
  Tile *v8; // esi
  int v9; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x40B);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      v6 = fConstant_2;
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      if ( ParentMenu[0x16] == 2 )
        sub_6AC3D0((_DWORD *)OSGlobals->sound);
      sub_584740(ParentMenu, a1, a2);
      if ( ParentMenu[0x16] == 1 )
      {
        if ( sub_578FE0() == 1 )
        {
          sub_57CAC0(a3, a2, v6, a1);
          sub_57BD80();
          goto LABEL_12;
        }
      }
      else
      {
        v7 = (Tile *)Menu_GetOpenMenuTile(0x3F1);
        v8 = v7;
        if ( v7 )
        {
          v9 = Tile_GetParentMenu(v7);
          sub_58FBA0((int)v8, a1, a2, v6, 0);
          Tile_SetFloat(v8, (_DWORD *)0xFA1, fConstant_2);
          InventoryMenu_InitializeOrUpdate(a1, a2);
          *(_BYTE *)(v9 + 0x96) = 1;
          sub_59E1D0((void **)v9, 0);
        }
      }
      sub_57BD80();
LABEL_12:
      if ( InterfaceManager_GetSingleton(0, 1) )
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor )
          sub_5B41E0(a1, a2);
      }
    }
  }
}
