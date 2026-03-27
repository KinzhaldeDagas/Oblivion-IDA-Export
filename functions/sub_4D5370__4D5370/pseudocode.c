void sub_4D5370()
{
  double v0; // st7
  PlayerCharacter *v1; // eax
  float v2; // edx
  float v3; // eax
  TESObjectREFR *v4; // ecx
  ExtraDataList *ParentCell; // eax
  TESWorldSpace *vtbl; // eax
  signed int v7; // esi
  signed int v8; // edi
  double v9; // st7
  double v10; // st6
  int *SafeFloatPointer; // eax
  unsigned int v12; // ebp
  int *v13; // eax
  int *v14; // eax
  int *v15; // eax
  int v16; // ebx
  int v17; // eax
  int i; // esi
  ExtraDataList *v19; // ecx
  float v20; // [esp+0h] [ebp-34h]
  float v21; // [esp+0h] [ebp-34h]
  int v22; // [esp+0h] [ebp-34h]
  TESWorldSpace *v23; // [esp+4h] [ebp-30h]
  float v24; // [esp+8h] [ebp-2Ch]
  float v25; // [esp+Ch] [ebp-28h]
  float v26; // [esp+10h] [ebp-24h]
  float v27; // [esp+14h] [ebp-20h]
  float v28; // [esp+18h] [ebp-1Ch] BYREF
  float v29; // [esp+1Ch] [ebp-18h]
  float v30; // [esp+20h] [ebp-14h]
  ExtraDataList *v31; // [esp+24h] [ebp-10h]
  int CellAtCellCoord; // [esp+28h] [ebp-Ch]
  int v33; // [esp+2Ch] [ebp-8h]
  int v34; // [esp+30h] [ebp-4h]

  if ( (dword_B35E20 & 1) == 0 )
  {
    v0 = flt_A32048;
    dword_B35E20 |= 1u;
    flt_B35E14 = v0;
    flt_B35E18 = v0;
    flt_B35E1C = v0;
  }
  v1 = TESDataHandler_g_PlayerRef;
  if ( TESDataHandler_g_PlayerRef )
  {
    v28 = v1->super.super.super.super.pos[0];
    v29 = v1->super.super.super.super.pos[1];
    v30 = v1->super.super.super.super.pos[2];
    sub_4122F0(&v28);
    if ( sub_8AA390(&v28, &flt_B35E14) )
    {
      v2 = v28;
      v3 = v29;
      flt_B35E1C = v30;
      v4 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      flt_B35E14 = v2;
      flt_B35E18 = v3;
      ParentCell = (ExtraDataList *)TESObjectREFR_GetParentCell(v4);
      if ( ParentCell )
      {
        if ( (ParentCell[1].members.m_presenceBitfield[8] & 1) != 0 )
        {
          sub_4D2720(ParentCell, &v28);
        }
        else
        {
          v31 = ParentCell;
          vtbl = (TESWorldSpace *)ParentCell[4].vtbl;
          CellAtCellCoord = 0;
          v33 = 0;
          v34 = 0;
          v23 = vtbl;
          if ( vtbl )
          {
            v7 = (int)v28 >> 0xC;
            v8 = (int)v29 >> 0xC;
            v20 = (float)(v7 << 0xC);
            v9 = v20;
            v24 = v20;
            v21 = (float)(v8 << 0xC);
            v10 = v21;
            v22 = 0;
            v26 = v9 + dbl_A37650;
            v27 = dbl_A37650 + v10;
            SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)fSeenDataUpdateRadius);
            if ( v24 < v28 - *(float *)SafeFloatPointer )
            {
              v13 = GameSetting_GetSafeFloatPointer((int *)fSeenDataUpdateRadius);
              v12 = v26 <= *(float *)v13 + v28;
            }
            else
            {
              v12 = 0xFFFFFFFF;
            }
            v14 = GameSetting_GetSafeFloatPointer((int *)fSeenDataUpdateRadius);
            v25 = v10;
            if ( v25 < v29 - *(float *)v14 )
            {
              v15 = GameSetting_GetSafeFloatPointer((int *)fSeenDataUpdateRadius);
              if ( v27 <= *(float *)v15 + v29 )
                v22 = 1;
            }
            else
            {
              v22 = 0xFFFFFFFF;
            }
            v16 = 1;
            if ( v12 )
            {
              CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v23, v7 + v12, v8);
              v16 = 2;
            }
            v17 = v22;
            if ( v22 )
            {
              *(&v31 + v16) = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord(v23, v7, v8 + v22);
              v17 = v22;
              ++v16;
            }
            if ( v12 )
            {
              if ( v17 )
                *(&v31 + v16) = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord(v23, v7 + v12, v8 + v17);
            }
          }
          for ( i = 0; i < 4; ++i )
          {
            v19 = *(&v31 + i);
            if ( !v19 )
              break;
            sub_4D2720(v19, &v28);
          }
        }
      }
    }
  }
}
