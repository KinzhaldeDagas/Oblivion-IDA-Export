void __usercall sub_5D2CF0(double st6_0@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v3; // edi
  int ParentMenu; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  int v7; // edx
  _DWORD *a2[4]; // [esp+0h] [ebp-10h] BYREF

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x40F); /*0x5d2cf8*/
  v3 = OpenMenuTile; /*0x5d2cfd*/
  if ( OpenMenuTile ) /*0x5d2d04*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5d2d08*/
    v5 = (_DWORD *)ParentMenu; /*0x5d2d0d*/
    if ( ParentMenu ) /*0x5d2d11*/
    {
      v6 = OblivionDynamicCast( /*0x5d2d25*/
             *(void **)(ParentMenu + 0x40),
             0,
             (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
             &TileImage `RTTI Type Descriptor',
             0);
      if ( v6 ) /*0x5d2d2f*/
      {
        a2[3] = a2; /*0x5d2d3c*/
        sub_591A80(v6, 0); /*0x5d2d40*/
      }
      Tile_SetFloat(v3, (_DWORD *)0x1772, fConstant_2); /*0x5d2d56*/
      Menu::StartFadeOut(v5, st6_0); /*0x5d2d5d*/
      sub_459400(g_TESSaveLoadGame, v7); /*0x5d2d6d*/
    }
  }
}
