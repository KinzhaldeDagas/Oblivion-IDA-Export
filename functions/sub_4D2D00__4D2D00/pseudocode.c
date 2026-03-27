signed int __cdecl sub_4D2D00(float *a1)
{
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v2; // ebx
  int v3; // esi
  int v4; // edi
  BSExtraDataVtbl *v5; // ebp
  BSExtraDataVtbl *v6; // eax
  bool v7; // al
  BSExtraDataVtbl *v8; // ebp
  BSExtraDataVtbl *v9; // eax
  bool v10; // al
  BSExtraDataVtbl *v11; // eax
  bool v12; // zf
  TESWorldSpace *v13; // edi
  signed int v14; // ebp
  signed int v15; // esi
  ExtraDataList *CellAtCellCoord; // eax
  ExtraDataList *v17; // ebx
  ExtraDataList *v18; // eax
  ExtraDataList *v19; // esi
  BSExtraDataVtbl *v20; // eax
  bool v21; // zf
  BSExtraDataVtbl *v22; // edi
  ExtraDataList *v23; // esi
  char v24; // bl
  ExtraDataList *v25; // eax
  bool v26; // zf
  ExtraDataList *v27; // eax
  ExtraDataList *v28; // esi
  BSExtraDataVtbl *v29; // eax
  float v30; // eax
  char v32; // [esp+6h] [ebp-26h]
  char v33; // [esp+7h] [ebp-25h]
  char v34; // [esp+7h] [ebp-25h]
  int v35; // [esp+8h] [ebp-24h]
  signed int v36; // [esp+Ch] [ebp-20h] BYREF
  signed int v37; // [esp+10h] [ebp-1Ch] BYREF
  BSExtraDataVtbl *v38; // [esp+14h] [ebp-18h]
  BSExtraDataVtbl *v39; // [esp+18h] [ebp-14h]
  int v40; // [esp+1Ch] [ebp-10h]
  signed int v41; // [esp+20h] [ebp-Ch]
  _DWORD *p_vtbl; // [esp+24h] [ebp-8h]
  float v43; // [esp+28h] [ebp-4h]

  v35 = 0;
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  v2 = (ExtraDataList *)ParentCell;
  if ( !ParentCell )
    return v35;
  if ( (ParentCell->members.flags0 & 1) != 0 )
  {
    v43 = *a1;
    v40 = (int)v43;
    v43 = a1[1];
    v3 = (v40 - 0x800) >> 0xC;
    v40 = (int)v43;
    v4 = (v40 - 0x800) >> 0xC;
    v37 = 0;
    v36 = 0;
    sub_4123C0(a1, 1, &v37, &v36);
    v5 = sub_4CCEE0(v2, v3, v4, 0);
    v38 = v5;
    if ( v5 )
      v35 = sub_412220(v5, v37, v36);
    v39 = 0;
    v33 = 0;
    if ( v36 == 0xF )
    {
      v33 = 1;
      v6 = sub_4CCEE0(v2, v3, v4 + 1, 0);
      v39 = v6;
      if ( !v6 )
        goto LABEL_12;
      v7 = sub_412220(v6, v37, 0);
    }
    else
    {
      if ( !v5 )
        goto LABEL_12;
      v7 = sub_412220(v5, v37, v36 + 1);
    }
    if ( v7 )
      ++v35;
LABEL_12:
    v8 = 0;
    v32 = 0;
    if ( v37 == 0xF )
    {
      v32 = 1;
      v9 = sub_4CCEE0(v2, v3 + 1, v4, 0);
      v8 = v9;
      if ( !v9 )
        goto LABEL_19;
      v10 = sub_412220(v9, 0, v36);
    }
    else
    {
      if ( !v38 )
        goto LABEL_19;
      v10 = sub_412220(v38, v37 + 1, v36);
    }
    if ( v10 )
      ++v35;
LABEL_19:
    if ( v33 )
    {
      if ( v32 )
      {
        v11 = sub_4CCEE0(v2, v3 + 1, v4 + 1, 0);
        if ( !v11 )
          return v35;
        v12 = !sub_412220(v11, 0, 0);
      }
      else
      {
        if ( !v39 )
          return v35;
        v12 = !sub_412220(v39, v37 + 1, 0);
      }
    }
    else if ( v32 )
    {
      if ( !v8 )
        return v35;
      v12 = !sub_412220(v8, 0, v36 + 1);
    }
    else
    {
      if ( !v38 )
        return v35;
      v12 = !sub_412220(v38, v37 + 1, v36 + 1);
    }
    goto LABEL_82;
  }
  p_vtbl = &ParentCell->members.worldSpace->vtbl;
  v13 = (TESWorldSpace *)p_vtbl;
  if ( !p_vtbl )
    return v35;
  v43 = *a1;
  v40 = (int)v43;
  v43 = a1[1];
  v14 = v40 >> 0xC;
  v40 = (int)v43;
  v15 = v40 >> 0xC;
  v41 = v40 >> 0xC;
  v36 = 0;
  v37 = 0;
  sub_4123C0(a1, 0, &v36, &v37);
  CellAtCellCoord = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord(v13, v14, v15);
  v17 = CellAtCellCoord;
  v40 = (int)CellAtCellCoord;
  if ( CellAtCellCoord )
  {
    v38 = sub_420B50(CellAtCellCoord + 2);
    if ( v38 && sub_412220(v38, v36, v37) || (v17[1].members.m_presenceBitfield[9] & 1) != 0 )
      v35 = 1;
  }
  else
  {
    v38 = 0;
  }
  v39 = 0;
  v43 = 0.0;
  v34 = 0;
  if ( v37 == 0xF )
  {
    v34 = 1;
    *(float *)&v18 = COERCE_FLOAT(TESWorldSpace::GetCellAtCellCoord(v13, v14, v15 + 1));
    v19 = v18;
    v43 = *(float *)&v18;
    if ( *(float *)&v18 == 0.0 )
    {
      v39 = 0;
LABEL_40:
      if ( !v19 )
        goto LABEL_50;
      v21 = (v19[1].members.m_presenceBitfield[9] & 1) == 0;
      goto LABEL_48;
    }
    v20 = sub_420B50(v18 + 2);
    v39 = v20;
    if ( !v20 || !sub_412220(v20, v36, 0) )
      goto LABEL_40;
  }
  else if ( !v38 || !sub_412220(v38, v36, v37 + 1) )
  {
    if ( !v17 )
      goto LABEL_50;
    v21 = (v17[1].members.m_presenceBitfield[9] & 1) == 0;
LABEL_48:
    if ( v21 )
      goto LABEL_50;
  }
  ++v35;
LABEL_50:
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( v36 == 0xF )
  {
    v24 = 1;
    v25 = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord((TESWorldSpace *)p_vtbl, v14 + 1, v41);
    v23 = v25;
    if ( !v25 )
    {
      v22 = 0;
LABEL_54:
      if ( !v23 )
        goto LABEL_63;
      v26 = (v23[1].members.m_presenceBitfield[9] & 1) == 0;
      goto LABEL_61;
    }
    v22 = sub_420B50(v25 + 2);
    if ( !v22 || !sub_412220(v22, 0, v37) )
      goto LABEL_54;
  }
  else if ( !v38 || !sub_412220(v38, v36 + 1, v37) )
  {
    if ( !v40 )
      goto LABEL_63;
    v26 = (*(_BYTE *)(v40 + 0x25) & 1) == 0;
LABEL_61:
    if ( v26 )
      goto LABEL_63;
  }
  ++v35;
LABEL_63:
  if ( v34 )
  {
    if ( v24 )
    {
      v27 = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord((TESWorldSpace *)p_vtbl, v14 + 1, v41 + 1);
      v28 = v27;
      if ( !v27 )
        return v35;
      v29 = sub_420B50(v27 + 2);
      if ( v29 && sub_412220(v29, 0, 0) )
        goto LABEL_83;
      v12 = (v28[1].members.m_presenceBitfield[9] & 1) == 0;
      goto LABEL_82;
    }
    if ( v39 && sub_412220(v39, v36 + 1, 0) )
      goto LABEL_83;
    v30 = v43;
    goto LABEL_80;
  }
  if ( !v24 )
  {
    if ( v38 && sub_412220(v38, v36 + 1, v37 + 1) )
      goto LABEL_83;
    v30 = *(float *)&v40;
LABEL_80:
    if ( v30 == 0.0 )
      return v35;
    v12 = (*(_BYTE *)(LODWORD(v30) + 0x25) & 1) == 0;
    goto LABEL_82;
  }
  if ( v22 && sub_412220(v22, 0, v37 + 1) )
    goto LABEL_83;
  if ( !v23 )
    return v35;
  v12 = (v23[1].members.m_presenceBitfield[9] & 1) == 0;
LABEL_82:
  if ( !v12 )
LABEL_83:
    ++v35;
  return v35;
}
