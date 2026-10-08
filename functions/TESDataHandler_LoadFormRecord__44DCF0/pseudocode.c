// Verified TESDataHandler_LoadFormRecord behavior: when activeFileState.retainActiveFile is nonzero, newly loaded cells receive TESForm::SetFromActiveFile(1). This matches the flag's file-retention use; the flag's writer remains Unknown.
bool __thiscall TESDataHandler_LoadFormRecord(void *dataHandler, void *file, bool firstFileLowFormFilter)
{
  double v3; // st5
  double v4; // st6
  double v5; // st7
  TESObjectLAND *v7; // esi
  int RecordType; // ebx
  TESForm *v9; // eax
  int v10; // eax
  int v11; // eax
  UInt32 ChunkType; // eax
  char v14; // bl
  TESRoad *v15; // eax
  TESRoad *v16; // eax
  TESWorldSpace *v17; // ecx
  char v18; // bl
  TESForm *v19; // eax
  TESForm *v20; // eax
  TESWorldSpace *item; // ecx
  bool v22; // zf
  const char *v23; // eax
  TESObjectCELL *v24; // eax
  UInt8 *v25; // ebx
  char v26; // bl
  void *v27; // eax
  int v28; // ecx
  int v29; // ecx
  TESForm *v31; // eax
  TESForm *v32; // ecx
  TESForm *v33; // ebx
  TESFormVtbl *vtbl; // eax
  TESDataHandler *v35; // eax
  TESFormVtbl *v36; // edx
  int v37; // eax
  const char *v38; // ebx
  int XCoordinate; // eax
  TESObjectLAND *v40; // eax
  TESForm *p_base; // esi
  TESPathGrid *v42; // eax
  TESPathGrid *v43; // eax
  TESForm *v44; // eax
  EffectSetting *v45; // eax
  EffectSetting *v46; // esi
  TESWorldSpace *v47; // eax
  TESForm *v48; // esi
  TESTopic *v49; // eax
  TESTopic *v50; // esi
  TESTopicInfo *v51; // eax
  TESTopicInfo *v52; // eax
  TESSkill *v53; // eax
  TESForm *v54; // esi
  TESForm *v55; // eax
  TESForm *Dynamic; // esi
  char v57; // dl
  char v58; // cl
  char v59; // dl
  int YCoordinate; // [esp-Ch] [ebp-44h]
  UInt32 v61; // [esp-8h] [ebp-40h]
  TESObjectCELL *v62; // [esp-4h] [ebp-3Ch]
  int v63[2]; // [esp+0h] [ebp-38h] BYREF
  UInt32 v64; // [esp+10h] [ebp-28h]
  char v65[4]; // [esp+14h] [ebp-24h] BYREF
  char ArgList[4]; // [esp+18h] [ebp-20h]
  UInt32 refID; // [esp+1Ch] [ebp-1Ch] BYREF
  char v68; // [esp+23h] [ebp-15h]
  TESDataHandler *self; // [esp+24h] [ebp-14h]
  char v70; // [esp+2Bh] [ebp-Dh]
  int v71; // [esp+34h] [ebp-4h]
  char v72[260]; // [esp+38h] [ebp+0h] BYREF

  _EDI = file; /*0x44dd29*/
  self = (TESDataHandler *)dataHandler; /*0x44dd2f*/
  v70 = 1; /*0x44dd34*/
  v7 = 0; /*0x44dd3d*/
  RecordType = TESFile_GetRecordType((Data *)file); /*0x44dd46*/
  if ( !firstFileLowFormFilter || TESForm_IsFormIDBuiltin(*((_DWORD *)file + 0x92)) ) /*0x44dd51*/
  {
    v9 = *((TESForm **)file + 0x92); /*0x44dd5d*/
    if ( v9 && (refID = 0, NiTMap_GetAt(&TESForm_FormIDMap, (int)v9, &refID)) ) /*0x44ddb6*/
    {
      v7 = (TESObjectLAND *)refID; /*0x44ddbf*/
      if ( refID ) /*0x44ddc4*/
      {
        v11 = *(unsigned __int8 *)(refID + 4); /*0x44ddc6*/
        if ( v11 != RecordType ) /*0x44ddcc*/
        {
          PrintError( /*0x44ddf4*/
            "Form (%08X) in file \"%s\" has wrong type.\n\nShould be:\t%s\nIs:\t\t%s",
            *((_DWORD *)file + 0x92),
            (const char *)file + 0x1C,
            *(const char **)(0xC * v11 + 0xB05E04),
            *(const char **)(0xC * RecordType + 0xB05E04));
          return 0; /*0x44ddfc*/
        }
      }
    }
    else
    {
      v7 = 0; /*0x44dd67*/
    }
  }
  v10 = *((_DWORD *)file + 0x91); /*0x44dd69*/
  if ( (v10 & 0x4000) != 0 )                    // PARTIAL 0x4000 resolves an existing form and skips full Clear/Initialize. INFO static fields can inherit, but lazy runtime responses still use the winning loader invocation's stored record offset. /*0x44dd74*/
  {
    *((_DWORD *)file + 0x91) &= ~0x4000u; /*0x44dd7a*/
    if ( !v7 ) /*0x44dd86*/
    {
      PrintError( /*0x44dd9c*/
        "Partial Form (%08X) in file \"%s\" could not find base form.",
        *((_DWORD *)file + 0x92),
        (const char *)file + 0x1C);
      return 0; /*0x44e672*/
    }
  }
  else if ( v7 )                                // Only an existing non-partial, non-DELE form takes the reset path. Valid partial records skip this branch and replay their chunks over inherited in-memory state. /*0x44de03*/
  {
    if ( (v10 & 0x20) == 0 ) /*0x44de07*/
    {
      (*(void (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v7 + 0x18))(v7);// Virtual +0x18 is Script_ClearDataAndComponents for SCPT: frees data/text and clears variable/reference lists before a full replacement load. /*0x44de10*/
      (*(void (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v7 + 0x14))(v7);// Virtual +0x14 is Script_InitializeDataAndComponents for SCPT: zeros ScriptInfo, text/data pointers, and runtime fields after a full replacement clear. Partial loads do not call it. /*0x44de19*/
    }
  }
  switch ( RecordType ) /*0x44de2e*/
  {                                             // Loader dispatch includes case 55/TLOD in the generic object path rather than a special constructor.
    case kFormType_TES4: /*0x44de2e*/
      ChunkType = TESFile_GetChunkType((Data *)file); /*0x44de37*/
      if ( !ChunkType ) /*0x44de3e*/
        return 1; /*0x44de3e*/
      break; /*0x44de3e*/
    case kFormType_GMST: /*0x44de2e*/
      if ( TESFile_GetChunkType((Data *)file) == 0x44494445 ) /*0x44e332*/
      {
        _alloca_(v63[0]); /*0x44e33a*/
        TESFile_GetChunkData((Data *)file, (char *)v63, 0); /*0x44e346*/
        (*(void (__thiscall **)(float *, void *, int *))(LODWORD(flt_B35464[1]) + 0x24))(&flt_B35464[1], file, v63); /*0x44e35b*/
      }
      return 1; /*0x44e362*/
    case kFormType_Global: /*0x44de2e*/
    case kFormType_Class: /*0x44de2e*/
    case kFormType_Faction: /*0x44de2e*/
    case kFormType_Hair: /*0x44de2e*/
    case kFormType_Eyes: /*0x44de2e*/
    case kFormType_Race: /*0x44de2e*/
    case kFormType_Sound: /*0x44de2e*/
    case kFormType_Script: /*0x44de2e*/
    case kFormType_LandTexture: /*0x44de2e*/
    case kFormType_Enchantment: /*0x44de2e*/
    case kFormType_Spell: /*0x44de2e*/
    case kFormType_BirthSign: /*0x44de2e*/
    case kFormType_Weather: /*0x44de2e*/
    case kFormType_Climate: /*0x44de2e*/
    case kFormType_Region: /*0x44de2e*/
    case kFormType_Quest: /*0x44de2e*/
    case kFormType_Package: /*0x44de2e*/
    case kFormType_CombatStyle: /*0x44de2e*/
    case kFormType_LoadScreen: /*0x44de2e*/
    case kFormType_ANIO: /*0x44de2e*/
    case kFormType_Water: /*0x44de2e*/
    case kFormType_EffectShader: /*0x44de2e*/
      if ( v7 ) /*0x44e57a*/
        goto LABEL_87; /*0x44e57a*/
      Dynamic = (TESForm *)TESForm_CreateDynamic(RecordType); /*0x44e586*/
      TESDataHandler_LoadForm(Dynamic, (Data *)file); /*0x44e58a*/
      TESDataHandler_AddForm(self, v3, v4, v5, Dynamic); /*0x44e596*/
      return 1; /*0x44e5a0*/
    case kFormType_Skill: /*0x44de2e*/
      if ( !v7 ) /*0x44e514*/
        return 1; /*0x44e514*/
      v53 = (TESSkill *)OblivionDynamicCast( /*0x44e529*/
                          v7,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSkill `RTTI Type Descriptor',
                          0);
      v54 = (TESForm *)v53; /*0x44e52e*/
      if ( !v53 ) /*0x44e535*/
        return 1; /*0x44e535*/
      TESSkill_ClearDataAndComponents(v53); /*0x44e53d*/
      TESDataHandler_LoadForm(v54, (Data *)file); /*0x44e544*/
      return 1; /*0x44e551*/
    case kFormType_Effect: /*0x44de2e*/
      if ( TESFile_GetChunkType((Data *)file) != 0x44494445 ) /*0x44e373*/
        return 1; /*0x44e373*/
      _alloca_(v63[0]); /*0x44e37f*/
      TESFile_GetChunkData((Data *)file, (char *)v63, 0); /*0x44e38b*/
      v44 = (TESForm *)EffectSettingCollection_LookupByCodeString((int)v63); /*0x44e391*/
      if ( v44 ) /*0x44e39b*/
      {
        TESDataHandler_LoadForm(v44, (Data *)file); /*0x44e39f*/
        return 1; /*0x44e3a7*/
      }
      else
      {
        v45 = (EffectSetting *)FormHeapAlloc(0xA8u); /*0x44e3b6*/
        *(_DWORD *)ArgList = v45; /*0x44e3be*/
        v71 = 4; /*0x44e3c3*/
        if ( v45 ) /*0x44e3ca*/
          v46 = EffectSetting::EffectSetting(v45); /*0x44e3d3*/
        else
          v46 = 0; /*0x44e3d7*/
        v71 = 0xFFFFFFFF; /*0x44e3dc*/
        TESFile_InitializeFormFromRecord((Data *)file, &v46->super, v63[0], v63[1]); /*0x44e3e3*/
        BSSimpleList_PushFront(&self->activeFileState.unknownBeforeActiveFileState[0x7F8], (int)v46); /*0x44e3f2*/
        return 1; /*0x44e3f7*/
      }
    case kFormType_Cell: /*0x44de2e*/
      v18 = 0; /*0x44def0*/
      refID = (UInt32)v7;                       // Independent reuse precedent for MEF v32: primary TESDataHandler loader tests ESI, allocates only when absent, then calls TESDataHandler_LoadForm on the existing form. /*0x44def4*/
      if ( !v7 ) /*0x44def7*/
      {
        v19 = (TESForm *)FormHeapAlloc(0x58u); /*0x44defb*/
        *(_DWORD *)ArgList = v19; /*0x44df03*/
        v71 = 1; /*0x44df08*/
        if ( v19 ) /*0x44df0f*/
          v20 = TESObjectCELL_constr(v19); /*0x44df13*/
        else
          v20 = 0; /*0x44df1a*/
        v7 = (TESObjectLAND *)v20; /*0x44df1c*/
        v71 = 0xFFFFFFFF; /*0x44df1e*/
        refID = (UInt32)v20; /*0x44df25*/
        v18 = 1; /*0x44df28*/
      }
      TESDataHandler_LoadForm((TESForm *)v7, (Data *)file); /*0x44df2c*/
      if ( self->activeFileState.retainActiveFile ) /*0x44df37*/
        (*(void (__thiscall **)(TESObjectLAND *, int))(*(_DWORD *)v7 + 0x90))(v7, 1); /*0x44df4c*/
      TESForm_SetIsFromMaster((TESForm *)v7, 1); /*0x44df52*/
      if ( !v18 ) /*0x44df59*/
        goto LABEL_48; /*0x44df59*/
      if ( TESObjectCELL_IsInterior((TESObjectCELL *)v7) ) /*0x44df61*/
      {
        sub_52ED80( /*0x44df7e*/
          (unsigned int *)self->activeFileState.unknownBeforeActiveFileState,
          *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0xC],
          &refID);
        unk_B33A9C = (TESForm *)v7; /*0x44df83*/
        return 1; /*0x44df89*/
      }
      else
      {
        item = (TESWorldSpace *)unk_B33AA0; /*0x44df93*/
        if ( !unk_B33AA0 ) /*0x44df93*/
        {
          item = (TESWorldSpace *)self->worldspaceList.item; /*0x44dfa0*/
          unk_B33AA0 = (int)item; /*0x44dfa3*/
        }
        if ( !TESWorldSpace_RegisterExteriorCell(item, (TESObjectCELL *)v7) ) /*0x44dfaa*/
        {
          v22 = !TESForm_GetQuestItem((TESForm *)v7); /*0x44dfba*/
          v23 = "Persistent "; /*0x44dfbc*/
          if ( v22 ) /*0x44dfc1*/
            v23 = EmptyString; /*0x44dfc3*/
          PrintError( /*0x44dfdc*/
            "Error adding %scell (%08X) to world space (%08X). Cell will be destroyed.",
            v23,
            *((_DWORD *)v7 + 3),
            *(_DWORD *)(unk_B33AA0 + 0xC));
          (*(void (__thiscall **)(TESObjectLAND *, int))(*(_DWORD *)v7 + 0x10))(v7, 1); /*0x44dfed*/
          v7 = 0; /*0x44dfef*/
        }
LABEL_48:
        unk_B33A9C = (TESForm *)v7; /*0x44dff1*/
        return 1; /*0x44dff7*/
      }
    case kFormType_REFR: /*0x44de2e*/
    case kFormType_ACHR: /*0x44de2e*/
    case kFormType_ACRE: /*0x44de2e*/
      if ( !unk_B33A9C ) /*0x44e008*/
        return 0;                               // Missing current CELL rejects serialized REFR/ACHR/ACRE (returns false); these records require CELL child context. /*0x44e008*/
      if ( v7 ) /*0x44e010*/
      {
        (*(void (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v7 + 0x170))(v7); /*0x44e01c*/
        v24 = (TESObjectCELL *)(**((int (__thiscall ***)(int))v7 + 6))((int)v7 + 0x18); /*0x44e026*/
        if ( v24 == (TESObjectCELL *)unk_B33A9C ) /*0x44e02e*/
        {
          v70 = 0; /*0x44e030*/
        }
        else if ( v24 ) /*0x44e038*/
        {
          TESObjectCELL_RemoveReference(v24, (TESObjectREFR *)v7); /*0x44e03d*/
        }
      }
      else
      {
        v7 = (TESObjectLAND *)sub_4DB260(RecordType, 1); /*0x44e04f*/
      }
      if ( TESDataHandler_LoadForm((TESForm *)v7, (Data *)file) ) /*0x44e053*/
      {
        v26 = v70; /*0x44e0f1*/
      }
      else
      {
        if ( !(*(int (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v7 + 0x170))(v7) ) /*0x44e06d*/
          *((_BYTE *)v7 + 4) = RecordType; /*0x44e073*/
        if ( TESForm_GetQuestItem(unk_B33A9C) ) /*0x44e07c*/
          sub_4247B0((ExtraDataList *)((char *)v7 + 0x44), (BSExtraDataVtbl *)unk_B33A9C); /*0x44e08f*/
        else
          (*(void (__thiscall **)(TESObjectLAND *, TESForm *))(*(_DWORD *)v7 + 0x194))(v7, unk_B33A9C); /*0x44e0a6*/
        v25 = &self->activeFileState.unknownBeforeActiveFileState[0x7F8]; /*0x44e0ab*/
        if ( !BSSimpleList::Contains( /*0x44e0b4*/
                (BSSimpleList_VoidPtr *)&self->activeFileState.unknownBeforeActiveFileState[0x7F8],
                v7) )
          BSSimpleList_PushFront(v25, (int)v7); /*0x44e0c0*/
        v26 = 0; /*0x44e0d4*/
        v27 = OblivionDynamicCast( /*0x44e0d6*/
                v7,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                &MobileObject `RTTI Type Descriptor',
                0);
        if ( v27 ) /*0x44e0e0*/
          sub_674550((int)v27, 3); /*0x44e0ea*/
      }
      if ( (*(int (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v7 + 0x170))(v7) ) /*0x44e0fe*/
      {
        if ( v26 ) /*0x44e10a*/
        {
          TESObjectCELL_AddReference((TESObjectCELL *)unk_B33A9C, (TESObjectREFR *)v7); /*0x44e113*/
          if ( (*((_DWORD *)v7 + 2) & 0x20) == 0 ) /*0x44e120*/
          {
            v28 = (*(int (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v7 + 0x170))(v7); /*0x44e130*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v28 + 0x108))(v28); /*0x44e138*/
          }
        }
        else if ( (*((_DWORD *)v7 + 2) & 0x20) != 0 ) /*0x44e143*/
        {
          v29 = (*(int (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v7 + 0x170))(v7); /*0x44e153*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 0x10C))(v29); /*0x44e15b*/
        }
        if ( g_TESSaveLoadGame ) /*0x44e15d*/
        {
          if ( (g_TESSaveLoadGame->flags & 0x1000) != 0 ) /*0x44e16f*/
          {
            if ( *((_DWORD *)v7 + 0xF) ) /*0x44e171*/
              (*(void (__thiscall **)(TESObjectLAND *, _DWORD))(*(_DWORD *)v7 + 0x150))(v7, 0); /*0x44e183*/
          }
        }
        if ( TESObjectREFR_IsPersistent((TESObjectREFR *)v7) ) /*0x44e187*/
        {
          __asm /*0x44e194*/
          {
            fld     dword ptr [edi+3D0h]
            fcomp   qword ptr ds:0A38538h
            fnstsw  ax
          }
          if ( !__SETP__(HIBYTE(_AX) & 5, 0) ) /*0x44e1a5*/
          {
            v31 = (TESForm *)(*(int (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v7 + 0x170))(v7); /*0x44e1b5*/
            v32 = unk_B33A9C; /*0x44e1b7*/
            v33 = v31; /*0x44e1c0*/
            vtbl = unk_B33A9C->vtbl; /*0x44e1c2*/
            refID = unk_B33A9C->member.refID; /*0x44e1c4*/
            v35 = (TESDataHandler *)vtbl->GetEditorName(v32); /*0x44e1cd*/
            v36 = v33->vtbl; /*0x44e1cf*/
            self = v35; /*0x44e1d1*/
            v64 = v33->member.refID; /*0x44e1d7*/
            v37 = (int)v36->GetEditorName(v33); /*0x44e1e2*/
            *(_DWORD *)ArgList = *((_DWORD *)v7 + 3); /*0x44e1ee*/
            v61 = refID; /*0x44e1f7*/
            v38 = (const char *)v37; /*0x44e1f8*/
            YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)unk_B33A9C); /*0x44e205*/
            XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)unk_B33A9C); /*0x44e206*/
            PrintError( /*0x44e21e*/
              "ref (%08X) to base object %s (%08X) in cell %s (%i, %i) (%08X) is persistent in the non-persistent file %s.",
              *(_DWORD *)ArgList,
              v38,
              v64,
              (const char *)self,
              XCoordinate,
              YCoordinate,
              v61,
              (const char *)file + 0x1C);
            *((_DWORD *)v7 + 2) &= ~0x400u; /*0x44e226*/
          }
        }
      }
      return 1; /*0x44e232*/
    case kFormType_PathGrid: /*0x44de2e*/
      if ( !unk_B33A9C )                        // Missing current CELL is fatal for PGRD: log 'PathGrid not associated with cell.' and return false at 0x44E2BC. /*0x44e2a5*/
      {
        PrintError("PathGrid not associated with cell."); /*0x44e2b4*/
        return 0; /*0x44e2bc*/
      }
      p_base = (TESForm *)sub_4AF170(unk_B33A9C); /*0x44e2c6*/
      if ( !p_base ) /*0x44e2ca*/
      {
        v42 = (TESPathGrid *)FormHeapAlloc(0x54u); /*0x44e2ce*/
        *(_DWORD *)ArgList = v42; /*0x44e2d6*/
        v71 = 3; /*0x44e2db*/
        if ( v42 ) /*0x44e2e2*/
          v43 = TESPathGrid_ctor(v42); /*0x44e2e6*/
        else
          v43 = 0; /*0x44e2ed*/
        v71 = 0xFFFFFFFF; /*0x44e2ef*/
        p_base = &v43->base; /*0x44e2f6*/
      }
      sub_4A6D70(p_base, (int)unk_B33A9C); /*0x44e301*/
      sub_4C9B10(unk_B33A9C, (int)p_base); /*0x44e30d*/
      TESDataHandler_LoadForm(p_base, (Data *)file); /*0x44e314*/
      return 1; /*0x44e321*/
    case kFormType_WorldSpace: /*0x44de2e*/
      if ( v7 ) /*0x44e403*/
      {
        TESDataHandler_LoadForm((TESForm *)v7, (Data *)file); /*0x44e45c*/
        unk_B33AA0 = (int)v7; /*0x44e464*/
        return 1; /*0x44e46a*/
      }
      else
      {
        v47 = (TESWorldSpace *)FormHeapAlloc(0xE0u); /*0x44e40a*/
        *(_DWORD *)ArgList = v47; /*0x44e412*/
        v71 = 5; /*0x44e417*/
        if ( v47 ) /*0x44e41e*/
          v48 = (TESForm *)TESWorldSpace::TESWorldSpace(v47); /*0x44e427*/
        else
          v48 = 0; /*0x44e42b*/
        v71 = 0xFFFFFFFF; /*0x44e42f*/
        TESDataHandler_LoadForm(v48, (Data *)file); /*0x44e436*/
        BSSimpleList_PushBack(&self->worldspaceList.item, (int)v48); /*0x44e445*/
        unk_B33AA0 = (int)v48; /*0x44e44a*/
        return 1; /*0x44e450*/
      }
    case kFormType_Land: /*0x44de2e*/
      if ( !unk_B33A9C ) /*0x44e23f*/
        return 1;                               // Missing current CELL is non-fatal for LAND: return true immediately, skip the LAND payload, and continue loading. /*0x44e23f*/
      v7 = sub_4CE3C0((TESObjectCELL *)unk_B33A9C); /*0x44e246*/
      if ( !v7 ) /*0x44e24a*/
      {
        v40 = (TESObjectLAND *)FormHeapAlloc(0x28u); /*0x44e24e*/
        *(_DWORD *)ArgList = v40; /*0x44e256*/
        v71 = 2; /*0x44e25b*/
        if ( v40 ) /*0x44e262*/
          v7 = TESObjectLAND::TESObjectLAND(v40); /*0x44e26b*/
        else
          v7 = 0; /*0x44e26f*/
        v62 = (TESObjectCELL *)unk_B33A9C; /*0x44e276*/
        v71 = 0xFFFFFFFF; /*0x44e279*/
        sub_4BFDC0(v7, v62); /*0x44e280*/
        sub_4C9AE0((int)unk_B33A9C, (int)v7); /*0x44e28c*/
      }
      goto LABEL_87; /*0x44e28c*/
    case kFormType_Road: /*0x44de2e*/
      v14 = 0;                                  // Verified ROAD load path: form type 0x38 allocates 0x30 bytes and constructs TESRoad if not already present, loads its record chunks, attaches it to the current/fallback WorldSpace through TESWorldSpace_SetRoad, then sets TESRoad+0x2C to that owning WorldSpace. The form-type factory and WorldSpace ownership lifecycle corroborate the 0x54 road field. /*0x44de83*/
      if ( !v7 ) /*0x44de87*/
      {
        v15 = (TESRoad *)FormHeapAlloc(0x30u); /*0x44de8b*/
        *(_DWORD *)ArgList = v15; /*0x44de93*/
        v71 = 0; /*0x44de98*/
        if ( v15 ) /*0x44de9b*/
          v16 = TESRoad_ctor(v15); /*0x44de9f*/
        else
          v16 = 0; /*0x44dea6*/
        v71 = 0xFFFFFFFF; /*0x44dea8*/
        v7 = (TESObjectLAND *)v16; /*0x44deaf*/
        v14 = 1; /*0x44deb1*/
      }
      TESDataHandler_LoadForm((TESForm *)v7, (Data *)file); /*0x44deb5*/
      if ( v14 ) /*0x44debf*/
      {
        v17 = (TESWorldSpace *)unk_B33AA0; /*0x44dec1*/
        if ( !unk_B33AA0 ) /*0x44dec1*/
        {
          v17 = (TESWorldSpace *)self->worldspaceList.item; /*0x44dece*/
          unk_B33AA0 = (int)v17; /*0x44ded1*/
        }
        TESWorldSpace_SetRoad(v17, (TESRoad *)v7); /*0x44ded8*/
        *((_DWORD *)v7 + 0xB) = unk_B33AA0; /*0x44dee3*/
      }
      return 1; /*0x44deeb*/
    case kFormType_Dialog: /*0x44de2e*/
      if ( v7 ) /*0x44e476*/
        goto LABEL_87; /*0x44e476*/
      v49 = (TESTopic *)FormHeapAlloc(0x3Cu); /*0x44e47e*/
      *(_DWORD *)ArgList = v49; /*0x44e486*/
      v71 = 6; /*0x44e48b*/
      if ( v49 ) /*0x44e492*/
        v50 = TESTopic::TESTopic(v49, DialogueType_Topic);// The runtime DIAL/type 57 allocation path creates TESTopic with constructor argument zero. The DATA stream then writes directly into topicType through TESTopic::LoadForm 0x5301E0. /*0x44e49c*/
      else
        v50 = 0; /*0x44e4a0*/
      v71 = 0xFFFFFFFF; /*0x44e4a4*/
      TESDataHandler_LoadForm((TESForm *)v50, (Data *)file); /*0x44e4ab*/
      BSSimpleList_PushBack(self->unknown7C, (int)v50); /*0x44e4ba*/
      return 1; /*0x44e4c4*/
    case kFormType_DialogInfo: /*0x44de2e*/
      if ( !v7 )                                // INFO dispatch reuses an existing TESTopicInfo (including a valid partial base) or allocates only when absent. /*0x44e4cb*/
      {
        v51 = (TESTopicInfo *)FormHeapAlloc(0x38u); /*0x44e4cf*/
        *(_DWORD *)ArgList = v51; /*0x44e4d7*/
        v71 = 7; /*0x44e4dc*/
        if ( v51 ) /*0x44e4e3*/
          v52 = TESTopicInfo::TESTopicInfo(v51, 0); /*0x44e4e8*/
        else
          v52 = 0; /*0x44e4ef*/
        v71 = 0xFFFFFFFF; /*0x44e4f1*/
        v7 = (TESObjectLAND *)v52; /*0x44e4f8*/
      }
      unk_B33AA4 = (int)v7; /*0x44e4fc*/
      return TESDataHandler_LoadForm((TESForm *)v7, (Data *)file);// Every INFO invocation calls TESTopicInfo_LoadForm; its +0x34 source offset is therefore updated even when a partial bypassed component reset. /*0x44e50d*/
    case kFormType_Idle: /*0x44de2e*/
      if ( v7 ) /*0x44e558*/
      {
LABEL_87:
        TESDataHandler_LoadForm((TESForm *)v7, (Data *)file);// Existing generic forms including SCPT reach their LoadForm directly. When PARTIAL selected the existing form above, no derived reset occurred: omitted header/blobs inherit; present SCHR/SCDA replace/overlay; SLSD and SCRO/SCRV append. /*0x44e291*/
        return 1; /*0x44e29b*/
      }
      else
      {
        v55 = (TESForm *)TESForm_CreateDynamic(RecordType); /*0x44e55f*/
        TESDataHandler_LoadForm(v55, (Data *)file); /*0x44e566*/
        return 1; /*0x44e56e*/
      }
    default:
      v68 = bDisableWarning_MESSAGES;           // Generic serialized-record path includes form type 55/TLOD. /*0x44e5ad*/
      bDisableWarning_MESSAGES = 1; /*0x44e5b0*/
      if ( v7 ) /*0x44e5b7*/
        v70 = 0; /*0x44e5b9*/
      else
        v7 = (TESObjectLAND *)TESForm_CreateDynamic(RecordType);// TESForm_CreateDynamic returns null for TLOD/0x37 because the runtime factory explicitly defaults case 55. /*0x44e5c8*/
      if ( !v7 )                                // Null TLOD factory result enters the Unknown %s_ID failure path; serialized TLOD is rejected. /*0x44e5cc*/
      {
        if ( *((_DWORD *)file + 0x8F) ) /*0x44e5ce*/
        {
          v57 = *((_BYTE *)file + 0x23C); /*0x44e5d6*/
          v58 = *((_BYTE *)file + 0x23E); /*0x44e5e3*/
          v72[1] = *((_BYTE *)file + 0x23D); /*0x44e5e9*/
          v72[0] = v57; /*0x44e5ec*/
          v59 = *((_BYTE *)file + 0x23F); /*0x44e5ef*/
          v72[2] = v58; /*0x44e5ff*/
          v72[3] = v59; /*0x44e602*/
          v72[4] = 0; /*0x44e605*/
          PrintError("Unknown %s_ID in ConstructObject.", v72); /*0x44e609*/
          bDisableWarning_MESSAGES = v68; /*0x44e614*/
        }
        else
        {
          if ( !RecordType ) /*0x44e61e*/
            PrintError("NO_FORM trying to load in ConstructObject."); /*0x44e625*/
          bDisableWarning_MESSAGES = v68; /*0x44e630*/
        }
        return 0; /*0x44e61a*/
      }
      bDisableWarning_MESSAGES = v68; /*0x44e63d*/
      if ( !TESDataHandler_LoadForm((TESForm *)v7, (Data *)file) ) /*0x44e64d*/
      {
        (*(void (__thiscall **)(TESObjectLAND *, int))(*(_DWORD *)v7 + 0x10))(v7, 1); /*0x44e670*/
        return 0; /*0x44e670*/
      }
      if ( v70 ) /*0x44e653*/
        TESObjectListHead_AddObject(self->objectList, v7); /*0x44e65b*/
      return 1; /*0x44e665*/
  }
  while ( ChunkType != DELE_ID ) /*0x44de47*/
  {
    TESFile_GetNextChunk((Data *)file); /*0x44de49*/
    ChunkType = TESFile_GetChunkType((Data *)file); /*0x44de50*/
    if ( !ChunkType ) /*0x44de57*/
      return 1; /*0x44de5e*/
  }
  TESFile_GetChunkData((Data *)file, v65, 8u); /*0x44de69*/
  sub_44FA50(file, v65); /*0x44de74*/
  return 1; /*0x44e677*/
}
