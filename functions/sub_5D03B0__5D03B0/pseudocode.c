double __usercall sub_5D03B0@<st0>(
        double a1@<st2>,
        double st6_0@<st1>,
        char bp0@<bpl>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double result@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v9; // edi
  _DWORD *ParentMenu; // esi
  double v11; // st7
  Tile *v12; // eax
  Tile *v13; // esi
  int v14; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x40B); /*0x5d03b6*/
  v9 = OpenMenuTile; /*0x5d03bb*/
  if ( OpenMenuTile ) /*0x5d03c2*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5d03d0*/
    if ( ParentMenu ) /*0x5d03d4*/
    {
      v11 = fConstant_2; /*0x5d03da*/
      Tile_SetFloat(v9, 0x1772u, fConstant_2); /*0x5d03eb*/
      if ( ParentMenu[0x16] == 2 ) /*0x5d03f4*/
        sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x5d03fe*/
      result = Menu::StartFadeOut(ParentMenu, a2, a3, a4, a5, a1, v11); /*0x5d0405*/
      if ( ParentMenu[0x16] == 1 ) /*0x5d040e*/
      {
        if ( sub_578FE0() == 1 ) /*0x5d0418*/
        {
          result = sub_57CAC0(bp0, st6_0, result, a1); /*0x5d041a*/
          sub_57BD80(); /*0x5d041f*/
          goto LABEL_12; /*0x5d0426*/
        }
      }
      else
      {
        v12 = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x5d0430*/
        v13 = v12; /*0x5d0435*/
        if ( v12 ) /*0x5d043c*/
        {
          v14 = Tile_GetParentMenu(v12); /*0x5d0449*/
          sub_58FBA0((int)v13, a1, st6_0, result, 0); /*0x5d044b*/
          result = fConstant_2; /*0x5d0450*/
          Tile_SetFloat(v13, 0xFA1u, fConstant_2); /*0x5d0461*/
          InventoryMenu_InitializeOrUpdate(a1, st6_0); /*0x5d0466*/
          *(_BYTE *)(v14 + 0x96) = 1; /*0x5d046f*/
          sub_59E1D0((void **)v14, 0); /*0x5d0476*/
        }
      }
      sub_57BD80(); /*0x5d047b*/
LABEL_12:
      if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57bdb4*/
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57bdcc*/
          return sub_5B41E0(a1, a2, a3, a4, a5); /*0x57bdd2*/
      }
    }
  }
  return result; /*0x5d0488*/
}
