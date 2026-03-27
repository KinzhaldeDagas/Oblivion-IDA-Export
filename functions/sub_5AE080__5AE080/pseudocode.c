double __usercall sub_5AE080@<st0>(char a1@<bpl>, double st5_0@<st2>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // edi
  int ParentMenu; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  double v8; // st6
  _DWORD *v9; // eax
  void *v10; // eax
  double result; // st7
  _DWORD *a2[4]; // [esp+0h] [ebp-10h] BYREF

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x40E);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v6 = (_DWORD *)ParentMenu;
    if ( ParentMenu )
    {
      v7 = OblivionDynamicCast(
             *(void **)(ParentMenu + 0x40),
             0,
             (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
             &TileImage `RTTI Type Descriptor',
             0);
      if ( v7 )
      {
        a2[3] = a2;
        sub_591A80(v7, 0);
      }
      v8 = fConstant_2;
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      sub_584740(v6, st5_0, v8);
      v9 = (_DWORD *)Menu_GetOpenMenuTile(0x3F5);
      if ( v9 )
      {
        a2[0] = 0;
        v10 = (void *)Tile_GetParentMenu(v9);
        if ( OblivionDynamicCast(
               v10,
               0,
               (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
               &PauseMenu `RTTI Type Descriptor',
               (int)a2[0]) )
        {
          return sub_5BDA20(a1, st5_0, v8);
        }
      }
    }
  }
  return result;
}
