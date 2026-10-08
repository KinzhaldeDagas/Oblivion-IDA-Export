void __usercall sub_5D3B70(
        double a1@<st7>,
        double a2@<st6>,
        double a3@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  BSStringT *v9; // ebx
  int v10; // esi
  _DWORD *v11; // edi
  _DWORD *v12; // ebp
  CHAR *v13; // eax
  char *m_data; // ecx
  int v15; // esi
  double Float; // st7
  int v17; // eax
  int v18; // ecx
  double v19; // st7
  float v20; // [esp+14h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40F); /*0x5d3b77*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5d3b81*/
  v9 = (BSStringT *)OblivionDynamicCast( /*0x5d3b9d*/
                      ParentMenu,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                      &SaveMenu `RTTI Type Descriptor',
                      0);
  if ( InterfaceManager_ConsumeMessageButton() == 2 ) /*0x5d3ba6*/
  {
    v10 = *((_DWORD *)v9[9].m_data + 0xE); /*0x5d3bb1*/
    v11 = 0; /*0x5d3bb5*/
    v12 = 0; /*0x5d3bb7*/
    if ( v10 ) /*0x5d3bbb*/
    {
      do /*0x5d3c09*/
      {
        if ( v11 == (_DWORD *)v9[0xB].m_data ) /*0x5d3bc4*/
          break; /*0x5d3bc4*/
        if ( v11 ) /*0x5d3bc8*/
        {
          if ( Tile_GetFloat(v11, 0xFA1) != fConstant_1 && Tile_GetFloat(v11, 0xFF0) > *(float *)&SrcStr ) /*0x5d3bfa*/
            v12 = v11; /*0x5d3bfc*/
        }
        v11 = *(_DWORD **)(v10 + 8); /*0x5d3bfe*/
        v10 = *(_DWORD *)(v10 + 4); /*0x5d3c04*/
      }
      while ( v10 ); /*0x5d3c09*/
      if ( v11 ) /*0x5d3c0d*/
      {
        if ( !v10 ) /*0x5d3c15*/
          goto LABEL_16; /*0x5d3c15*/
        do /*0x5d3c54*/
        {
          v12 = *(_DWORD **)(v10 + 8); /*0x5d3c17*/
          v10 = *(_DWORD *)(v10 + 4); /*0x5d3c1d*/
        }
        while ( v10 && (Tile_GetFloat(v12, 0xFA1) == fConstant_1 || Tile_GetFloat(v11, 0xFF0) <= *(float *)&SrcStr) ); /*0x5d3c54*/
        if ( v12 && Tile_GetFloat(v12, 0xFA1) != fConstant_1 ) /*0x5d3c71*/
        {
LABEL_16:
          if ( v12 ) /*0x5d3c75*/
          {
            v13 = sub_588C10(v12, 0xFB1); /*0x5d3c7e*/
            BSStringT_Set(v9 + 0xA, v13, 0); /*0x5d3c89*/
          }
        }
      }
    }
    m_data = v9[0xB].m_data; /*0x5d3c8e*/
    v15 = *(_DWORD *)&v9[9].m_dataLen; /*0x5d3c93*/
    if ( m_data ) /*0x5d3c96*/
      Float = Tile_GetFloat(m_data, 0xFAE); /*0x5d3c9d*/
    else
      Float = kTerrainLODQuadRayDirectionZ; /*0x5d3ca4*/
    v20 = Float; /*0x5d3caa*/
    v17 = Double_To_SInt32(v20); /*0x5d3cb2*/
    v18 = 1; /*0x5d3cb9*/
    if ( v15 ) /*0x5d3cbe*/
    {
      while ( *(_DWORD *)v15 ) /*0x5d3cc3*/
      {
        if ( v17 == v18 ) /*0x5d3cc7*/
        {
          DeleteSavegame(g_TESSaveLoadGame, v20, a5, a6, a7, a4, a1, a2, a3, *(const char **)v15, 0); /*0x5d3ce0*/
          break; /*0x5d3ce0*/
        }
        v15 = *(_DWORD *)(v15 + 4); /*0x5d3cc9*/
        ++v18; /*0x5d3ccc*/
        if ( !v15 ) /*0x5d3cd1*/
          break; /*0x5d3cd1*/
      }
    }
    v19 = kTerrainLODQuadRayDirectionZ; /*0x5d3ce5*/
    GameUI_QueueMessage(stru_B387E0.value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x5d3cfa*/
    sub_5D38C0(v9, a1, a2, a3, a4, a5, a6, a7, v19, 0); /*0x5d3d06*/
  }
  LOBYTE(v9[0xB].m_dataLen) = 0; /*0x5d3d0e*/
}
