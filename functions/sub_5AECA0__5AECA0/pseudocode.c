void __usercall sub_5AECA0(
        double a1@<st7>,
        double a2@<st6>,
        double a3@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double Float@<st0>)
{
  unsigned __int8 v8; // bl
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v11; // ebp
  int v12; // esi
  _DWORD *v13; // edi
  _DWORD *v14; // ebx
  CHAR *v15; // eax
  double v16; // st7

  v8 = InterfaceManager_ConsumeMessageButton(); /*0x5aecac*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40E); /*0x5aecae*/
  ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5aecb8*/
  v11 = ParentMenu; /*0x5aecbd*/
  if ( ParentMenu ) /*0x5aecc1*/
  {
    if ( v8 == 2 ) /*0x5aecca*/
    {
      v12 = *(_DWORD *)(*(_DWORD *)(ParentMenu + 0x48) + 0x38); /*0x5aecd4*/
      v13 = 0; /*0x5aecd8*/
      v14 = 0; /*0x5aecda*/
      if ( v12 ) /*0x5aecde*/
      {
        do /*0x5aed2c*/
        {
          if ( v13 == *(_DWORD **)(v11 + 0x58) ) /*0x5aece7*/
            break; /*0x5aece7*/
          if ( v13 ) /*0x5aeceb*/
          {
            Float = Tile_GetFloat(v13, 0xFA1); /*0x5aecf4*/
            if ( Float != fConstant_1 ) /*0x5aed04*/
            {
              Float = Tile_GetFloat(v13, 0xFF0); /*0x5aed0d*/
              if ( Float > *(float *)&SrcStr ) /*0x5aed1d*/
                v14 = v13; /*0x5aed1f*/
            }
          }
          v13 = *(_DWORD **)(v12 + 8); /*0x5aed21*/
          v12 = *(_DWORD *)(v12 + 4); /*0x5aed27*/
        }
        while ( v12 ); /*0x5aed2c*/
        if ( v13 ) /*0x5aed30*/
        {
          if ( !v12 ) /*0x5aed34*/
            goto LABEL_17; /*0x5aed34*/
          while ( 1 ) /*0x5aed73*/
          {
            v14 = *(_DWORD **)(v12 + 8); /*0x5aed36*/
            v12 = *(_DWORD *)(v12 + 4); /*0x5aed3c*/
            if ( !v12 ) /*0x5aed41*/
              break; /*0x5aed41*/
            Float = Tile_GetFloat(v14, 0xFA1); /*0x5aed4a*/
            if ( Float != fConstant_1 ) /*0x5aed5a*/
            {
              Float = Tile_GetFloat(v13, 0xFF0); /*0x5aed63*/
              if ( Float > *(float *)&SrcStr ) /*0x5aed73*/
                break; /*0x5aed73*/
            }
          }
          if ( v14 ) /*0x5aed77*/
          {
            Float = Tile_GetFloat(v14, 0xFA1); /*0x5aed80*/
            if ( Float != fConstant_1 ) /*0x5aed90*/
            {
LABEL_17:
              if ( v14 ) /*0x5aed94*/
              {
                v15 = sub_588C10(v14, 0xFB1); /*0x5aed9d*/
                BSStringT_Set((BSStringT *)(v11 + 0x5C), v15, 0); /*0x5aeda8*/
              }
            }
          }
        }
      }
      DeleteSavegame(g_TESSaveLoadGame, Float, a5, a6, a7, a4, a1, a2, a3, *(const char **)(v11 + 0x4C), 0); /*0x5aedb9*/
      v16 = kTerrainLODQuadRayDirectionZ; /*0x5aedbe*/
      GameUI_QueueMessage(stru_B387E0.value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x5aedd3*/
      LoadgameMenu_RebuildRows(v11, a1, a2, a3, a4, a5, a6, a7, v16); /*0x5aeddd*/
    }
    *(_BYTE *)(v11 + 0x64) = 0; /*0x5aede4*/
  }
}
