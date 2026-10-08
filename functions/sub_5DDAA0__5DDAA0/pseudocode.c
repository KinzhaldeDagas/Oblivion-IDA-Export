void __userpurge sub_5DDAA0(
        double a1@<st2>,
        double a2@<st1>,
        double started@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        int a8,
        int a9)
{
  Tile *OpenMenuTile; // eax
  char *v11; // ecx
  Tile *v12; // esi
  _DWORD *ParentMenu; // edi
  double v14; // st7

  sub_497C10(a8, a9); /*0x5ddaab*/
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FB); /*0x5ddab5*/
  v12 = OpenMenuTile; /*0x5ddaba*/
  if ( OpenMenuTile ) /*0x5ddac1*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5ddacb*/
    if ( ParentMenu ) /*0x5ddacf*/
    {
      v14 = fConstant_2; /*0x5ddad1*/
      Tile_SetFloat(v12, 0x1772u, fConstant_2); /*0x5ddae2*/
      started = Menu::StartFadeOut(ParentMenu, a4, a5, a6, a7, a1, v14); /*0x5ddae9*/
    }
  }
  ShowUIMessageBox(v11, a1, a2, started, (char *)stru_B38CE0.value, 0, 1, (char *)MEMORY[0xB38CF0].value, 0); /*0x5ddb02*/
  sub_5DDCA0(); /*0x5ddb0a*/
}
