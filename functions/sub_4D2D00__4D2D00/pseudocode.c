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

  v35 = 0; /*0x4d2d0a*/
  ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)reference); /*0x4d2d12*/
  v2 = (ExtraDataList *)ParentCell; /*0x4d2d17*/
  if ( !ParentCell ) /*0x4d2d1b*/
    return v35; /*0x4d2d1b*/
  if ( (ParentCell->members.flags0 & 1) != 0 ) /*0x4d2d28*/
  {
    v43 = *a1; /*0x4d2d34*/
    v40 = (int)v43; /*0x4d2d3c*/
    v43 = a1[1]; /*0x4d2d4d*/
    v3 = (v40 - 0x800) >> 0xC; /*0x4d2d51*/
    v40 = (int)v43; /*0x4d2d58*/
    v4 = (v40 - 0x800) >> 0xC; /*0x4d2d75*/
    v37 = 0; /*0x4d2d78*/
    v36 = 0; /*0x4d2d7c*/
    sub_4123C0(a1, 1, &v37, &v36); /*0x4d2d80*/
    v5 = sub_4CCEE0(v2, v3, v4, 0); /*0x4d2d92*/
    v38 = v5; /*0x4d2d96*/
    if ( v5 ) /*0x4d2d9a*/
      v35 = sub_412220(v5, v37, v36); /*0x4d2db1*/
    v39 = 0; /*0x4d2dc0*/
    v33 = 0; /*0x4d2dc8*/
    if ( v36 == 0xF ) /*0x4d2dcd*/
    {
      v33 = 1; /*0x4d2dd8*/
      v6 = sub_4CCEE0(v2, v3, v4 + 1, 0); /*0x4d2ddd*/
      v39 = v6; /*0x4d2de4*/
      if ( !v6 ) /*0x4d2de8*/
        goto LABEL_12; /*0x4d2de8*/
      v7 = sub_412220(v6, v37, 0); /*0x4d2df3*/
    }
    else
    {
      if ( !v5 ) /*0x4d2df7*/
        goto LABEL_12; /*0x4d2df7*/
      v7 = sub_412220(v5, v37, v36 + 1); /*0x4d2e04*/
    }
    if ( v7 ) /*0x4d2e0b*/
      ++v35; /*0x4d2e0d*/
LABEL_12:
    v8 = 0; /*0x4d2e12*/
    v32 = 0; /*0x4d2e1b*/
    if ( v37 == 0xF ) /*0x4d2e20*/
    {
      v32 = 1; /*0x4d2e2a*/
      v9 = sub_4CCEE0(v2, v3 + 1, v4, 0); /*0x4d2e2f*/
      v8 = v9; /*0x4d2e34*/
      if ( !v9 ) /*0x4d2e38*/
        goto LABEL_19; /*0x4d2e38*/
      v10 = sub_412220(v9, 0, v36); /*0x4d2e43*/
    }
    else
    {
      if ( !v38 ) /*0x4d2e49*/
        goto LABEL_19; /*0x4d2e49*/
      v10 = sub_412220(v38, v37 + 1, v36); /*0x4d2e58*/
    }
    if ( v10 ) /*0x4d2e5f*/
      ++v35; /*0x4d2e61*/
LABEL_19:
    if ( v33 ) /*0x4d2e6b*/
    {
      if ( v32 ) /*0x4d2e72*/
      {
        v11 = sub_4CCEE0(v2, v3 + 1, v4 + 1, 0); /*0x4d2e80*/
        if ( !v11 ) /*0x4d2e87*/
          return v35; /*0x4d2e87*/
        v12 = !sub_412220(v11, 0, 0); /*0x4d2e98*/
      }
      else
      {
        if ( !v39 ) /*0x4d2ea4*/
          return v35; /*0x4d2ea4*/
        v12 = !sub_412220(v39, v37 + 1, 0); /*0x4d2ebd*/
      }
    }
    else if ( v32 ) /*0x4d2ec9*/
    {
      if ( !v8 ) /*0x4d2ecd*/
        return v35; /*0x4d2ecd*/
      v12 = !sub_412220(v8, 0, v36 + 1); /*0x4d2ee4*/
    }
    else
    {
      if ( !v38 ) /*0x4d2ef0*/
        return v35; /*0x4d2ef0*/
      v12 = !sub_412220(v38, v37 + 1, v36 + 1); /*0x4d2f0f*/
    }
    goto LABEL_82; /*0x4d2e9a*/
  }
  p_vtbl = &ParentCell->members.worldSpace->vtbl; /*0x4d2f1b*/
  v13 = (TESWorldSpace *)p_vtbl; /*0x4d2f16*/
  if ( !p_vtbl ) /*0x4d2f1f*/
    return v35; /*0x4d2f1f*/
  v43 = *a1; /*0x4d2f2b*/
  v40 = (int)v43; /*0x4d2f33*/
  v43 = a1[1]; /*0x4d2f3e*/
  v14 = v40 >> 0xC; /*0x4d2f42*/
  v40 = (int)v43; /*0x4d2f49*/
  v15 = v40 >> 0xC; /*0x4d2f5e*/
  v41 = v40 >> 0xC; /*0x4d2f62*/
  v36 = 0; /*0x4d2f66*/
  v37 = 0; /*0x4d2f6a*/
  sub_4123C0(a1, 0, &v36, &v37); /*0x4d2f6e*/
  CellAtCellCoord = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord(v13, v14, v15); /*0x4d2f7a*/
  v17 = CellAtCellCoord; /*0x4d2f7f*/
  v40 = (int)CellAtCellCoord; /*0x4d2f83*/
  if ( CellAtCellCoord ) /*0x4d2f87*/
  {
    v38 = ExtraDataList_GetSeenData(CellAtCellCoord + 2); /*0x4d2f97*/
    if ( v38 && sub_412220(v38, v36, v37) || (v17[1].members.m_presenceBitfield[9] & 1) != 0 ) /*0x4d2fb8*/
      v35 = 1; /*0x4d2fba*/
  }
  else
  {
    v38 = 0; /*0x4d3020*/
  }
  v39 = 0; /*0x4d2fcb*/
  v43 = 0.0; /*0x4d2fcf*/
  v34 = 0; /*0x4d2fd3*/
  if ( v37 == 0xF ) /*0x4d2fd7*/
  {
    v34 = 1; /*0x4d2fe0*/
    *(float *)&v18 = COERCE_FLOAT(TESWorldSpace::GetCellAtCellCoord(v13, v14, v15 + 1)); /*0x4d2fe5*/
    v19 = v18; /*0x4d2fea*/
    v43 = *(float *)&v18; /*0x4d2fee*/
    if ( *(float *)&v18 == 0.0 ) /*0x4d2ff2*/
    {
      v39 = 0; /*0x4d302a*/
LABEL_40:
      if ( !v19 ) /*0x4d3018*/
        goto LABEL_50; /*0x4d3018*/
      v21 = (v19[1].members.m_presenceBitfield[9] & 1) == 0; /*0x4d301a*/
      goto LABEL_48; /*0x4d301e*/
    }
    v20 = ExtraDataList_GetSeenData(v18 + 2); /*0x4d2ff7*/
    v39 = v20; /*0x4d2ffe*/
    if ( !v20 || !sub_412220(v20, v36, 0) ) /*0x4d300d*/
      goto LABEL_40; /*0x4d3014*/
  }
  else if ( !v38 || !sub_412220(v38, v36, v37 + 1) ) /*0x4d3047*/
  {
    if ( !v17 ) /*0x4d3052*/
      goto LABEL_50; /*0x4d3052*/
    v21 = (v17[1].members.m_presenceBitfield[9] & 1) == 0; /*0x4d3054*/
LABEL_48:
    if ( v21 ) /*0x4d3058*/
      goto LABEL_50; /*0x4d3058*/
  }
  ++v35; /*0x4d305a*/
