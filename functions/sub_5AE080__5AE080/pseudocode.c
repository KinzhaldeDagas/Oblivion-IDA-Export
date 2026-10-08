void __usercall sub_5AE080(double st5_0@<st2>)
{
  Tile *OpenMenuTile; // eax
  Tile *v3; // edi
  int ParentMenu; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  double v7; // st6
  _DWORD *v8; // eax
  void *v9; // eax
  _DWORD *a2[4]; // [esp+0h] [ebp-10h] BYREF

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x40E); /*0x5ae088*/
  v3 = OpenMenuTile; /*0x5ae08d*/
  if ( OpenMenuTile ) /*0x5ae094*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5ae09c*/
    v5 = (_DWORD *)ParentMenu; /*0x5ae0a1*/
    if ( ParentMenu ) /*0x5ae0a5*/
    {
      v6 = OblivionDynamicCast( /*0x5ae0bd*/
             *(void **)(ParentMenu + 0x40),
             0,
             (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
             &TileImage `RTTI Type Descriptor',
             0);
      if ( v6 ) /*0x5ae0c7*/
      {
        a2[3] = a2; /*0x5ae0d4*/
        sub_591A80(v6, 0); /*0x5ae0d8*/
      }
      v7 = fConstant_2; /*0x5ae0dd*/
      Tile_SetFloat(v3, (_DWORD *)0x1772, fConstant_2); /*0x5ae0ee*/
      Menu::StartFadeOut(v5, st5_0, v7); /*0x5ae0f5*/
      v8 = (_DWORD *)Menu_GetOpenMenuTile(0x3F5); /*0x5ae0ff*/
      if ( v8 ) /*0x5ae109*/
      {
        a2[0] = 0; /*0x5ae10b*/
        v9 = (void *)Tile_GetParentMenu(v8); /*0x5ae11b*/
        if ( OblivionDynamicCast( /*0x5ae121*/
               v9,
               0,
               (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
               &PauseMenu `RTTI Type Descriptor',
               (int)a2[0]) )
        {
          sub_5BDA20(); /*0x5ae132*/
        }
      }
    }
  }
}
