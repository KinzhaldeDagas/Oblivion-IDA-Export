double __usercall sub_5D5720@<st0>(double result@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v2; // esi
  _DWORD *ParentMenu; // edi
  double Float; // st6

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x408); /*0x5d5726*/
  v2 = OpenMenuTile; /*0x5d572b*/
  if ( OpenMenuTile ) /*0x5d5732*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5d573c*/
    if ( ParentMenu ) /*0x5d5740*/
    {
      Float = Tile_GetFloat(v2, 0xFB1); /*0x5d5749*/
      if ( result == *(float *)&dword_A46C30 ) /*0x5d5759*/
        PlayerCharacter_SetCurrentMagicItem(reference, 0); /*0x5d5763*/
      result = fConstant_2; /*0x5d5768*/
      Tile_SetFloat(v2, (_DWORD *)0x1772, fConstant_2); /*0x5d5779*/
      Menu::StartFadeOut(ParentMenu, Float); /*0x5d5782*/
    }
  }
  return result; /*0x5d5781*/
}
