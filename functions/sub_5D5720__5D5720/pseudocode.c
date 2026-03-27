double __usercall sub_5D5720@<st0>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double result@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v5; // esi
  _DWORD *ParentMenu; // edi
  double Float; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x408);
  v5 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      Float = Tile_GetFloat(v5, 0xFB1);
      if ( Float == *(float *)&dword_A46C30 )
        PlayerCharacter_SetCurrentMagicItem((int)TESDataHandler_g_PlayerRef, a1, a2, a3, Float, 0);
      result = fConstant_2;
      Tile_SetFloat(v5, (_DWORD *)0x1772, fConstant_2);
      sub_584740(ParentMenu, a2, a3);
    }
  }
  return result;
}
