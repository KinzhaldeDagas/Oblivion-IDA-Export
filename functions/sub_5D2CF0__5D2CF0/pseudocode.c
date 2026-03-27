void __usercall sub_5D2CF0(double a1@<st2>, double st6_0@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // edi
  int ParentMenu; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  int v8; // edx
  _DWORD *a2[4]; // [esp+0h] [ebp-10h] BYREF

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x40F);
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
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      sub_584740(v6, a1, st6_0);
      sub_459400(SaveLoad_CurrentSavegame, v8);
    }
  }
}
