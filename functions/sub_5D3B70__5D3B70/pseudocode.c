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
  BSStringT *v10; // ebx
  int v11; // esi
  _DWORD *v12; // edi
  _DWORD *v13; // ebp
  CHAR *v14; // eax
  char *m_data; // ecx
  int v16; // esi
  double Float; // st7
  int v18; // eax
  int v19; // ecx
  double v20; // st7
  float v21; // [esp+14h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40F);
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  v10 = (BSStringT *)OblivionDynamicCast(
                       ParentMenu,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                       &SaveMenu `RTTI Type Descriptor',
                       0);
  if ( sub_578D70() == 2 )
  {
    v11 = *((_DWORD *)v10[9].m_data + 0xE);
    v12 = 0;
    v13 = 0;
    if ( v11 )
    {
      do
      {
        if ( v12 == (_DWORD *)v10[0xB].m_data )
          break;
        if ( v12 )
        {
          if ( Tile_GetFloat(v12, 0xFA1) != fConstant_1 && Tile_GetFloat(v12, 0xFF0) > *(float *)&SrcStr )
            v13 = v12;
        }
        v12 = *(_DWORD **)(v11 + 8);
        v11 = *(_DWORD *)(v11 + 4);
      }
      while ( v11 );
      if ( v12 )
      {
        if ( !v11 )
          goto LABEL_16;
        do
        {
          v13 = *(_DWORD **)(v11 + 8);
          v11 = *(_DWORD *)(v11 + 4);
        }
        while ( v11 && (Tile_GetFloat(v13, 0xFA1) == fConstant_1 || Tile_GetFloat(v12, 0xFF0) <= *(float *)&SrcStr) );
        if ( v13 && Tile_GetFloat(v13, 0xFA1) != fConstant_1 )
        {
LABEL_16:
          if ( v13 )
          {
            v14 = sub_588C10(v13, 0xFB1);
            BSStringT_Set(v10 + 0xA, v14, 0);
          }
        }
      }
    }
    m_data = v10[0xB].m_data;
    v16 = *(_DWORD *)&v10[9].m_dataLen;
    if ( m_data )
      Float = Tile_GetFloat(m_data, 0xFAE);
    else
      Float = flt_A30634;
    v21 = Float;
    v18 = Double_To_SInt32(v21);
    v19 = 1;
    if ( v16 )
    {
      while ( *(_DWORD *)v16 )
      {
        if ( v18 == v19 )
        {
          DeleteSavegame(SaveLoad_CurrentSavegame, v21, a5, a6, a7, a4, a1, a2, a3, *(const char **)v16, 0);
          break;
        }
        v16 = *(_DWORD *)(v16 + 4);
        ++v19;
        if ( !v16 )
          break;
      }
    }
    v20 = flt_A30634;
    GameUI_QueueMessage((const char *)dword_B387E0, 0, 1u, flt_A30634);
    sub_5D38C0(v10, a1, a2, a3, a4, a5, a6, a7, v20, 0);
  }
  LOBYTE(v10[0xB].m_dataLen) = 0;
}
