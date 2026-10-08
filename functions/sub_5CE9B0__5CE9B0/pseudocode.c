double __usercall sub_5CE9B0@<st0>(
        char a1@<bpl>,
        double a2@<st1>,
        double result@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>)
{
  Tile *OpenMenuTile; // eax
  Tile *v8; // edi
  _DWORD *ParentMenu; // esi
  double v10; // st5
  Tile *v11; // eax
  Tile *v12; // esi
  void **v13; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x419); /*0x5ce9b6*/
  v8 = OpenMenuTile; /*0x5ce9bb*/
  if ( OpenMenuTile ) /*0x5ce9c2*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5ce9d0*/
    if ( ParentMenu ) /*0x5ce9d4*/
    {
      v10 = fConstant_2; /*0x5ce9da*/
      Tile_SetFloat(v8, 0x1772u, fConstant_2); /*0x5ce9eb*/
      result = Menu::StartFadeOut(ParentMenu, a4, a5, a6, a7, v10, result); /*0x5ce9f2*/
      sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x5ce9ff*/
      if ( ParentMenu[0x11] && sub_578FE0() == 1 ) /*0x5cea12*/
      {
        result = sub_57CAC0(a1, a2, result, v10); /*0x5cea14*/
      }
      else if ( ParentMenu[0x12] ) /*0x5cea20*/
      {
        v11 = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x5cea2b*/
        v12 = v11; /*0x5cea30*/
        if ( v11 ) /*0x5cea37*/
        {
          v13 = (void **)Tile_GetParentMenu(v11); /*0x5cea44*/
          sub_58FBA0((int)v12, v10, a2, result, 0); /*0x5cea46*/
          result = fConstant_2; /*0x5cea4b*/
          Tile_SetFloat(v12, 0xFA1u, fConstant_2); /*0x5cea5c*/
          InventoryMenu_InitializeOrUpdate(v10, a2); /*0x5cea61*/
          sub_59E1D0(v13, 1); /*0x5cea6a*/
        }
      }
      sub_57BD80(); /*0x5cea71*/
    }
  }
  return result; /*0x5cea1a*/
}
