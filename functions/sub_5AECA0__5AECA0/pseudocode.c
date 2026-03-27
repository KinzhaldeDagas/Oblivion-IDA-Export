BSStringT *__usercall sub_5AECA0@<eax>(
        double a1@<st7>,
        double a2@<st6>,
        double a3@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double Float@<st0>)
{
  UInt8 v9; // bl
  _DWORD *OpenMenuTile; // eax
  BSStringT *result; // eax
  unsigned int *v12; // ebp
  int v13; // esi
  _DWORD *v14; // edi
  _DWORD *v15; // ebx
  CHAR *v16; // eax
  double v17; // st7

  v9 = sub_578D70();
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40E);
  result = (BSStringT *)Tile_GetParentMenu(OpenMenuTile);
  v12 = (unsigned int *)result;
  if ( result )
  {
    if ( v9 == 2 )
    {
      v13 = *((_DWORD *)result[9].m_data + 0xE);
      v14 = 0;
      v15 = 0;
      if ( v13 )
      {
        do
        {
          if ( v14 == (_DWORD *)v12[0x16] )
            break;
          if ( v14 )
          {
            Float = Tile_GetFloat(v14, 0xFA1);
            if ( Float != fConstant_1 )
            {
              Float = Tile_GetFloat(v14, 0xFF0);
              if ( Float > *(float *)&SrcStr )
                v15 = v14;
            }
          }
          v14 = *(_DWORD **)(v13 + 8);
          v13 = *(_DWORD *)(v13 + 4);
        }
        while ( v13 );
        if ( v14 )
        {
          if ( !v13 )
            goto LABEL_17;
          while ( 1 )
          {
            v15 = *(_DWORD **)(v13 + 8);
            v13 = *(_DWORD *)(v13 + 4);
            if ( !v13 )
              break;
            Float = Tile_GetFloat(v15, 0xFA1);
            if ( Float != fConstant_1 )
            {
              Float = Tile_GetFloat(v14, 0xFF0);
              if ( Float > *(float *)&SrcStr )
                break;
            }
          }
          if ( v15 )
          {
            Float = Tile_GetFloat(v15, 0xFA1);
            if ( Float != fConstant_1 )
            {
LABEL_17:
              if ( v15 )
              {
                v16 = sub_588C10(v15, 0xFB1);
                BSStringT_Set((BSStringT *)(v12 + 0x17), v16, 0);
              }
            }
          }
        }
      }
      DeleteSavegame(SaveLoad_CurrentSavegame, Float, a5, a6, a7, a4, a1, a2, a3, (const char *)v12[0x13], 0);
      v17 = flt_A30634;
      GameUI_QueueMessage((const char *)dword_B387E0, 0, 1u, flt_A30634);
      result = sub_5AE980((int)v12, a1, a2, a3, a4, a5, a6, a7, v17);
    }
    *((_BYTE *)v12 + 0x64) = 0;
  }
  return result;
}
