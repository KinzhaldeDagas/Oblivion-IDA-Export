// Verified: computes/caches worldspace location name; queries TESWorldSpace cell lookup first, then loaded TESRegionList with data ID 4 at coordinates when no cell location applies. Fallback resolves the highest-priority Map region data.
char __thiscall TESWorldSpace_GetLocationName(
        TESWorldSpace *this,
        BSStringT *result,
        float worldX,
        float worldY,
        float worldZ)
{
  float v7; // edx
  float v8; // eax
  BSStringT *v9; // edi
  TESForm *v10; // eax
  TESForm *v11; // ebx
  TESRegionDataManager *v12; // edi
  void **v13; // esi
  BSExtraData *v14; // eax
  TESRegionData *v15; // eax
  int v16; // eax
  const char *v17; // ebx
  TESRegionList *regionListOwner; // eax
  OblivionRegionListNode *p_regions; // esi
  TESForm *regionForm; // ebx
  _DWORD *v21; // eax
  TESRegionDataManager *regionDataManager; // edi
  void **p_filterDataID4; // esi
  int DataByID; // eax
  _BYTE *v25; // esi
  OblivionRegionListNode *next; // ecx
  int v27; // edi
  unsigned int v28; // eax
  char *m_data; // eax
  unsigned int v30; // eax
  int v31; // eax
  float worldXa; // [esp+0h] [ebp-38h]
  float worldYa; // [esp+4h] [ebp-34h]
  float v34; // [esp+8h] [ebp-30h]
  char v35; // [esp+23h] [ebp-15h]
  OblivionRegionListNode *v36; // [esp+24h] [ebp-14h]
  int v37; // [esp+28h] [ebp-10h]
  float v39[2]; // [esp+30h] [ebp-8h] BYREF

  if ( (word_B360C6[1] & 1) == 0 ) /*0x4f228b*/
  {
    *(_DWORD *)&word_B360C6[1] |= 1u; /*0x4f228d*/
    unk_B360C0.m_data = 0; /*0x4f2299*/
    word_B360C4 = 0; /*0x4f229f*/
    word_B360C6[0] = 0; /*0x4f22a6*/
    atexit(sub_A1C070); /*0x4f22ad*/
  }
  if ( (word_B360C6[1] & 2) == 0 ) /*0x4f22c0*/
    *(_DWORD *)&word_B360C6[1] |= 2u; /*0x4f22c2*/
  if ( !g_TESDataHandler ) /*0x4f22ce*/
    return 0; /*0x4f22ce*/
  if ( (TESWorldSpace *)unk_B360BC == this ) /*0x4f22d6*/
  {
    if ( worldX == unk_B360B0 && worldY == unk_B360B4 && worldZ == unk_B360B8 ) /*0x4f230c*/
    {
      BSStringT_Set(result, unk_B360C0.m_data, 0); /*0x4f2318*/
      return 0; /*0x4f2325*/
    }
  }
  else
  {
    BSStringT_Set(&unk_B360C0, EmptyString, 0); /*0x4f2333*/
  }
  v7 = worldY; /*0x4f233b*/
  v8 = worldZ; /*0x4f233e*/
  v9 = result; /*0x4f2341*/
  unk_B360B0 = worldX; /*0x4f2345*/
  unk_B360BC = (int)this; /*0x4f2352*/
  unk_B360B4 = v7; /*0x4f2358*/
  unk_B360B8 = v8; /*0x4f235e*/
  BSStringT_Set(result, EmptyString, 0); /*0x4f2363*/
  v10 = sub_44A270((TESWorldSpace **)g_TESDataHandler, worldX, worldY, this, 0); /*0x4f2380*/
  v11 = v10; /*0x4f2385*/
  if ( !v10 ) /*0x4f2389*/
  {
    regionListOwner = g_TESDataHandler->regionListOwner; /*0x4f241a*/
    if ( regionListOwner ) /*0x4f2422*/
    {
      p_regions = &regionListOwner->regions; /*0x4f2424*/
      v36 = &regionListOwner->regions; /*0x4f2427*/
    }
    else
    {
      v36 = 0; /*0x4f242d*/
      p_regions = 0; /*0x4f2435*/
    }
    sub_4A6950(v39, &worldX); /*0x4f2441*/
    v37 = 0xFFFFFFFF; /*0x4f2448*/
    v35 = 0; /*0x4f2450*/
    if ( !p_regions ) /*0x4f2455*/
      goto LABEL_52; /*0x4f2455*/
    while ( 1 ) /*0x4f2464*/
    {
      regionForm = p_regions->regionForm; /*0x4f2464*/
      if ( !p_regions->regionForm ) /*0x4f2468*/
        goto LABEL_51; /*0x4f2468*/
      if ( (regionForm->member.flags & 0x20) != 0 /*0x4f249b*/
        || (TESWorldSpace *)regionForm[1].member.flags != this
        || (v21 = *(_DWORD **)&regionForm[1].member.type) == 0
        || !v21[1] && !*v21 )
      {
        next = p_regions->next; /*0x4f2564*/
        goto LABEL_49; /*0x4f2564*/
      }
      regionDataManager = g_TESDataHandler->regionDataManager; /*0x4f24aa*/
      p_filterDataID4 = &regionDataManager->vtable->filterDataID4; /*0x4f24b7*/
      DataByID = TESRegion_FindDataByID((int *)regionForm[1].vtbl, 4);// Verified: worldspace location-name lookup requests region data ID 4 (Map) then evaluates map data with coordinates. /*0x4f24ba*/
      v25 = (_BYTE *)((int (__thiscall *)(TESRegionDataManager *, int))*p_filterDataID4)(regionDataManager, DataByID); /*0x4f24c6*/
      if ( !v25 ) /*0x4f24ca*/
        break; /*0x4f24ca*/
      v27 = *(_DWORD *)&regionForm[1].member.type; /*0x4f24d8*/
      if ( !v27 ) /*0x4f24dd*/
      {
LABEL_39:
        next = v36->next; /*0x4f24fa*/
        goto LABEL_49; /*0x4f2501*/
      }
      while ( 1 ) /*0x4f24df*/
      {
        if ( !*(_DWORD *)v27 ) /*0x4f24e3*/
          goto LABEL_39; /*0x4f24e3*/
        if ( sub_4A7330(*(float **)v27, v39) ) /*0x4f24ea*/
          break; /*0x4f24ea*/
        v27 = *(_DWORD *)(v27 + 4); /*0x4f24f3*/
        if ( !v27 ) /*0x4f24f8*/
          goto LABEL_39; /*0x4f24f8*/
      }
      if ( v25[4] ) /*0x4f2503*/
      {
        if ( v35 && (unsigned __int8)v25[6] <= v37 ) /*0x4f2519*/
        {
          next = v36->next; /*0x4f251f*/
          goto LABEL_49; /*0x4f2522*/
        }
LABEL_46:
        v35 = v25[4]; /*0x4f2535*/
        v37 = (unsigned __int8)v25[6]; /*0x4f2542*/
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v25 + 0x24))(v25, result); /*0x4f254c*/
        next = v36->next; /*0x4f2552*/
        goto LABEL_49; /*0x4f2555*/
      }
      if ( !v35 && (unsigned __int8)v25[6] > v37 ) /*0x4f2533*/
        goto LABEL_46; /*0x4f2533*/
      v36 = v36->next; /*0x4f255e*/
LABEL_50:
      if ( !v36 ) /*0x4f2570*/
        goto LABEL_51; /*0x4f2570*/
      p_regions = v36; /*0x4f2460*/
    }
    next = v36->next; /*0x4f24d0*/