LABEL_50:
  v22 = 0; /*0x4d305f*/
  v23 = 0; /*0x4d3065*/
  v24 = 0; /*0x4d3067*/
  if ( v36 == 0xF ) /*0x4d306c*/
  {
    v24 = 1; /*0x4d307b*/
    v25 = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord((TESWorldSpace *)p_vtbl, v14 + 1, v41); /*0x4d307d*/
    v23 = v25; /*0x4d3082*/
    if ( !v25 ) /*0x4d3086*/
    {
      v22 = 0; /*0x4d30b2*/
LABEL_54:
      if ( !v23 ) /*0x4d30aa*/
        goto LABEL_63; /*0x4d30aa*/
      v26 = (v23[1].members.m_presenceBitfield[9] & 1) == 0; /*0x4d30ac*/
      goto LABEL_61; /*0x4d30b0*/
    }
    v22 = ExtraDataList_GetSeenData(v25 + 2); /*0x4d3090*/
    if ( !v22 || !sub_412220(v22, 0, v37) ) /*0x4d309f*/
      goto LABEL_54; /*0x4d30a6*/
  }
  else if ( !v38 || !sub_412220(v38, v36 + 1, v37) ) /*0x4d30c9*/
  {
    if ( !v40 ) /*0x4d30d6*/
      goto LABEL_63; /*0x4d30d6*/
    v26 = (*(_BYTE *)(v40 + 0x25) & 1) == 0; /*0x4d30dc*/
LABEL_61:
    if ( v26 ) /*0x4d30e0*/
      goto LABEL_63; /*0x4d30e0*/
  }
  ++v35; /*0x4d30e2*/
