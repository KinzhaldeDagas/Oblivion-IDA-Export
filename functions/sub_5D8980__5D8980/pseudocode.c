double __usercall sub_5D8980@<st0>(
        double a1@<st2>,
        double a2@<st1>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double result@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v8; // esi
  int ParentMenu; // edi
  double v10; // st7
  Tile *v11; // eax
  Tile *v12; // esi
  int v13; // ebx
  double started; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x40D); /*0x5d8986*/
  v8 = OpenMenuTile; /*0x5d898b*/
  if ( OpenMenuTile ) /*0x5d8992*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5d89a0*/
    if ( ParentMenu ) /*0x5d89a4*/
    {
      v10 = fConstant_2; /*0x5d89aa*/
      Tile_SetFloat(v8, 0x1772u, fConstant_2); /*0x5d89bb*/
      sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x5d89c8*/
      v11 = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x5d89d2*/
      v12 = v11; /*0x5d89d7*/
      if ( v11 ) /*0x5d89de*/
      {
        v13 = Tile_GetParentMenu(v11); /*0x5d89ec*/
        sub_58FBA0((int)v12, a1, a2, v10, 0); /*0x5d89ee*/
        v10 = fConstant_2; /*0x5d89f3*/
        Tile_SetFloat(v12, 0xFA1u, fConstant_2); /*0x5d8a04*/
        *(_BYTE *)(v13 + 0x96) = 1; /*0x5d8a09*/
        if ( *(_BYTE *)(ParentMenu + 0x5C) ) /*0x5d8a10*/
        {
          Actor::StopDialoguePlayback(*(Actor **)(ParentMenu + 0x50)); /*0x5d8a19*/
          sub_59E030((void **)v13); /*0x5d8a20*/
        }
      }
      started = Menu::StartFadeOut((_DWORD *)ParentMenu, a3, a4, a5, a6, a1, v10); /*0x5d8a28*/
      return sub_5B3E90(a1, a3, a4, a5, a6, started); /*0x5d8a2f*/
    }
  }
  return result; /*0x5d8a2e*/
}
