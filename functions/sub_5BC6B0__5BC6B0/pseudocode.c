double __usercall sub_5BC6B0@<st0>(
        double a1@<st2>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double result@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v8; // edi
  int ParentMenu; // esi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3E9); /*0x5bc6b6*/
  v8 = OpenMenuTile; /*0x5bc6bb*/
  if ( OpenMenuTile ) /*0x5bc6c2*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5bc6d0*/
    if ( ParentMenu ) /*0x5bc6d4*/
    {
      byte_B143AE = 1; /*0x5bc6de*/
      if ( InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed == 0xFF ) /*0x5bc6f4*/
        InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed = *(_BYTE *)(ParentMenu + 0x60); /*0x5bc705*/
      result = fConstant_2; /*0x5bc70b*/
      Tile_SetFloat(v8, 0x1772u, fConstant_2); /*0x5bc71c*/
      if ( !InterfaceManager_GetSingleton(0, 1)->unk054[3] || (Menu_GetB3A708(1), sub_5878B0(0x40E)) ) /*0x5bc744*/
        (**(void (__thiscall ***)(int, int))ParentMenu)(ParentMenu, 1); /*0x5bc75e*/
      else
        return Menu::StartFadeOut((_DWORD *)ParentMenu, a2, a3, a4, a5, a1, result); /*0x5bc751*/
    }
  }
  return result; /*0x5bc750*/
}