LABEL_63:
  if ( v34 ) /*0x4d30ec*/
  {
    if ( v24 ) /*0x4d30f0*/
    {
      v27 = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord((TESWorldSpace *)p_vtbl, v14 + 1, v41 + 1); /*0x4d3102*/
      v28 = v27; /*0x4d3107*/
      if ( !v27 ) /*0x4d310b*/
        return v35; /*0x4d310b*/
      v29 = ExtraDataList_GetSeenData(v27 + 2); /*0x4d3114*/
      if ( v29 && sub_412220(v29, 0, 0) ) /*0x4d3123*/
        goto LABEL_83; /*0x4d312a*/
      v12 = (v28[1].members.m_presenceBitfield[9] & 1) == 0; /*0x4d3130*/
      goto LABEL_82; /*0x4d3134*/
    }
    if ( v39 && sub_412220(v39, v36 + 1, 0) ) /*0x4d314b*/
      goto LABEL_83; /*0x4d3152*/
    v30 = v43; /*0x4d3154*/
    goto LABEL_80; /*0x4d3158*/
  }
  if ( !v24 ) /*0x4d315c*/
  {
    if ( v38 && sub_412220(v38, v36 + 1, v37 + 1) ) /*0x4d319c*/
      goto LABEL_83; /*0x4d31a3*/
    v30 = *(float *)&v40; /*0x4d31a5*/
LABEL_80:
    if ( v30 == 0.0 ) /*0x4d31ab*/
      return v35; /*0x4d31ab*/
    v12 = (*(_BYTE *)(LODWORD(v30) + 0x25) & 1) == 0; /*0x4d31ad*/
    goto LABEL_82; /*0x4d31ad*/
  }
  if ( v22 && sub_412220(v22, 0, v37 + 1) ) /*0x4d316e*/
    goto LABEL_83; /*0x4d3175*/
  if ( !v23 ) /*0x4d3179*/
    return v35; /*0x4d3179*/
  v12 = (v23[1].members.m_presenceBitfield[9] & 1) == 0; /*0x4d317b*/
LABEL_82:
  if ( !v12 ) /*0x4d31b1*/
LABEL_83:
    ++v35; /*0x4d31b3*/
  return v35; /*0x4d31bf*/
}
