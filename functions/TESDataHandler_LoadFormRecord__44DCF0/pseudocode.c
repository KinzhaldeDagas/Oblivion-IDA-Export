signed int __userpurge TESDataHandler_LoadFormRecord@<eax>(
        TESWorldSpace **ecx0@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        Data *a1,
        char a6)
{
  TESObjectLAND *v6; // esi
  int RecordType; // ebx
  TESForm *formID; // eax
  UInt32 flags; // eax
  int v10; // eax
  UInt32 ChunkType; // eax
  char v13; // bl
  TESRoad *v14; // eax
  TESRoad *v15; // eax
  TESWorldSpace *v16; // ecx
  char v17; // bl
  TESForm *v18; // eax
  TESForm *v19; // eax
  TESWorldSpace *v20; // ecx
  bool v21; // zf
  const char *v22; // eax
  TESObjectCELL *v23; // eax
  TESWorldSpace **v24; // ebx
  char v25; // bl
  void *v26; // eax
  int v27; // ecx
  int v28; // ecx
  TESForm *v29; // eax
  TESForm *v30; // ecx
  TESForm *v31; // ebx
  TESFormVtbl *vtbl; // eax
  TESWorldSpace **v33; // eax
  TESFormVtbl *v34; // edx
  int v35; // eax
  const char *v36; // ebx
  int XCoordinate; // eax
  TESObjectLAND *v38; // eax
  TESForm *v39; // esi
  TESPathGrid *v40; // eax
  TESPathGrid *v41; // eax
  TESForm *v42; // eax
  EffectSetting *v43; // eax
  EffectSetting *v44; // esi
  TESWorldSpace *v45; // eax
  TESForm *v46; // esi
  TESForm *v47; // eax
  TESForm *v48; // esi
  TESTopicInfo *v49; // eax
  TESTopicInfo *v50; // eax
  TESForm *v51; // eax
  TESForm *v52; // esi
  TESForm *v53; // eax
  TESForm *Dynamic; // esi
  char type; // dl
  char v56; // cl
  char type_high; // dl
  int YCoordinate; // [esp-Ch] [ebp-44h]
  UInt32 v59; // [esp-8h] [ebp-40h]
  TESObjectCELL *v60; // [esp-4h] [ebp-3Ch]
  int v61[2]; // [esp+0h] [ebp-38h] BYREF
  UInt32 v62; // [esp+10h] [ebp-28h]
  char v63[4]; // [esp+14h] [ebp-24h] BYREF
  char ArgList[4]; // [esp+18h] [ebp-20h]
  UInt32 refID; // [esp+1Ch] [ebp-1Ch] BYREF
  char v66; // [esp+23h] [ebp-15h]
  TESWorldSpace **v67; // [esp+24h] [ebp-14h]
  char v68; // [esp+2Bh] [ebp-Dh]
  int v69; // [esp+34h] [ebp-4h]
  char v70[260]; // [esp+38h] [ebp+0h] BYREF

  v67 = ecx0;
  v68 = 1;
  v6 = 0;
  RecordType = TESFile_GetRecordType(a1);
  if ( !a6 || TESForm_IsFormIDBuiltin(a1->currentRecord.formID) )
  {
    formID = (TESForm *)a1->currentRecord.formID;
    if ( formID && (refID = 0, NiTMap_GetAt(&TESForm_FormIDMap, (int)formID, &refID)) )
    {
      v6 = (TESObjectLAND *)refID;
      if ( refID )
      {
        v10 = *(unsigned __int8 *)(refID + 4);
        if ( v10 != RecordType )
        {
          PrintError(
            "Form (%08X) in file \"%s\" has wrong type.\n\nShould be:\t%s\nIs:\t\t%s",
            a1->currentRecord.formID,
            a1->name,
            *(const char **)(0xC * v10 + 0xB05E04),
            *(const char **)(0xC * RecordType + 0xB05E04));
          return 0;
        }
      }
    }
    else
    {
      v6 = 0;
    }
  }
  flags = a1->currentRecord.flags;
  if ( (flags & 0x4000) != 0 )
  {
    a1->currentRecord.flags &= ~0x4000u;
    if ( !v6 )
    {
      PrintError("Partial Form (%08X) in file \"%s\" could not find base form.", a1->currentRecord.formID, a1->name);
      return 0;
    }
  }
  else if ( v6 )
  {
    if ( (flags & 0x20) == 0 )
    {
      (*(void (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v6 + 0x18))(v6);
      (*(void (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v6 + 0x14))(v6);
    }
  }
  switch ( RecordType )
  {
    case kFormType_TES4:
      ChunkType = TESFile_GetChunkType(a1);
      if ( !ChunkType )
        return 1;
      break;
    case kFormType_GMST:
      if ( TESFile_GetChunkType(a1) == 0x44494445 )
      {
        _alloca_();
        TESFile_GetChunkData(a1, (char *)v61, 0);
        (*(void (__thiscall **)(int *, Data *, int *))(GameSettingCollection + 0x24))(&GameSettingCollection, a1, v61);
      }
      return 1;
    case kFormType_Global:
    case kFormType_Class:
    case kFormType_Faction:
    case kFormType_Hair:
    case kFormType_Eyes:
    case kFormType_Race:
    case kFormType_Sound:
    case kFormType_Script:
    case kFormType_LandTexture:
    case kFormType_Enchantment:
    case kFormType_Spell:
    case kFormType_BirthSign:
    case kFormType_Weather:
    case kFormType_Climate:
    case kFormType_Region:
    case kFormType_Quest:
    case kFormType_Package:
    case kFormType_CombatStyle:
    case kFormType_LoadScreen:
    case kFormType_ANIO:
    case kFormType_Water:
    case kFormType_EffectShader:
      if ( v6 )
        goto LABEL_87;
      Dynamic = TESForm_CreateDynamic(RecordType);
      TESDataHandler_LoadForm(Dynamic, a1);
      TESDataHandler_AddForm(v67, a2, a3, a4, (unsigned __int8 *)Dynamic);
      return 1;
    case kFormType_Skill:
      if ( !v6 )
        return 1;
      v51 = (TESForm *)OblivionDynamicCast(
                         v6,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESSkill `RTTI Type Descriptor',
                         0);
      v52 = v51;
      if ( !v51 )
        return 1;
      TESSkill_ClearTESSkill((int)v51);
      TESDataHandler_LoadForm(v52, a1);
      return 1;
    case kFormType_Effect:
      if ( TESFile_GetChunkType(a1) != 0x44494445 )
        return 1;
      _alloca_();
      TESFile_GetChunkData(a1, (char *)v61, 0);
      v42 = (TESForm *)EffectSettingCollection_LookupByCodeString((int)v61);
      if ( v42 )
      {
        TESDataHandler_LoadForm(v42, a1);
        return 1;
      }
      else
      {
        v43 = (EffectSetting *)FormHeapAlloc(0xA8u);
        *(_DWORD *)ArgList = v43;
        v69 = 4;
        if ( v43 )
          v44 = EffectSetting::EffectSetting(v43);
        else
          v44 = 0;
        v69 = 0xFFFFFFFF;
        TESFile_InitializeFormFromRecord(a1, &v44->super, v61[0], v61[1]);
        BSSimpleList_PushFront(v67 + 0x22E, (int)v44);
        return 1;
      }
    case kFormType_Cell:
      v17 = 0;
      refID = (UInt32)v6;
      if ( !v6 )
      {
        v18 = (TESForm *)FormHeapAlloc(0x58u);
        *(_DWORD *)ArgList = v18;
        v69 = 1;
        if ( v18 )
          v19 = TESObjectCELL_constr(v18);
        else
          v19 = 0;
        v6 = (TESObjectLAND *)v19;
        v69 = 0xFFFFFFFF;
        refID = (UInt32)v19;
        v17 = 1;
      }
      TESDataHandler_LoadForm((TESForm *)v6, a1);
      if ( *((_BYTE *)v67 + 0xCD1) )
        (*(void (__thiscall **)(TESObjectLAND *, int))(*(_DWORD *)v6 + 0x90))(v6, 1);
      TESForm_SetIsFromMaster((TESForm *)v6, 1);
      if ( !v17 )
        goto LABEL_48;
      if ( TESObjectCELL_IsInterior((TESObjectCELL *)v6) )
      {
        sub_52ED80(v67 + 0x30, (unsigned int)v67[0x33], &refID);
        dword_B33A9C = (TESForm *)v6;
        return 1;
      }
      else
      {
        v20 = (TESWorldSpace *)dword_B33AA0;
        if ( !dword_B33AA0 )
        {
          v20 = v67[3];
          dword_B33AA0 = (int)v20;
        }
        if ( !sub_4EFEF0(v20, (int)v6) )
        {
          v21 = TESForm_GetQuestItem((TESForm *)v6) == 0;
          v22 = "Persistent ";
          if ( v21 )
            v22 = EmptyString;
          PrintError(
            "Error adding %scell (%08X) to world space (%08X). Cell will be destroyed.",
            v22,
            *((_DWORD *)v6 + 3),
            *(_DWORD *)(dword_B33AA0 + 0xC));
          (*(void (__thiscall **)(TESObjectLAND *, int))(*(_DWORD *)v6 + 0x10))(v6, 1);
          v6 = 0;
        }
LABEL_48:
        dword_B33A9C = (TESForm *)v6;
        return 1;
      }
    case kFormType_REFR:
    case kFormType_ACHR:
    case kFormType_ACRE:
      if ( !dword_B33A9C )
        return 0;
      if ( v6 )
      {
        (*(void (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v6 + 0x170))(v6);
        v23 = (TESObjectCELL *)(**((int (__thiscall ***)(int))v6 + 6))((int)v6 + 0x18);
        if ( v23 == (TESObjectCELL *)dword_B33A9C )
        {
          v68 = 0;
        }
        else if ( v23 )
        {
          sub_4CECD0(v23, (TESObjectREFR *)v6);
        }
      }
      else
      {
        v6 = (TESObjectLAND *)sub_4DB260(RecordType, 1);
      }
      if ( TESDataHandler_LoadForm((TESForm *)v6, a1) )
      {
        v25 = v68;
      }
      else
      {
        if ( !(*(int (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v6 + 0x170))(v6) )
          *((_BYTE *)v6 + 4) = RecordType;
        if ( TESForm_GetQuestItem(dword_B33A9C) )
          sub_4247B0((ExtraDataList *)((char *)v6 + 0x44), (BSExtraDataVtbl *)dword_B33A9C);
        else
          (*(void (__thiscall **)(TESObjectLAND *, TESForm *))(*(_DWORD *)v6 + 0x194))(v6, dword_B33A9C);
        v24 = v67 + 0x22E;
        if ( !sub_446C30((BSSimpleList_VoidPtr *)v67 + 0x117, v6) )
          BSSimpleList_PushFront(v24, (int)v6);
        v25 = 0;
        v26 = OblivionDynamicCast(
                v6,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                &MobileObject `RTTI Type Descriptor',
                0);
        if ( v26 )
          sub_674550((char)v70, a2, a3, a4, (int)v26, 3);
      }
      if ( (*(int (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v6 + 0x170))(v6) )
      {
        if ( v25 )
        {
          sub_4D35D0((TESObjectCELL *)dword_B33A9C, a2, a3, a4, (TESChildCELL *)v6);
          if ( (*((_DWORD *)v6 + 2) & 0x20) == 0 )
          {
            v27 = (*(int (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v6 + 0x170))(v6);
            (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 0x108))(v27);
          }
        }
        else if ( (*((_DWORD *)v6 + 2) & 0x20) != 0 )
        {
          v28 = (*(int (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v6 + 0x170))(v6);
          (*(void (__thiscall **)(int))(*(_DWORD *)v28 + 0x10C))(v28);
        }
        if ( SaveLoad_CurrentSavegame )
        {
          if ( (SaveLoad_CurrentSavegame->flags & 0x1000) != 0 )
          {
            if ( *((_DWORD *)v6 + 0xF) )
              (*(void (__thiscall **)(TESObjectLAND *, _DWORD))(*(_DWORD *)v6 + 0x150))(v6, 0);
          }
        }
        if ( TESObjectREFR_IsPersistent_((TESObjectREFR *)v6) && *(float *)&a1->version < dbl_A38538 )
        {
          v29 = (TESForm *)(*(int (__thiscall **)(TESObjectLAND *))(*(_DWORD *)v6 + 0x170))(v6);
          v30 = dword_B33A9C;
          v31 = v29;
          vtbl = dword_B33A9C->vtbl;
          refID = dword_B33A9C->member.refID;
          v33 = (TESWorldSpace **)vtbl->GetEditorName(v30);
          v34 = v31->vtbl;
          v67 = v33;
          v62 = v31->member.refID;
          v35 = (int)v34->GetEditorName(v31);
          *(_DWORD *)ArgList = *((_DWORD *)v6 + 3);
          v59 = refID;
          v36 = (const char *)v35;
          YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)dword_B33A9C);
          XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)dword_B33A9C);
          PrintError(
            "ref (%08X) to base object %s (%08X) in cell %s (%i, %i) (%08X) is persistent in the non-persistent file %s.",
            *(_DWORD *)ArgList,
            v36,
            v62,
            (const char *)v67,
            XCoordinate,
            YCoordinate,
            v59,
            a1->name);
          *((_DWORD *)v6 + 2) &= ~0x400u;
        }
      }
      return 1;
    case kFormType_PathGrid:
      if ( !dword_B33A9C )
      {
        PrintError("PathGrid not associated with cell.");
        return 0;
      }
      v39 = (TESForm *)sub_4AF170(dword_B33A9C);
      if ( !v39 )
      {
        v40 = (TESPathGrid *)FormHeapAlloc(0x54u);
        *(_DWORD *)ArgList = v40;
        v69 = 3;
        if ( v40 )
          v41 = TESPathGrid::TESPathGrid(v40);
        else
          v41 = 0;
        v69 = 0xFFFFFFFF;
        v39 = (TESForm *)v41;
      }
      sub_4A6D70(v39, (int)dword_B33A9C);
      sub_4C9B10(dword_B33A9C, (int)v39);
      TESDataHandler_LoadForm(v39, a1);
      return 1;
    case kFormType_WorldSpace:
      if ( v6 )
      {
        TESDataHandler_LoadForm((TESForm *)v6, a1);
        dword_B33AA0 = (int)v6;
        return 1;
      }
      else
      {
        v45 = (TESWorldSpace *)FormHeapAlloc(0xE0u);
        *(_DWORD *)ArgList = v45;
        v69 = 5;
        if ( v45 )
          v46 = (TESForm *)TESWorldSpace::TESWorldSpace(v45);
        else
          v46 = 0;
        v69 = 0xFFFFFFFF;
        TESDataHandler_LoadForm(v46, a1);
        BSSimpleList_PushBack(v67 + 3, (int)v46);
        dword_B33AA0 = (int)v46;
        return 1;
      }
    case kFormType_Land:
      if ( !dword_B33A9C )
        return 1;
      v6 = sub_4CE3C0((TESObjectCELL *)dword_B33A9C);
      if ( !v6 )
      {
        v38 = (TESObjectLAND *)FormHeapAlloc(0x28u);
        *(_DWORD *)ArgList = v38;
        v69 = 2;
        if ( v38 )
          v6 = TESObjectLAND::TESObjectLAND(v38);
        else
          v6 = 0;
        v60 = (TESObjectCELL *)dword_B33A9C;
        v69 = 0xFFFFFFFF;
        sub_4BFDC0(v6, v60);
        sub_4C9AE0((int)dword_B33A9C, (int)v6);
      }
      goto LABEL_87;
    case kFormType_Road:
      v13 = 0;
      if ( !v6 )
      {
        v14 = (TESRoad *)FormHeapAlloc(0x30u);
        *(_DWORD *)ArgList = v14;
        v69 = 0;
        if ( v14 )
          v15 = TESRoad::TESRoad(v14);
        else
          v15 = 0;
        v69 = 0xFFFFFFFF;
        v6 = v15;
        v13 = 1;
      }
      TESDataHandler_LoadForm((TESForm *)v6, a1);
      if ( v13 )
      {
        v16 = (TESWorldSpace *)dword_B33AA0;
        if ( !dword_B33AA0 )
        {
          v16 = v67[3];
          dword_B33AA0 = (int)v16;
        }
        sub_4EF100(v16, (int)v6);
        *((_DWORD *)v6 + 0xB) = dword_B33AA0;
      }
      return 1;
    case kFormType_Dialog:
      if ( v6 )
        goto LABEL_87;
      v47 = (TESForm *)FormHeapAlloc(0x3Cu);
      *(_DWORD *)ArgList = v47;
      v69 = 6;
      if ( v47 )
        v48 = sub_52FB40(v47, 0);
      else
        v48 = 0;
      v69 = 0xFFFFFFFF;
      TESDataHandler_LoadForm(v48, a1);
      BSSimpleList_PushBack(v67 + 0x1F, (int)v48);
      return 1;
    case kFormType_DialogInfo:
      if ( !v6 )
      {
        v49 = (TESTopicInfo *)FormHeapAlloc(0x38u);
        *(_DWORD *)ArgList = v49;
        v69 = 7;
        if ( v49 )
          v50 = TESTopicInfo::TESTopicInfo(v49, 0);
        else
          v50 = 0;
        v69 = 0xFFFFFFFF;
        v6 = (TESObjectLAND *)v50;
      }
      dword_B33AA4 = (int)v6;
      return (unsigned __int8)TESDataHandler_LoadForm((TESForm *)v6, a1);
    case kFormType_Idle:
      if ( v6 )
      {
LABEL_87:
        TESDataHandler_LoadForm((TESForm *)v6, a1);
        return 1;
      }
      else
      {
        v53 = TESForm_CreateDynamic(RecordType);
        TESDataHandler_LoadForm(v53, a1);
        return 1;
      }
    default:
      v66 = bDisableWarning_MESSAGES;
      bDisableWarning_MESSAGES = 1;
      if ( v6 )
        v68 = 0;
      else
        v6 = (TESObjectLAND *)TESForm_CreateDynamic(RecordType);
      if ( !v6 )
      {
        if ( a1->currentRecord.chunkInfo.type )
        {
          type = a1->currentRecord.chunkInfo.type;
          v56 = BYTE2(a1->currentRecord.chunkInfo.type);
          v70[1] = BYTE1(a1->currentRecord.chunkInfo.type);
          v70[0] = type;
          type_high = HIBYTE(a1->currentRecord.chunkInfo.type);
          v70[2] = v56;
          v70[3] = type_high;
          v70[4] = 0;
          PrintError("Unknown %s_ID in ConstructObject.", v70);
          bDisableWarning_MESSAGES = v66;
        }
        else
        {
          if ( !RecordType )
            PrintError("NO_FORM trying to load in ConstructObject.");
          bDisableWarning_MESSAGES = v66;
        }
        return 0;
      }
      bDisableWarning_MESSAGES = v66;
      if ( !TESDataHandler_LoadForm((TESForm *)v6, a1) )
      {
        (*(void (__thiscall **)(TESObjectLAND *, int))(*(_DWORD *)v6 + 0x10))(v6, 1);
        return 0;
      }
      if ( v68 )
        TESObjectListHead_AddObject(*v67, v6);
      return 1;
  }
  while ( ChunkType != DELE_ID )
  {
    TESFile_GetNextChunk(a1);
    ChunkType = TESFile_GetChunkType(a1);
    if ( !ChunkType )
      return 1;
  }
  TESFile_GetChunkData(a1, v63, 8u);
  sub_44FA50(a1, v63);
  return 1;
}
