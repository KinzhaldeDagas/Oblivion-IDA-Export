TESForm *__thiscall sub_65E5E0(TESObjectREFR *this, float a2)
{
  TESObjectCELL *ParentCell; // eax
  TESForm *CellFromCoords; // esi
  int v5; // ebx
  signed int v6; // edi
  signed int v7; // ebp
  double v8; // st7
  double v9; // st6
  double v10; // st7
  bool v11; // c0
  bool v12; // c3
  double v13; // st7
  TESForm *v14; // eax
  TESForm **v15; // eax
  char v17; // [esp+7h] [ebp-21h]
  float v18; // [esp+8h] [ebp-20h]
  float v19; // [esp+8h] [ebp-20h]
  int v20; // [esp+8h] [ebp-20h]
  float v21; // [esp+Ch] [ebp-1Ch]
  float v22; // [esp+10h] [ebp-18h]
  float v23; // [esp+14h] [ebp-14h]
  float v24; // [esp+18h] [ebp-10h]
  float v25; // [esp+1Ch] [ebp-Ch]
  float v26; // [esp+20h] [ebp-8h]

  v17 = 0;
  if ( flt_A2FF44 < (double)a2 )
  {
    a2 = flt_A2FF44;
    v17 = 1;
  }
  ParentCell = TESObjectREFR_GetParentCell(this);
  CellFromCoords = (TESForm *)ParentCell;
  v5 = 0;
  if ( ParentCell
    && (TESObjectCELL_IsInterior(ParentCell)
     || (CellFromCoords[1].member.refID & 2) != 0
     || !TES::GetCurrentWorldspace(TES)) )
  {
    goto LABEL_28;
  }
  v25 = this->member.pos[0];
  v26 = this->member.pos[1];
  v6 = (int)v25 >> 0xC;
  v7 = (int)v26 >> 0xC;
  v18 = (float)(v6 << 0xC);
  v8 = v18;
  v21 = v18;
  v19 = (float)(v7 << 0xC);
  v9 = v19;
  v20 = 0;
  v23 = v8 + dbl_A37650;
  v24 = dbl_A37650 + v9;
  if ( v21 >= v25 - a2 )
  {
    v20 = 0xFFFFFFFF;
LABEL_11:
    v13 = a2;
    CellFromCoords = TES_GetCellFromCoords(TES, v6 + v20, v7);
    goto LABEL_12;
  }
  v10 = v25 + a2;
  v11 = v23 < v10;
  v12 = v23 == v10;
  v13 = a2;
  if ( v11 || v12 )
  {
    v20 = 1;
    goto LABEL_11;
  }
LABEL_12:
  if ( !CellFromCoords || (CellFromCoords[1].member.refID & 2) == 0 )
  {
    v22 = v9;
    if ( v22 < v26 - v13 )
    {
      if ( v24 > v13 + v26 )
      {
LABEL_19:
        if ( !CellFromCoords || (CellFromCoords[1].member.refID & 2) == 0 )
        {
          if ( v20 )
          {
            if ( v5 )
            {
              v14 = TES_GetCellFromCoords(TES, v6 + v20, v7 + v5);
              CellFromCoords = v14;
              if ( !v14 || (v14[1].member.refID & 2) == 0 )
              {
                if ( v17 )
                {
                  v15 = (TESForm **)sub_43F900(TES);
                  if ( v15 )
                    CellFromCoords = *v15;
                }
              }
            }
          }
        }
        goto LABEL_28;
      }
      v5 = 1;
    }
    else
    {
      v5 = 0xFFFFFFFF;
    }
    CellFromCoords = TES_GetCellFromCoords(TES, v6, v5 + v7);
    goto LABEL_19;
  }
LABEL_28:
  if ( !CellFromCoords || (CellFromCoords[1].member.refID & 2) != 0 )
    return CellFromCoords;
  else
    return 0;
}
