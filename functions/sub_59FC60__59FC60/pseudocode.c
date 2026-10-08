double __usercall sub_59FC60@<st0>(
        double a1@<st2>,
        double a2@<st1>,
        double result@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>)
{
  Tile *OpenMenuTile; // eax
  Tile *v9; // edi
  int ParentMenu; // eax
  _DWORD *v11; // esi
  int v12; // ecx
  int v13; // ecx
  double v14; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x413); /*0x59fc66*/
  v9 = OpenMenuTile; /*0x59fc6b*/
  if ( OpenMenuTile ) /*0x59fc72*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x59fc77*/
    v11 = (_DWORD *)ParentMenu; /*0x59fc7c*/
    if ( ParentMenu ) /*0x59fc80*/
    {
      v12 = *(_DWORD *)(ParentMenu + 0x78); /*0x59fc82*/
      if ( v12 ) /*0x59fc87*/
      {
        sub_5D8180(v12, a1, a2, result); /*0x59fc89*/
        sub_5D8370(v11[0x1E], a1, a2, result); /*0x59fc91*/
      }
      else
      {
        v13 = *(_DWORD *)(ParentMenu + 0x7C); /*0x59fc98*/
        if ( v13 ) /*0x59fc9d*/
        {
          sub_5A2160(v13, a1, a2); /*0x59fc9f*/
          sub_5A2520(v11[0x1F], a1, a2, result); /*0x59fca7*/
        }
      }
      v14 = fConstant_2; /*0x59fcac*/
      Tile_SetFloat(v9, 0x1772u, fConstant_2); /*0x59fcbd*/
      return Menu::StartFadeOut(v11, a4, a5, a6, a7, a1, v14); /*0x59fcc6*/
    }
  }
  return result; /*0x59fcc5*/
}