LABEL_49:
    v36 = next; /*0x4f2567*/
    goto LABEL_50; /*0x4f2567*/
  }
  if ( !sub_4C9B40((ExtraDataList *)v10, 1) ) /*0x4f239a*/
  {
LABEL_18:
    v17 = *(const char **)&v11[1].member.type; /*0x4f23fa*/
    if ( !v17 ) /*0x4f23ff*/
      v17 = EmptyString; /*0x4f2401*/
    BSStringT_Set(v9, v17, 0); /*0x4f240b*/
    goto LABEL_52; /*0x4f2410*/
  }
  v12 = g_TESDataHandler->regionDataManager; /*0x4f23a6*/
  worldXa = worldX; /*0x4f23ba*/
  worldYa = worldY; /*0x4f23bf*/
  v34 = worldZ; /*0x4f23c4*/
  v13 = &v12->vtable->filterDataID4; /*0x4f23cb*/
  v14 = sub_4C9B40((ExtraDataList *)v11, 1); /*0x4f23ce*/
  v15 = TESRegionList_SelectDataAtWorldPosition((TESRegionList *)v14, 4, worldXa, worldYa, v34, this);// Verified: this caller uses TESRegionDataMap ID 4 for worldspace location-name lookup; separate from cell music, which uses sound ID 7. /*0x4f23d5*/
  v16 = ((int (__thiscall *)(TESRegionDataManager *, TESRegionData *))*v13)(v12, v15); /*0x4f23df*/
  if ( !v16 ) /*0x4f23e3*/
  {
    v9 = result; /*0x4f23f7*/
    goto LABEL_18; /*0x4f23f7*/
  }
  (*(void (__thiscall **)(int, BSStringT *))(*(_DWORD *)v16 + 0x24))(v16, result); /*0x4f23f0*/
LABEL_51:
  v9 = result; /*0x4f2576*/
LABEL_52:
  LOWORD(v28) = v9->m_dataLen; /*0x4f2579*/
  if ( (_WORD)v28 == 0xFFFF ) /*0x4f2581*/
    v28 = strlen(v9->m_data); /*0x4f2591*/
  else
    v28 = (unsigned __int16)v28; /*0x4f2595*/
  if ( !v28 ) /*0x4f259a*/
  {
    m_data = this->fullName.name.m_data; /*0x4f25a0*/
    if ( !m_data ) /*0x4f25a5*/
      m_data = EmptyString; /*0x4f25a7*/
    BSStringT_Set(v9, m_data, 0); /*0x4f25b1*/
  }
  LOWORD(v30) = v9->m_dataLen; /*0x4f25b6*/
  if ( (_WORD)v30 == 0xFFFF ) /*0x4f25be*/
    v30 = strlen(v9->m_data); /*0x4f25ce*/
  else
    v30 = (unsigned __int16)v30; /*0x4f25d2*/
  if ( !v30 ) /*0x4f25d7*/
    BSStringT_Set(v9, MEMORY[0xB35C0C].value, 0); /*0x4f25e2*/
  if ( unk_B360C0.m_data && v9->m_data ) /*0x4f25f1*/
    v31 = CRT_StricmpLocaleDispatch(v9->m_data, unk_B360C0.m_data); /*0x4f25f9*/
  else
    v31 = 2 * (unk_B360C0.m_data == 0) - 1; /*0x4f260a*/
  if ( !v31 ) /*0x4f2610*/
    return 0; /*0x4f2610*/
  BSStringT_Set(&unk_B360C0, v9->m_data, 0); /*0x4f2620*/
  return 1; /*0x4f231f*/
}
