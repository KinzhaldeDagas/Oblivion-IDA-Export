void __usercall sub_59C9F0(double a1@<st2>, double a2@<st7>, double a3@<st6>, double a4@<st5>, double a5@<st4>)
{
  Tile *OpenMenuTile; // eax
  Tile *v6; // esi
  _DWORD *ParentMenu; // edi
  double v8; // st7
  _DWORD *v9; // eax
  void *v10; // eax
  _DWORD *v11; // eax

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x417); /*0x59c9f6*/
  v6 = OpenMenuTile; /*0x59c9fb*/
  if ( OpenMenuTile ) /*0x59ca02*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x59ca0c*/
    if ( ParentMenu ) /*0x59ca10*/
    {
      v8 = fConstant_2; /*0x59ca12*/
      Tile_SetFloat(v6, 0x1772u, fConstant_2); /*0x59ca23*/
      Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, v8); /*0x59ca2a*/
      v9 = (_DWORD *)Menu_GetOpenMenuTile(0x414); /*0x59ca34*/
      v10 = (void *)Tile_GetParentMenu(v9); /*0x59ca4c*/
      v11 = OblivionDynamicCast( /*0x59ca52*/
              v10,
              0,
              (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
              &MainMenu `RTTI Type Descriptor',
              0);
      if ( v11 ) /*0x59ca5c*/
        sub_5B5A30(v11); /*0x59ca62*/
    }
  }
}
