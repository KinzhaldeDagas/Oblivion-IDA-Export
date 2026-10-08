bool __usercall sub_5A4980@<al>(
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESObjectREFR *a4,
        char a5,
        char a6)
{
  const char *v6; // esi
  TESObjectREFR *v7; // edi
  char *Name; // eax
  unsigned int v9; // eax
  unsigned int Len; // eax
  bool v11; // zf
  const char *v12; // eax
  PlayerCharacter *v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // eax
  int v19; // eax
  PlayerCharacter *v20; // ecx
  float *v21; // eax
  PlayerCharacter *v22; // eax
  TESObjectREFR *v23; // ebp
  TESObjectREFRVtbl *vtbl; // ecx
  double v25; // st4
  TeleportData *TeleportData; // ebp
  _DWORD *v27; // eax
  _DWORD *v28; // ebp
  int v29; // ecx
  TESObjectREFR *v30; // eax
  Tile *v31; // ebp
  TESForm *v32; // eax
  void *v33; // ebx
  int EffectiveDoorLockLevel; // eax
  const char **v35; // eax
  const char *v36; // eax
  double v37; // st4
  int v38; // eax
  tListVoid *extendData; // ecx
  tListVoid *v40; // eax
  Tile *v41; // ebp
  const char *v42; // eax
  _DWORD *v43; // ebx
  Tile *v44; // ebp
  double v45; // st7
  Tile *v46; // ebp
  double v47; // st7
  int v48; // eax
  Tile *v49; // ebp
  double v50; // st7
  int v51; // eax
  char *v52; // eax
  TESForm *v53; // eax
  double v54; // st7
  Tile *v55; // ebp
  double v56; // st6
  int v57; // eax
  Tile *v58; // ebp
  double v59; // st7
  int v60; // eax
  Tile *v61; // ebp
  double v62; // st7
  Tile *v63; // edi
  int v64; // edx
  char *a2; // [esp+0h] [ebp-60h]
  float v66; // [esp+4h] [ebp-5Ch]
  const char *v67; // [esp+4h] [ebp-5Ch]
  _DWORD *ExtraCount; // [esp+4h] [ebp-5Ch]
  float v69; // [esp+4h] [ebp-5Ch]
  float v70; // [esp+4h] [ebp-5Ch]
  float v71; // [esp+4h] [ebp-5Ch]
  float v72; // [esp+4h] [ebp-5Ch]
  float v73; // [esp+4h] [ebp-5Ch]
  float v74; // [esp+4h] [ebp-5Ch]
  float v75; // [esp+4h] [ebp-5Ch]
  _DWORD *v76; // [esp+4h] [ebp-5Ch]
  float v77; // [esp+4h] [ebp-5Ch]
  _DWORD *v78; // [esp+8h] [ebp-58h]
  ExtraLockData *v79; // [esp+1Ch] [ebp-44h] BYREF
  _DWORD *type; // [esp+20h] [ebp-40h]
  Tile *v81; // [esp+24h] [ebp-3Ch]
  BSStringT v82; // [esp+28h] [ebp-38h] BYREF
  char ArgList[4]; // [esp+30h] [ebp-30h] BYREF
  int v84; // [esp+34h] [ebp-2Ch]
  NiPoint3 v85; // [esp+38h] [ebp-28h] BYREF
  __int16 v86; // [esp+44h] [ebp-1Ch]
  char v87; // [esp+46h] [ebp-1Ah]
  EntryData v88; // [esp+48h] [ebp-18h] BYREF
  double v89; // [esp+58h] [ebp-8h]

  if ( !dword_B3B0B4[0xA2] ) /*0x5a49af*/
    return 0; /*0x5a49af*/
  v6 = 0; /*0x5a49b5*/
  *(_DWORD *)ArgList = 0; /*0x5a49b7*/
  v84 = 0; /*0x5a49bb*/
  v7 = a4; /*0x5a49c5*/
  HIDWORD(v89) = 0; /*0x5a49cb*/
  if ( a4 ) /*0x5a49cf*/
  {
    Name = TESObjectREFR_GetName(a4); /*0x5a49d3*/
    BSStringT_Set((BSStringT *)ArgList, Name, 0); /*0x5a49de*/
    v6 = *(const char **)ArgList; /*0x5a49e3*/
    if ( *(_DWORD *)ArgList ) /*0x5a49e9*/
    {
      if ( (_WORD)v84 == 0xFFFF ) /*0x5a49f4*/
        v9 = strlen(*(const char **)ArgList); /*0x5a49f8*/
      else
        v9 = (unsigned __int16)v84; /*0x5a4a0d*/
      if ( v9 ) /*0x5a4a12*/
      {
        Len = BSStringT_GetLen((BSStringT *)ArgList); /*0x5a4a18*/
        v11 = v6[Len - 1] == 0x20; /*0x5a4a1d*/
        v12 = &v6[Len - 1]; /*0x5a4a22*/
        if ( v11 ) /*0x5a4a26*/
          *v12 = 0; /*0x5a4a28*/
      }
    }
  }
  v13 = reference; /*0x5a4a2b*/
  if ( !reference ) /*0x5a4a2b*/
    goto LABEL_130; /*0x5a4a2b*/
  if ( v13->unk5C0 ) /*0x5a4a38*/
    goto LABEL_130; /*0x5a4a38*/
  if ( a4 == (TESObjectREFR *)v13 ) /*0x5a4a47*/
    v7 = 0; /*0x5a4a49*/
  v14 = (_DWORD *)dword_B3B0B4[0xA2]; /*0x5a4a4b*/
  v81 = *(Tile **)(dword_B3B0B4[0xA2] + 4); /*0x5a4a56*/
  if ( !v81 ) /*0x5a4a5a*/
  {
LABEL_130:
    FormHeapFree((unsigned int)v6); /*0x5a54ef*/
    return 0; /*0x5a54ef*/
  }
  v15 = v14; /*0x5a4a66*/
  if ( !a6 && v7 == (TESObjectREFR *)v14[0x15] ) /*0x5a4a6d*/
  {
    v16 = v14[9]; /*0x5a4a6f*/
    if ( v16 == 8 || v16 == 1 ) /*0x5a4a7e*/
      goto LABEL_46; /*0x5a4a7e*/
  }
  if ( !v7 ) /*0x5a4a86*/
    v14[0x15] = 0; /*0x5a4a88*/
  if ( !a6 ) /*0x5a4a8d*/
  {
    v17 = v14[9]; /*0x5a4a8f*/
    if ( v17 != 4 || !v7 ) /*0x5a4a99*/
    {
      if ( v17 == 8 || v17 == 1 ) /*0x5a4aa3*/
        Menu::StartFadeOut(v14, st6_0); /*0x5a4aa5*/
      HIDWORD(v89) = 0xFFFFFFFF; /*0x5a4aae*/
      BSStringT_Clear((unsigned int *)ArgList); /*0x5a4ab6*/
      return !v7; /*0x5a4abd*/
    }
  }
  v19 = sub_4DE980((PlayerCharacter *)v7); /*0x5a4adb*/
  if ( (!v7 || v19 != 5) && v19 != 3 /*0x5a4b1d*/
    || (v20 = reference,
        *(float *)&v79 = 0.0,
        v86 = 0,
        v87 = 0xFF,
        v21 = (float *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v20->vtbl->super.super.super.GetPos)(
                         v20,
                         st7_0,
                         st6_0,
                         st5_0),
        sub_4DBAE0(v7, v21, 1, 1, &v85, &v79)) )
  {
    if ( !a6 ) /*0x5a4b3e*/
      v15[0x15] = v7; /*0x5a4b40*/
    if ( TESObjectREFR_HasHorseCreatureBase(v7) ) /*0x5a4b45*/
    {
      v22 = (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))v7->vtbl[2].super.Unk_0E)(v7); /*0x5a4b58*/
      v23 = (TESObjectREFR *)v22; /*0x5a4b5a*/
      if ( v22 ) /*0x5a4b5e*/
      {
        if ( v22 != reference && !v22->vtbl->super.super.super.IsDead((TESObjectREFR *)v22, 0) ) /*0x5a4b75*/
        {
          vtbl = v23[1].vtbl; /*0x5a4b7b*/
          if ( vtbl ) /*0x5a4b80*/
          {
            if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0xDB))(vtbl) == 4 ) /*0x5a4b8f*/
              v7 = v23; /*0x5a4b91*/
          }
        }
      }
    }
    if ( (v7->member.super.flags & 0x2000) == 0 ) /*0x5a4b9c*/
    {
      type = (_DWORD *)v7->vtbl->GetBaseForm(v7)->member.type; /*0x5a4bb2*/
      switch ( (unsigned int)type ) /*0x5a4bc5*/
      {
        case 0x12u: /*0x5a4bc5*/
        case 0x17u: /*0x5a4bc5*/
        case 0x18u: /*0x5a4bc5*/
        case 0x23u: /*0x5a4bc5*/
        case 0x24u: /*0x5a4bc5*/
          if ( a5 ) /*0x5a4bfc*/
            goto LABEL_45; /*0x5a4bfc*/
          break; /*0x5a4bfc*/
        case 0x1Au: /*0x5a4bc5*/
          if ( (*(_DWORD *)&v7->vtbl->GetBaseForm(v7)[5].member.type & 2) == 0 ) /*0x5a4c14*/
            goto LABEL_45; /*0x5a4c14*/
          break; /*0x5a4c14*/
        case 0x1Cu: /*0x5a4bc5*/
        case 0x1Eu: /*0x5a4bc5*/
          goto LABEL_45;
        default:
          break;
      }
      v82.m_data = 0; /*0x5a4c16*/
      v82.m_dataLen = 0; /*0x5a4c1c*/
      v82.m_bufLen = 0; /*0x5a4c21*/
      BYTE4(v89) = 1; /*0x5a4c28*/
      *(float *)&v79 = COERCE_FLOAT(TESObjectREFR_GetEffectiveDoorLock(v7)); /*0x5a4c34*/
      if ( !v15 || !BSStringT_GetLen((BSStringT *)ArgList) ) /*0x5a4c42*/
      {
        Tile_SetString((_DWORD *)v15[0xA], (_DWORD *)0xFDE, word_A36430); /*0x5a4e52*/
        Tile_SetFloat((Tile *)v15[0xA], 0xFA1u, 1.0); /*0x5a4e65*/
        Tile_SetString((_DWORD *)v15[0x12], (_DWORD *)0xFDE, word_A36430); /*0x5a4e77*/
        Tile_SetFloat((Tile *)v15[0x12], 0xFA1u, 1.0); /*0x5a4e8a*/
        goto LABEL_68; /*0x5a4e8a*/
      }
      if ( a5 ) /*0x5a4c55*/
        v25 = fConstant_2; /*0x5a4c57*/
      else
        v25 = 1.0; /*0x5a4c5f*/
      v66 = v25; /*0x5a4c61*/
      Tile_SetFloat((Tile *)v15[1], 0xFB2u, v66); /*0x5a4c69*/
      TeleportData = TESObjectREFR_GetTeleportData(v7); /*0x5a4c75*/
      if ( TeleportData ) /*0x5a4c7b*/
      {
        BSStringT_Static_Format(&v82, "%s %s", *(const char **)ArgList, stru_B38D18.value); /*0x5a4c97*/
        Tile_SetString((_DWORD *)v15[0xA], (_DWORD *)0xFDE, v82.m_data); /*0x5a4cac*/
        Tile_SetFloat((Tile *)v15[0xA], 0xFA1u, fConstant_2); /*0x5a4cc3*/
        sub_42B650(&TeleportData->linkedDoor, &v82); /*0x5a4ccf*/
        Tile_SetString((_DWORD *)v15[0x12], (_DWORD *)0xFDE, v82.m_data); /*0x5a4ce1*/
        Tile_SetFloat((Tile *)v15[0x12], 0xFA1u, fConstant_2); /*0x5a4cf8*/
LABEL_68:
        v31 = (Tile *)v15[0x13]; /*0x5a4e91*/
        if ( v31 ) /*0x5a4e96*/
        {
          v32 = v7->vtbl->GetBaseForm(v7); /*0x5a4eb4*/
          v33 = OblivionDynamicCast( /*0x5a4ec4*/
                  v32,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectDOOR `RTTI Type Descriptor',
                  0);
          if ( *(float *)&v79 == 0.0 /*0x5a4f05*/
            || !ExtraLockData_IsLocked(v79)
            || TESOBjectREFR_IsOwnedBy(v7, (TESObjectREFR *)reference, 1)
            || v33 && TESObjectDOOR_CheckActorAccessPolicy(v7, (Actor *)reference, 0, 1u) )
          {
            v37 = 1.0; /*0x5a4f96*/
          }
          else
          {
            EffectiveDoorLockLevel = TESObjectREFR_GetEffectiveDoorLockLevel(v7); /*0x5a4f17*/
            v35 = *(const char ***)(4 * GetLockLevel(EffectiveDoorLockLevel) + 0xB03E1C); /*0x5a4f22*/
            if ( v35 ) /*0x5a4f2e*/
              v36 = *v35; /*0x5a4f30*/
            else
              v36 = 0; /*0x5a4f34*/
            BSStringT_Static_Format(&v82, "%s", v36); /*0x5a4f41*/
            Tile_SetString(v31, (_DWORD *)0xFDE, v82.m_data); /*0x5a4f55*/
            if ( TESObjectREFR_GetEffectiveDoorLockLevel(v7) ) /*0x5a4f5c*/
              *(float *)&v79 = COERCE_FLOAT(TESObjectREFR_GetEffectiveDoorLockLevel(v7)); /*0x5a4f76*/
            else
              *(float *)&v79 = NAN; /*0x5a4f65*/
            v69 = (float)(int)v79; /*0x5a4f81*/
            Tile_SetFloat(v31, 0xFAFu, v69); /*0x5a4f89*/
            v37 = fConstant_2; /*0x5a4f8e*/
          }
          v70 = v37; /*0x5a4f99*/
          Tile_SetFloat(v31, 0xFA1u, v70); /*0x5a4fa3*/
        }
        v38 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v7->vtbl->GetBaseForm)( /*0x5a4fb4*/
                v7,
                st7_0,
                st6_0,
                st5_0);
        ContainerEntryExtraData_constr(&v88, v38, 0); /*0x5a4fbb*/
        extendData = v88.extendData; /*0x5a4fc0*/
        BYTE4(v89) = 4; /*0x5a4fc6*/
        if ( !v88.extendData ) /*0x5a4fcb*/
        {
          v40 = (tListVoid *)FormHeapAlloc(8u); /*0x5a4fcf*/
          if ( v40 ) /*0x5a4fd9*/
          {
            v40->node.data = 0; /*0x5a4fdb*/
            v40->node.next = 0; /*0x5a4fe1*/
          }
          else
          {
            v40 = 0; /*0x5a4fea*/
          }
          extendData = v40; /*0x5a4fec*/
          v88.extendData = v40; /*0x5a4fee*/
        }
        BSSimpleList_PushFront(extendData, (int)&v7->member.baseExtraList); /*0x5a4ff6*/
        v41 = (Tile *)v15[0xB]; /*0x5a4ffb*/
        v42 = (const char *)sub_48F450(&v88, 1, 1, 0, 0.0); /*0x5a500c*/
        BSStringT_Set(&v82, v42, 0); /*0x5a5018*/
        Tile_SetString(v41, (_DWORD *)0xFDE, v82.m_data); /*0x5a5029*/
        v71 = sub_488E50((void **)&v88.extendData, 0, (int)reference, 0, *(float *)&v78); /*0x5a5043*/
        Tile_SetFloat(v41, 0xFAFu, v71); /*0x5a504d*/
        v43 = type; /*0x5a5052*/
        v44 = (Tile *)v15[0xD]; /*0x5a5059*/
        if ( type == (_DWORD *)0x21 ) /*0x5a505c*/
          v45 = Player_CalcInventoryEntryRating(&v88, 0x21, 0, (int)reference, 0); /*0x5a506d*/
        else
          v45 = kTerrainLODQuadRayDirectionZ; /*0x5a5074*/
        *(float *)&v79 = v45; /*0x5a507a*/
        *(float *)&v79 = COERCE_FLOAT(Double_To_SInt32(*(float *)&v79)); /*0x5a5088*/
        BSStringT_Static_Format(&v82, "%i", v79); /*0x5a5096*/
        Tile_SetString(v44, (_DWORD *)0xFDE, v82.m_data); /*0x5a50aa*/
        v72 = (float)(int)v79; /*0x5a50b6*/
        Tile_SetFloat(v44, 0xFAFu, v72); /*0x5a50be*/
        v46 = (Tile *)v15[0xE]; /*0x5a50c6*/
        if ( v43 == (_DWORD *)0x14 ) /*0x5a50c9*/
          v47 = Player_CalcInventoryEntryRating(&v88, 0x14, 0, (int)reference, 0); /*0x5a50da*/
        else
          v47 = kTerrainLODQuadRayDirectionZ; /*0x5a50e1*/
        *(float *)&v79 = v47; /*0x5a50e7*/
        v48 = Double_To_SInt32(*(float *)&v79); /*0x5a50ef*/
        v79 = (ExtraLockData *)v48; /*0x5a50fc*/
        if ( v48 >= 0x3E8 ) /*0x5a5100*/
        {
          if ( v48 >= 0xF4240 ) /*0x5a5115*/
          {
            if ( v48 < 0x3B9ACA00 ) /*0x5a513b*/
              BSStringT_Static_Format(&v82, off_A3D904, v48 / 0xF4240); /*0x5a5159*/
          }
          else
          {
            BSStringT_Static_Format(&v82, (char *)&off_A6BE80, v48 / 0x3E8); /*0x5a5133*/
          }
        }
        else
        {
          BSStringT_Static_Format(&v82, "%i", v48); /*0x5a510d*/
        }
        Tile_SetString(v46, (_DWORD *)0xFDE, v82.m_data); /*0x5a516d*/
        v73 = (float)(int)v79; /*0x5a5179*/
        Tile_SetFloat(v46, 0xFAFu, v73); /*0x5a5181*/
        v49 = (Tile *)v15[0xC]; /*0x5a5186*/
        v50 = sub_485260((void **)&v88.extendData, 0, 0, 0); /*0x5a5193*/
        *(float *)&v79 = COERCE_FLOAT(Double_To_SInt32(v50)); /*0x5a519d*/
        if ( v7->vtbl->GetBaseForm(v7)->member.type == kFormType_Container ) /*0x5a51b1*/
          *(float *)&v79 = NAN; /*0x5a51b3*/
        v51 = (int)v7->vtbl->GetBaseForm(v7); /*0x5a51c5*/
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v51 + 0x78))(v51) ) /*0x5a51ce*/
          *(float *)&v79 = NAN; /*0x5a51d4*/
        v52 = (char *)sub_48F450(&v88, 2, 1, 0, COERCE_DOUBLE((unsigned __int64)reference)); /*0x5a51ef*/
        Tile_SetString(v49, (_DWORD *)0xFDE, v52); /*0x5a51fc*/
        v74 = (float)(int)v79; /*0x5a5208*/
        Tile_SetFloat(v49, 0xFAFu, v74); /*0x5a5210*/
        *(double *)&v85.x = TESObjectREFR_GetHealth((TESChildCELL *)v7); /*0x5a521c*/
        v53 = v7->vtbl->GetBaseForm(v7); /*0x5a522a*/
        type = (_DWORD *)TESHealthForm_GetHealthForForm(v53); /*0x5a5237*/
        v54 = (double)(int)type; /*0x5a523b*/
        if ( (int)type < 0 ) /*0x5a523f*/
          v54 = v54 + flt_A2FC78; /*0x5a5241*/
        type = (_DWORD *)Double_To_SInt32(*(double *)&v85.x / v54 * fCostant_100); /*0x5a5256*/
        *(float *)&v79 = (float)(int)type; /*0x5a5260*/
        if ( TESObjectREFR_GetHealth((TESChildCELL *)v7) < *(float *)&SrcStr || v7->vtbl->IsActor(v7) ) /*0x5a5280*/
          *(float *)&v79 = kTerrainLODQuadRayDirectionZ; /*0x5a528c*/
        v55 = (Tile *)v15[0x10]; /*0x5a5292*/
        v56 = *(float *)&v79; /*0x5a5295*/
        if ( *(float *)&v79 < 0.0 ) /*0x5a52a2*/
        {
          Tile_SetString(v55, (_DWORD *)0xFDE, word_A36430); /*0x5a531d*/
        }
        else
        {
          v57 = Double_To_SInt32(*(float *)&v79); /*0x5a52a4*/
          if ( v57 >= 0x3E8 ) /*0x5a52b1*/
          {
            if ( v57 >= 0xF4240 ) /*0x5a52c1*/
            {
              if ( v57 < 0x3B9ACA00 ) /*0x5a52e2*/
                BSStringT_Static_Format(&v82, off_A3D904, v57 / 0xF4240); /*0x5a5300*/
            }
            else
            {
              BSStringT_Static_Format(&v82, (char *)&off_A6BE80, v57 / 0x3E8); /*0x5a52da*/
            }
          }
          else
          {
            BSStringT_Static_Format(&v82, "%i", v57); /*0x5a52b9*/
          }
          Tile_SetString(v55, (_DWORD *)0xFDE, v82.m_data); /*0x5a530d*/
        }
        Tile_SetFloat(v55, 0xFAFu, *(float *)&v79); /*0x5a5331*/
        v58 = (Tile *)v15[0xF]; /*0x5a5339*/
        if ( v43 == (_DWORD *)0x13 ) /*0x5a533c*/
          v59 = Player_CalcInventoryEntryRating(&v88, 0x13, 0, (int)reference, 0); /*0x5a534c*/
        else
          v59 = kTerrainLODQuadRayDirectionZ; /*0x5a5353*/
        *(float *)&v79 = v59; /*0x5a5359*/
        v60 = Double_To_SInt32(*(float *)&v79); /*0x5a5361*/
        if ( v60 >= 0x3E8 ) /*0x5a536e*/
        {
          if ( v60 >= 0xF4240 ) /*0x5a537e*/
          {
            if ( v60 < 0x3B9ACA00 ) /*0x5a539f*/
              BSStringT_Static_Format(&v82, off_A3D904, v60 / 0xF4240); /*0x5a53bd*/
          }
          else
          {
            BSStringT_Static_Format(&v82, (char *)&off_A6BE80, v60 / 0x3E8); /*0x5a5397*/
          }
        }
        else
        {
          BSStringT_Static_Format(&v82, "%i", v60); /*0x5a5376*/
        }
        Tile_SetString(v58, (_DWORD *)0xFDE, v82.m_data); /*0x5a53d1*/
        type = (_DWORD *)sub_4D6600(v7); /*0x5a53dd*/
        v75 = (float)(int)type; /*0x5a53e8*/
        Tile_SetFloat(v58, 0xFAFu, v75); /*0x5a53f0*/
        v61 = (Tile *)v15[0x11]; /*0x5a53f5*/
        v76 = (_DWORD *)(char)sub_4D7510(v7); /*0x5a540a*/
        BSStringT_Static_Format(&v82, "%i", v76); /*0x5a5461*/
        Tile_SetString(v61, (_DWORD *)0xFDE, v82.m_data); /*0x5a5475*/
        type = (_DWORD *)(char)sub_4D7510(v7); /*0x5a5484*/
        v77 = (float)(int)type; /*0x5a548f*/
        Tile_SetFloat(v61, 0xFAFu, v77); /*0x5a5497*/
        v62 = fConstant_2; /*0x5a549c*/
        v63 = v81; /*0x5a54a2*/
        Tile_SetFloat(v81, 0xFA1u, fConstant_2); /*0x5a54b1*/
        sub_58FBA0((int)v63, st5_0, v56, v62, 0); /*0x5a54ba*/
        if ( !a6 ) /*0x5a54c4*/
          Menu::StartFadeIn(v15); /*0x5a54c8*/
        BYTE4(v89) = 1; /*0x5a54d1*/
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)&v88, v64); /*0x5a54d6*/
        BYTE4(v89) = 0; /*0x5a54df*/
        BSStringT_Clear((unsigned int *)&v82); /*0x5a54e4*/
        goto LABEL_46; /*0x5a54e9*/
      }
      if ( ExtraDataList_GetExtraCount(&v7->member.baseExtraList) == 1 ) /*0x5a4d10*/
      {
        if ( !v7->vtbl->IsActor(v7) /*0x5a4d50*/
          || (v27 = OblivionDynamicCast(
                      v7,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                      &Actor `RTTI Type Descriptor',
                      0),
              (v28 = v27) == 0)
          || (v29 = v27[0x16]) == 0
          || !(*(int (__thiscall **)(int))(*(_DWORD *)v29 + 0x3D0))(v29) )
        {
          Tile_SetString((_DWORD *)v15[0xA], (_DWORD *)0xFDE, *(char **)ArgList); /*0x5a4dab*/
LABEL_66:
          Tile_SetFloat((Tile *)v15[0xA], 0xFA1u, fConstant_2); /*0x5a4e07*/
          Tile_SetString((_DWORD *)v15[0x12], (_DWORD *)0xFDE, word_A36430); /*0x5a4e2b*/
          Tile_SetFloat((Tile *)v15[0x12], 0xFA1u, 1.0); /*0x5a4e3e*/
          goto LABEL_68; /*0x5a4e43*/
        }
        v30 = (TESObjectREFR *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v28[0x16] + 0x3D0))(v28[0x16]); /*0x5a4d61*/
        v85.x = 0.0; /*0x5a4d63*/
        v85.y = 0.0; /*0x5a4d67*/
        v67 = *(const char **)ArgList; /*0x5a4d75*/
        BYTE4(v89) = 2; /*0x5a4d78*/
        a2 = TESObjectREFR_GetName(v30); /*0x5a4d82*/
        BSStringT_Static_Format((BSStringT *)&v85, "%s's %s", a2, v67); /*0x5a4d88*/
      }
      else
      {
        v85.x = 0.0; /*0x5a4db2*/
        v85.y = 0.0; /*0x5a4db6*/
        BYTE4(v89) = 3; /*0x5a4dc2*/
        ExtraCount = (_DWORD *)ExtraDataList_GetExtraCount(&v7->member.baseExtraList); /*0x5a4dd3*/
        BSStringT_Static_Format((BSStringT *)&v85, "%s (%d)", *(_DWORD *)ArgList, ExtraCount); /*0x5a4ddf*/
      }
      Tile_SetString((_DWORD *)v15[0xA], (_DWORD *)0xFDE, (char *)LODWORD(v85.x)); /*0x5a4df4*/
      BYTE4(v89) = 1; /*0x5a4dfd*/
      BSStringT_Clear((unsigned int *)&v85); /*0x5a4e02*/
      goto LABEL_66; /*0x5a4e02*/
    }
LABEL_45:
    Menu::StartFadeOut(v15, st6_0); /*0x5a4bcc*/
LABEL_46:
    HIDWORD(v89) = 0xFFFFFFFF; /*0x5a4bd3*/
    BSStringT_Clear((unsigned int *)ArgList); /*0x5a4bdf*/
    return 1; /*0x5a4bf9*/
  }
  HIDWORD(v89) = 0xFFFFFFFF; /*0x5a4b2a*/
  BSStringT_Clear((unsigned int *)ArgList); /*0x5a4b32*/
  return 0; /*0x5a4ac5*/
}
