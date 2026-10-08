double __thiscall sub_4CC1A0(ExtraDataList *this, float *a2, int dataID, int a4)
{
  BSExtraData *v5; // eax
  BSExtraDataMembr *p_members; // ebx
  int v8; // edi
  int v9; // eax
  double v10; // st7
  TESRegionData *DataByID; // eax
  TESRegionData *v12; // esi
  float **v13; // edi
  float *v14; // ebx
  double v15; // st7
  double v16; // st7
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // esi
  int v21; // ebx
  int *v22; // eax
  float *v23; // esi
  double v24; // st7
  double v25; // st7
  int v26; // [esp+0h] [ebp-28h]
  float v27; // [esp+4h] [ebp-24h]
  float v28; // [esp+4h] [ebp-24h]
  BSExtraDataMembr *next; // [esp+18h] [ebp-10h]
  float v30; // [esp+1Ch] [ebp-Ch]
  float v31; // [esp+20h] [ebp-8h]
  unsigned int i; // [esp+24h] [ebp-4h]
  int NextObject; // [esp+34h] [ebp+Ch]
  float v35; // [esp+34h] [ebp+Ch]
  int v36; // [esp+34h] [ebp+Ch]
  float v37; // [esp+34h] [ebp+Ch]

  v5 = sub_4C9B40(this, 1); /*0x4cc1a9*/
  if ( v5 ) /*0x4cc1b0*/
  {
    p_members = &v5->members; /*0x4cc1b2*/
    next = &v5->members; /*0x4cc1b5*/
  }
  else
  {
    next = 0; /*0x4cc1bb*/
    p_members = 0; /*0x4cc1c3*/
  }
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 || !p_members ) /*0x4cc1d3*/
    return 0.0; /*0x4cc532*/
  v31 = flt_A32048; /*0x4cc1e4*/
  v8 = 0xFFFFFFFF; /*0x4cc1e9*/
  for ( i = 0xFFFFFFFF; ; v8 = i )
  {
    v9 = *(_DWORD *)&p_members->type; /*0x4cc1fa*/
    v10 = 0.0; /*0x4cc1fc*/
    if ( !*(_DWORD *)&p_members->type ) /*0x4cc1fa*/
      break; /*0x4cc1fa*/
    if ( (*(_DWORD *)(v9 + 8) & 0x20) != 0 ) /*0x4cc20f*/
    {
      next = (BSExtraDataMembr *)p_members->next; /*0x4cc216*/
      goto LABEL_31; /*0x4cc21a*/
    }
    v30 = 0.0; /*0x4cc223*/
    DataByID = TESRegion_FindDataByID(*(TESRegionDataList **)(v9 + 0x18), dataID); /*0x4cc22d*/
    v12 = DataByID; /*0x4cc232*/
    if ( !DataByID || !((unsigned __int8 (__thiscall *)(TESRegionData *))DataByID->vtable->unknown1C)(DataByID) ) /*0x4cc243*/
      goto LABEL_30; /*0x4cc243*/
    if ( v12->bOverride ) /*0x4cc24d*/
    {
      if ( v12->priority <= v8 ) /*0x4cc259*/
      {
        next = (BSExtraDataMembr *)p_members->next; /*0x4cc25e*/
        goto LABEL_31; /*0x4cc262*/
      }
    }
    else if ( v8 >= 0 ) /*0x4cc269*/
    {
      goto LABEL_30; /*0x4cc269*/
    }
    v13 = *(float ***)(*(_DWORD *)&p_members->type + 0x1C); /*0x4cc271*/
    if ( !v13 ) /*0x4cc276*/
    {
LABEL_30:
      next = (BSExtraDataMembr *)p_members->next; /*0x4cc30e*/
      goto LABEL_31; /*0x4cc311*/
    }
    do
    {
      v14 = *v13; /*0x4cc280*/
      if ( !*v13 ) /*0x4cc280*/
        break; /*0x4cc284*/
      if ( v30 > 0.0 ) /*0x4cc291*/
        goto LABEL_35; /*0x4cc291*/
      NextObject = TESObject_GetNextObject(*v13); /*0x4cc2a0*/
      v15 = (double)NextObject; /*0x4cc2a4*/
      if ( NextObject < 0 ) /*0x4cc2a8*/
        v15 = v15 + flt_A2FC78; /*0x4cc2aa*/
      v27 = v15; /*0x4cc2b5*/
      v35 = sub_4A74E0(v14, a2, v27); /*0x4cc2c0*/
      v16 = v35 <= 1.0 ? v35 : (float)1.0;
      if ( v30 <= v16 ) /*0x4cc2ec*/
        v30 = v16; /*0x4cc2ee*/
      v13 = (float **)v13[1]; /*0x4cc2f6*/
    }
    while ( v13 );
    if ( v30 <= 0.0 ) /*0x4cc308*/
    {
      p_members = next; /*0x4cc30a*/
      goto LABEL_30; /*0x4cc30a*/
    }
LABEL_35:
    if ( v12->bOverride ) /*0x4cc347*/
    {
      v31 = flt_A32048; /*0x4cc357*/
      i = v12->priority; /*0x4cc35b*/
    }
    if ( ((int (__thiscall *)(TESRegionData *))v12->vtable->unknown0C)(v12) == 2
      && a4
      && (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 4))(a4)
      && !(**(int (__thiscall ***)(int))a4)(a4) )
    {
      v18 = ((int (__thiscall *)(TESRegionDataManager *, TESRegionData *))g_TESDataHandler->regionDataManager->vtable->filterDataID2)( /*0x4cc39e*/
              g_TESDataHandler->regionDataManager,
              v12);
      v19 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x28))(v18); /*0x4cc3ac*/
      if ( !sub_4A6860(v19, a4, 1, 0) ) /*0x4cc3b0*/
      {
        next = (BSExtraDataMembr *)next->next; /*0x4cc3c4*/
        goto LABEL_31; /*0x4cc3c8*/
      }
    }
    else if ( ((int (__thiscall *)(TESRegionData *))v12->vtable->unknown0C)(v12) == 6 )
    {
      if ( a4 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 4))(a4) )
        {
          if ( (**(int (__thiscall ***)(int))a4)(a4) == 1 )
          {
            v20 = ((int (__thiscall *)(TESRegionDataManager *, TESRegionData *))g_TESDataHandler->regionDataManager->vtable->filterDataID6)( /*0x4cc419*/
                    g_TESDataHandler->regionDataManager,
                    v12);
            v21 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0xC))(a4)
                ? *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0xC))(a4) + 0xC)
                : 0xFFFFFFFF;
            v26 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a4 + 4))(a4) + 0xC); /*0x4cc448*/
            v22 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0x24))(v20); /*0x4cc44e*/
            if ( !sub_4A6070(v22, v26, v21) ) /*0x4cc452*/
            {
              next = (BSExtraDataMembr *)next->next; /*0x4cc462*/
              goto LABEL_31; /*0x4cc466*/
            }
          }
        }
      }
    }
    for ( ; v13; v13 = (float **)v13[1] )
    {
      v23 = *v13; /*0x4cc470*/
      if ( !*v13 ) /*0x4cc470*/
        break; /*0x4cc474*/
      v36 = TESObject_GetNextObject(*v13); /*0x4cc47f*/
      v24 = (double)v36; /*0x4cc483*/
      if ( v36 < 0 ) /*0x4cc487*/
        v24 = v24 + flt_A2FC78; /*0x4cc489*/
      v28 = v24; /*0x4cc494*/
      v37 = sub_4A74E0(v23, a2, v28); /*0x4cc49f*/
      v25 = v37 <= 1.0 ? v37 : (float)1.0;
      if ( v30 <= v25 ) /*0x4cc4cb*/
        v30 = v25; /*0x4cc4cd*/
    }
    if ( v30 <= (double)v31 ) /*0x4cc4ed*/
      v31 = v30; /*0x4cc4f3*/
    next = (BSExtraDataMembr *)next->next; /*0x4cc4fa*/
LABEL_31:
    if ( !next ) /*0x4cc31a*/
    {
      v10 = 0.0; /*0x4cc320*/
      break; /*0x4cc320*/
    }
    p_members = next; /*0x4cc1f2*/
  }
  if ( v31 >= v10 && v31 <= 1.0 ) /*0x4cc51e*/
    return v31; /*0x4cc527*/
  return (float)v10; /*0x4cc340*/
}
