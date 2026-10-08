double __usercall ClsoeSleepWaitMenu@<st0>(
        double a1@<st2>,
        double a2@<st1>,
        double result@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>)
{
  Tile *OpenMenuTile; // eax
  Tile *v8; // esi
  _DWORD *ParentMenu; // edi
  InterfaceManager *Singleton; // eax
  double v11; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F4); /*0x5d6a16*/
  v8 = OpenMenuTile; /*0x5d6a1b*/
  if ( OpenMenuTile ) /*0x5d6a22*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5d6a2c*/
    if ( ParentMenu ) /*0x5d6a30*/
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d6a36*/
      sub_5806D0((int)Singleton, a1, a2, result); /*0x5d6a40*/
      sub_6AC330((_DWORD *)MEMORY[0xB33398]->sound, 0x100); /*0x5d6a52*/
      sub_57DE50(2); /*0x5d6a59*/
      v11 = fConstant_2; /*0x5d6a5e*/
      Tile_SetFloat(v8, 0x1772u, fConstant_2); /*0x5d6a6e*/
      return Menu::StartFadeOut(ParentMenu, a4, a5, a6, a7, a1, v11); /*0x5d6a77*/
    }
  }
  return result; /*0x5d6a76*/
}
