// [Controller decode 2026-07-09] Closes open Controls menu.
double __usercall ControlsMenu_CloseOpenMenu@<st0>(
        double a1@<st2>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>)
{
  Tile *OpenMenuTile; // eax
  Tile *v7; // esi
  void *ParentMenu; // eax
  _DWORD *v9; // edi
  double v10; // st7
  double result; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FD); /*0x59b9e6*/
  v7 = OpenMenuTile; /*0x59b9eb*/
  if ( OpenMenuTile ) /*0x59b9f2*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x59ba05*/
    v9 = OblivionDynamicCast( /*0x59ba10*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &ControlsMenu `RTTI Type Descriptor',
           0);
    if ( v9 ) /*0x59ba17*/
    {
      v10 = fConstant_2; /*0x59ba19*/
      Tile_SetFloat(v7, 0x1772u, fConstant_2); /*0x59ba2a*/
      return Menu::StartFadeOut(v9, a2, a3, a4, a5, a1, v10); /*0x59ba33*/
    }
  }
  return result; /*0x59ba32*/
}
