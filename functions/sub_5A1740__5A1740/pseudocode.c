double __usercall sub_5A1740@<st0>(double a1@<st2>, double a2@<st7>, double a3@<st6>, double a4@<st5>, double a5@<st4>)
{
  Tile *OpenMenuTile; // eax
  Tile *v7; // esi
  void *ParentMenu; // eax
  _DWORD *v9; // edi
  double v10; // st7
  double result; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x412); /*0x5a1746*/
  v7 = OpenMenuTile; /*0x5a174b*/
  if ( OpenMenuTile ) /*0x5a1752*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5a1765*/
    v9 = OblivionDynamicCast( /*0x5a1770*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &EnchantmentMenu `RTTI Type Descriptor',
           0);
    if ( v9 ) /*0x5a1777*/
    {
      sub_57DE50(0x24); /*0x5a177b*/
      v10 = fConstant_2; /*0x5a1780*/
      Tile_SetFloat(v7, 0x1772u, fConstant_2); /*0x5a1790*/
      return Menu::StartFadeOut(v9, a2, a3, a4, a5, a1, v10); /*0x5a1799*/
    }
  }
  return result; /*0x5a1798*/
}
