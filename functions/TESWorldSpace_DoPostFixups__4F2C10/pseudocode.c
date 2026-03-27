void __thiscall TESWorldSpace::DoPostFixups(TESWorldSpace *this)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax
  TESClimate *v4; // edi
  Data *v5; // eax
  TESForm *v6; // eax
  TESWaterForm *v7; // edi
  Data *v8; // eax
  TESForm *v9; // eax
  TESWorldSpace *v10; // edi
  NiTMap_TESCELL *cellMap; // edx
  UInt32 m_numBuckets; // ecx
  UInt32 v13; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edi
  NiTMap_Entry_TESCELL **v15; // edx
  NiTMap_Entry_TESCELL *v16; // eax
  NiTMap_TESCELL *v17; // ecx
  TESObjectCELL *unk034; // ecx
  Data *v19; // eax
  Data *v20; // eax
  Data *v21; // edi
  int v22; // ebx
  unsigned int v23; // ebx
  int v24; // ebp
  unsigned int v25; // ebp
  const char *v26; // eax
  int v27; // ebp
  void *v28; // ebx
  Data::FormInfo *p_currentRecord; // ebp
  UInt32 type; // eax
  char v31; // cl
  bool v32; // zf
  char v33; // bl
  UInt32 i; // eax
  int v35; // eax
  int v36; // eax
  int v37; // edi
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  Data *v41; // eax
  TESWorldSpace *v42; // eax
  int v43; // ebp
  int IndexForCellCoord; // eax
  TESForm *v45; // edi
  UInt32 v46; // ecx
  TESForm *v47; // eax
  const char *v48; // eax
  const char *v49; // [esp-4h] [ebp-48h]
  const char *v50; // [esp-4h] [ebp-48h]
  const char *v51; // [esp-4h] [ebp-48h]
  UInt32 refID; // [esp-4h] [ebp-48h]
  int v53; // [esp-4h] [ebp-48h]
  char v54; // [esp+1Bh] [ebp-29h]
  TESClimate *a1; // [esp+1Ch] [ebp-28h] BYREF
  TESWaterForm *WaterForm; // [esp+1Ch] [ebp-28h] SPLIT BYREF
  TESWorldSpace *parentWorldspace; // [esp+1Ch] [ebp-28h] SPLIT BYREF
  void *v58; // [esp+20h] [ebp-24h] BYREF
  int v59; // [esp+24h] [ebp-20h]
  float v60; // [esp+28h] [ebp-1Ch] BYREF
  int a2; // [esp+2Ch] [ebp-18h] BYREF
  int a3; // [esp+30h] [ebp-14h]
  unsigned int v63; // [esp+40h] [ebp-4h]

  if ( (this->super.flags & kFormFlags_Linked) == 0 )
  {
    a1 = this->climate;
    if ( a1 )
    {
      OverrideFile = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile);
      v3 = TESForm_LookupByFormID((UInt32)a1);
      v4 = (TESClimate *)OblivionDynamicCast(
                           v3,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &TESClimate `RTTI Type Descriptor',
                           0);
      if ( !v4 )
      {
        if ( TESForm::GetEditorNameLen((TESForm *)this) )
        {
          v49 = this->vtbl->GetEditorName(this);
          PrintError("Unable to find climate (%08X) on owner worldspace \"%s\".", a1, v49);
        }
        else
        {
          PrintError("Unable to find climate (%08X) on owner worldspace (%08X).", a1, this->super.refID);
        }
      }
      this->climate = v4;
    }
    WaterForm = this->WaterForm;
    if ( WaterForm )
    {
      v5 = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)&WaterForm, v5);
      v6 = TESForm_LookupByFormID((UInt32)WaterForm);
      v7 = (TESWaterForm *)OblivionDynamicCast(
                             v6,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESWaterForm `RTTI Type Descriptor',
                             0);
      if ( !v7 )
      {
        if ( TESForm::GetEditorNameLen((TESForm *)this) )
        {
          v50 = this->vtbl->GetEditorName(this);
          PrintError("Unable to find water type (%08X) on owner worldspace \"%s\".", WaterForm, v50);
        }
        else
        {
          PrintError("Unable to find water type (%08X) on owner worldspace (%08X).", WaterForm, this->super.refID);
        }
      }
      this->WaterForm = v7;
    }
    parentWorldspace = this->parentWorldspace;
    if ( parentWorldspace )
    {
      v8 = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)&parentWorldspace, v8);
      v9 = TESForm_LookupByFormID((UInt32)parentWorldspace);
      v10 = (TESWorldSpace *)OblivionDynamicCast(
                               v9,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESWorldSpace `RTTI Type Descriptor',
                               0);
      if ( !v10 )
      {
        if ( TESForm::GetEditorNameLen((TESForm *)this) )
        {
          v51 = this->vtbl->GetEditorName(this);
          PrintError("Unable to find landscape world (%08X) on owner worldspace \"%s\".", parentWorldspace, v51);
        }
        else
        {
          PrintError(
            "Unable to find landscape world (%08X) on owner worldspace (%08X).",
            parentWorldspace,
            this->super.refID);
        }
      }
      this->parentWorldspace = v10;
    }
    TESForm_SetIsLinked((TESForm *)this, 1);
  }
  cellMap = this->cellMap;
  m_numBuckets = cellMap->m_numBuckets;
  v13 = 0;
  if ( m_numBuckets )
  {
    m_buckets = cellMap->m_buckets;
    v15 = m_buckets;
    while ( !*v15 )
    {
      ++v13;
      ++v15;
      if ( v13 >= m_numBuckets )
        goto LABEL_25;
    }
    v16 = m_buckets[v13];
  }
  else
  {
LABEL_25:
    v16 = 0;
  }
  v58 = v16;
  while ( v58 )
  {
    v17 = this->cellMap;
    parentWorldspace = 0;
    sub_452600(v17, (NiTMap_Entry_TESCELL **)&v58, (void **)&v60, (TESObjectCELL **)&parentWorldspace);
    if ( parentWorldspace )
      parentWorldspace->vtbl->DoPostFixup((TESForm *)parentWorldspace);
  }
  unk034 = this->unk034;
  if ( unk034 )
    unk034->vtbl->DoPostFixup((TESForm *)unk034);
  if ( this->cellOffsetsArray )
  {
    if ( bCheckOffsetOnLoad )
    {
      v60 = this->unk9C[0];
      v36 = Double_To_SInt32(v60);
      v60 = this->unk9C[1];
      v37 = v36 >> 0xC;
      v38 = Double_To_SInt32(v60);
      v60 = this->unk9C[2];
      v39 = v38 >> 0xC;
      v58 = (void *)(v38 >> 0xC);
      v40 = Double_To_SInt32(v60);
      v59 = SLODWORD(this->unk9C[3]);
      LODWORD(v60) = v40 >> 0xC;
      v59 = Double_To_SInt32(*(float *)&v59) >> 0xC;
      v41 = TESForm_GetOverrideFile((TESForm *)this, 0);
      if ( v41 )
      {
        v42 = (TESWorldSpace *)sub_4520F0(v41);
        parentWorldspace = v42;
        if ( v42 )
        {
          if ( TESFile_GetIsMaster((Data *)v42) )
          {
            v43 = v37;
            if ( v37 <= SLODWORD(v60) )
            {
              while ( 1 )
              {
                if ( (int)v58 <= v59 )
                {
                  do
                  {
                    IndexForCellCoord = TESWorldSpace::GetIndexForCellCoord(this, v43, v39);
                    v45 = 0;
                    if ( IndexForCellCoord >= 0 )
                    {
                      v46 = this->cellOffsetsArray[IndexForCellCoord];
                      if ( v46 )
                      {
                        TESFIle_JumpToRecord(
                          (Data *)parentWorldspace,
                          (char *)(v46 + this->recordOffsetFromFileBeginning));
                        v47 = (TESForm *)FormHeapAlloc(0x58u);
                        a2 = (int)v47;
                        v63 = 0;
                        if ( v47 )
                          v45 = TESObjectCELL_constr(v47);
                        v63 = 0xFFFFFFFF;
                        TESObjectCELL::SetIsInterior((TESObjectCELL *)v45, 0);
                        sub_4CA710((TESObjectCELL *)v45);
                        if ( !TESDataHandler_LoadForm(v45, (Data *)parentWorldspace)
                          || TESObjectCELL_GetXCoordinate((TESObjectCELL *)v45) != v43
                          || TESObjectCELL_GetYCoordinate((TESObjectCELL *)v45) != v39 )
                        {
                          v48 = (const char *)((int (__thiscall *)(TESWorldSpace *, UInt32))this->vtbl->GetEditorName)(
                                                this,
                                                this->super.refID);
                          PrintError("Failed to find cell (%i, %i) in world '%s' (%08X).", v43, v39, v48, v53);
                        }
                        TESWorldSpace_RemoveCellFromCellMap(this, (TESObjectCELL *)v45);
                        if ( v45 )
                          v45->vtbl->Destroy(v45, 1);
                      }
                    }
                    ++v39;
                  }
                  while ( v39 <= v59 );
                }
                if ( ++v43 > SLODWORD(v60) )
                  break;
                v39 = (int)v58;
              }
            }
          }
        }
      }
    }
    goto LABEL_85;
  }
  v19 = TESForm_GetOverrideFile((TESForm *)this, 0);
  if ( !v19 )
    goto LABEL_85;
  v20 = sub_4520F0(v19);
  v21 = v20;
  if ( !v20 )
    goto LABEL_85;
  if ( !TESFile_GetIsMaster(v20) )
    goto LABEL_85;
  if ( !TESFile::FindForm(v21, (TESForm *)this) )
    goto LABEL_85;
  v22 = Double_To_SInt32(this->unk9C[2]) >> 0xC;
  v23 = v22 - (Double_To_SInt32(this->unk9C[0]) >> 0xC) + 1;
  v24 = Double_To_SInt32(this->unk9C[3]) >> 0xC;
  v25 = v24 - (Double_To_SInt32(this->unk9C[1]) >> 0xC) + 1;
  if ( v23 >= 0x3E8 || v25 >= 0x3E8 )
    goto LABEL_85;
  refID = this->super.refID;
  v26 = this->vtbl->GetEditorName(this);
  PrintError("Offset collection for worldspace '%s' (%08X) is not optimal.", v26, refID);
  v27 = v23 * v25;
  v28 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)v27 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v27);
  v58 = v28;
  _memset(v28, 0, 4 * v27);
  TESFile_NextRecordEx(v21, 1);
  p_currentRecord = &v21->currentRecord;
  v54 = 0;
  if ( v21 == (Data *)0xFFFFFDC4 )
    goto LABEL_64;
  while ( !v54 )
  {
    type = p_currentRecord->chunkInfo.type;
    if ( p_currentRecord->chunkInfo.type == dword_B05E20 )
    {
      v31 = 1;
      v54 = 1;
      switch ( v21->currentRecord.formID )
      {
        case kFormType_TES4:
        case kFormType_Global:
        case kFormType_Class:
          v31 = 0;
          goto LABEL_45;
        case kFormType_Faction:
        case kFormType_Eyes:
        case kFormType_Race:
        case kFormType_Sound:
LABEL_45:
          v54 = 0;
          if ( !v31 )
            goto LABEL_59;
          TESFile::NextGroup(v21);
          break;
        default:
          continue;
      }
    }
    else
    {
      if ( type == dword_B06048 )
      {
        v32 = (v21->currentRecord.flags & 0x400) == 0;
        a2 = 0;
        a3 = 0;
        if ( v32 )
        {
          v33 = 0;
          for ( i = TESFile_GetChunkType(v21); i; i = TESFile_GetChunkType(v21) )
          {
            if ( v33 )
              break;
            if ( i == XCLC_ID )
            {
              TESFile_GetChunkData(v21, (char *)&a2, 8u);
              v33 = 1;
              TESFile_JumpToBeginningOfRecord(v21);
            }
            if ( !TESFile_GetNextChunk(v21) )
              break;
          }
          v35 = TESWorldSpace::GetIndexForCellCoord(this, a2, a3);
          if ( v35 != 0xFFFFFFFF )
            *((_DWORD *)v58 + v35) = v21->currentRecordOffset - this->recordOffsetFromFileBeginning;
        }
        goto LABEL_59;
      }
      if ( type == dword_B0609C || type == dword_B060A8 )
LABEL_59:
        TESFile_NextRecordEx(v21, 1);
      else
        v54 = 1;
    }
  }
  v28 = v58;
LABEL_64:
  this->cellOffsetsArray = (UInt32 *)v28;
LABEL_85:
  TESWorldSpace::LoadLODObjects(this);
}
