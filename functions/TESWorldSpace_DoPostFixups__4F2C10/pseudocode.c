// Verified: WorldSpace post-fixups resolve Climate, WaterForm and parent WorldSpace links and rebuild/repair exterior cell-map relationships. No confirmed write to the auxiliary spatial candidate map at +0x60 was established in this routine.
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
  TESWorldSpace *ThreadSafeFile; // eax
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
  void *position; // [esp+20h] [ebp-24h] BYREF
  int v59; // [esp+24h] [ebp-20h]
  unsigned int keyOut; // [esp+28h] [ebp-1Ch] BYREF
  int a2; // [esp+2Ch] [ebp-18h] BYREF
  int a3; // [esp+30h] [ebp-14h]
  unsigned int v63; // [esp+40h] [ebp-4h]

  if ( (this->super.flags & kFormFlags_Linked) == 0 ) /*0x4f2c47*/
  {
    a1 = this->climate; /*0x4f2c52*/
    if ( a1 ) /*0x4f2c56*/
    {
      OverrideFile = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF);// Verified post-fixup path: resolves stored Climate FormID through winning override file, looks up and RTTI-casts TESClimate, reports missing Climate, then replaces raw field with pointer. /*0x4f2c5a*/
      TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile); /*0x4f2c65*/
      v3 = TESForm_LookupByFormID((UInt32)a1); /*0x4f2c80*/
      v4 = (TESClimate *)OblivionDynamicCast( /*0x4f2c8e*/
                           v3,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &TESClimate `RTTI Type Descriptor',
                           0);
      if ( !v4 ) /*0x4f2c95*/
      {
        if ( TESForm::GetEditorNameLen((TESForm *)this) ) /*0x4f2c99*/
        {
          v49 = this->vtbl->GetEditorName(this); /*0x4f2cae*/
          PrintError("Unable to find climate (%08X) on owner worldspace \"%s\".", a1, v49); /*0x4f2cb9*/
        }
        else
        {
          PrintError("Unable to find climate (%08X) on owner worldspace (%08X).", a1, this->super.refID); /*0x4f2cc9*/
        }
      }
      this->climate = v4; /*0x4f2cd1*/
    }
    WaterForm = this->WaterForm; /*0x4f2cdc*/
    if ( WaterForm ) /*0x4f2ce0*/
    {
      v5 = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF);// Verified post-fixup path: resolves stored WaterForm FormID and RTTI-casts TESWaterForm before replacing raw field. /*0x4f2cea*/
      TESForm_ResolveFormID((UInt32 *)&WaterForm, v5); /*0x4f2cf5*/
      v6 = TESForm_LookupByFormID((UInt32)WaterForm); /*0x4f2d10*/
      v7 = (TESWaterForm *)OblivionDynamicCast( /*0x4f2d1e*/
                             v6,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESWaterForm `RTTI Type Descriptor',
                             0);
      if ( !v7 ) /*0x4f2d25*/
      {
        if ( TESForm::GetEditorNameLen((TESForm *)this) ) /*0x4f2d29*/
        {
          v50 = this->vtbl->GetEditorName(this); /*0x4f2d42*/
          PrintError("Unable to find water type (%08X) on owner worldspace \"%s\".", WaterForm, v50); /*0x4f2d49*/
        }
        else
        {
          PrintError("Unable to find water type (%08X) on owner worldspace (%08X).", WaterForm, this->super.refID); /*0x4f2d59*/
        }
      }
      this->WaterForm = v7; /*0x4f2d61*/
    }
    parentWorldspace = this->parentWorldspace; /*0x4f2d6c*/
    if ( parentWorldspace ) /*0x4f2d70*/
    {
      v8 = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF);// Verified post-fixup path: resolves parentWorldspace FormID and RTTI-casts to TESWorldSpace after Climate and WaterForm fixups. /*0x4f2d76*/
      TESForm_ResolveFormID((UInt32 *)&parentWorldspace, v8); /*0x4f2d81*/
      v9 = TESForm_LookupByFormID((UInt32)parentWorldspace); /*0x4f2d9c*/
      v10 = (TESWorldSpace *)OblivionDynamicCast( /*0x4f2daa*/
                               v9,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESWorldSpace `RTTI Type Descriptor',
                               0);
      if ( !v10 ) /*0x4f2db1*/
      {
        if ( TESForm::GetEditorNameLen((TESForm *)this) ) /*0x4f2db5*/
        {
          v51 = this->vtbl->GetEditorName(this); /*0x4f2dce*/
          PrintError("Unable to find landscape world (%08X) on owner worldspace \"%s\".", parentWorldspace, v51); /*0x4f2dd5*/
        }
        else
        {
          PrintError( /*0x4f2de5*/
            "Unable to find landscape world (%08X) on owner worldspace (%08X).",
            parentWorldspace,
            this->super.refID);
        }
      }
      this->parentWorldspace = v10; /*0x4f2ded*/
    }
    TESForm_SetIsLinked((TESForm *)this, 1); /*0x4f2df4*/
  }
  cellMap = this->cellMap; /*0x4f2df9*/
  m_numBuckets = cellMap->m_numBuckets; /*0x4f2dfc*/
  v13 = 0; /*0x4f2e01*/
  if ( m_numBuckets ) /*0x4f2e05*/
  {
    m_buckets = cellMap->m_buckets; /*0x4f2e07*/
    v15 = m_buckets; /*0x4f2e0a*/
    while ( !*v15 ) /*0x4f2e12*/
    {
      ++v13; /*0x4f2e18*/
      ++v15; /*0x4f2e1b*/
      if ( v13 >= m_numBuckets ) /*0x4f2e20*/
        goto LABEL_25; /*0x4f2e20*/
    }
    v16 = m_buckets[v13]; /*0x4f2fb8*/
  }
  else
  {
LABEL_25:
    v16 = 0; /*0x4f2e22*/
  }
  position = v16; /*0x4f2e26*/
  while ( position ) /*0x4f2e2a*/
  {
    v17 = this->cellMap; /*0x4f2e3a*/
    parentWorldspace = 0; /*0x4f2e42*/
    NiTMap_U32Pointer_GetNextEntry( /*0x4f2e46*/
      (MEF_U32PointerMapLayout32 *)v17,
      (MEF_U32PointerMapEntry32 **)&position,
      &keyOut,
      (void **)&parentWorldspace);
    if ( parentWorldspace ) /*0x4f2e51*/
      parentWorldspace->vtbl->DoPostFixup((TESForm *)parentWorldspace); /*0x4f2e58*/
  }
  unk034 = this->persistentCell; /*0x4f2e60*/
  if ( unk034 ) /*0x4f2e65*/
    unk034->vtbl->DoPostFixup((TESForm *)unk034); /*0x4f2e6c*/
  if ( this->cellOffsetsArray ) /*0x4f2e6e*/
  {
    if ( bCheckOffsetOnLoad ) /*0x4f30b8*/
    {
      keyOut = LODWORD(this->cellBounds[0]); /*0x4f30cb*/
      v36 = Double_To_SInt32(*(float *)&keyOut); /*0x4f30d3*/
      keyOut = LODWORD(this->cellBounds[1]); /*0x4f30de*/
      v37 = v36 >> 0xC; /*0x4f30e8*/
      v38 = Double_To_SInt32(*(float *)&keyOut); /*0x4f30eb*/
      keyOut = LODWORD(this->cellBounds[2]); /*0x4f30f8*/
      v39 = v38 >> 0xC; /*0x4f3100*/
      position = (void *)(v38 >> 0xC); /*0x4f3103*/
      v40 = Double_To_SInt32(*(float *)&keyOut); /*0x4f3107*/
      v59 = SLODWORD(this->cellBounds[3]); /*0x4f3112*/
      keyOut = v40 >> 0xC; /*0x4f311d*/
      v59 = Double_To_SInt32(*(float *)&v59) >> 0xC; /*0x4f312c*/
      v41 = TESForm_GetOverrideFile((TESForm *)this, 0); /*0x4f3130*/
      if ( v41 ) /*0x4f3137*/
      {
        ThreadSafeFile = (TESWorldSpace *)TESFile_GetThreadSafeFile(v41); /*0x4f313f*/
        parentWorldspace = ThreadSafeFile; /*0x4f3146*/
        if ( ThreadSafeFile ) /*0x4f314a*/
        {
          if ( TESFile_GetIsMaster((Data *)ThreadSafeFile) ) /*0x4f3152*/
          {
            v43 = v37; /*0x4f3163*/
            if ( v37 <= (int)keyOut ) /*0x4f3165*/
            {
              while ( 1 ) /*0x4f3174*/
              {
                if ( (int)position <= v59 ) /*0x4f317c*/
                {
                  do /*0x4f3255*/
                  {
                    IndexForCellCoord = TESWorldSpace::GetIndexForCellCoord(this, v43, v39); /*0x4f3186*/
                    v45 = 0; /*0x4f318b*/
                    if ( IndexForCellCoord >= 0 ) /*0x4f318f*/
                    {
                      v46 = this->cellOffsetsArray[IndexForCellCoord];// MEF v21 implementation target: bCheckOffsetOnLoad validation read is guarded by tracked OFST/rebuilt-table count; unknown/out-of-range tables skip this validation cell. /*0x4f319b*/
                      if ( v46 ) /*0x4f31a0*/
                      {
                        TESFIle_JumpToRecord( /*0x4f31b3*/
                          (Data *)parentWorldspace,
                          (char *)(v46 + this->recordOffsetFromFileBeginning));
                        v47 = (TESForm *)FormHeapAlloc(0x58u); /*0x4f31ba*/
                        a2 = (int)v47; /*0x4f31c2*/
                        v63 = 0; /*0x4f31c8*/
                        if ( v47 ) /*0x4f31cc*/
                          v45 = TESObjectCELL_constr(v47); /*0x4f31d5*/
                        v63 = 0xFFFFFFFF; /*0x4f31db*/
                        TESObjectCELL::SetIsInterior((TESObjectCELL *)v45, 0); /*0x4f31e3*/
                        sub_4CA710((TESObjectCELL *)v45); /*0x4f31ea*/
                        if ( !TESDataHandler_LoadForm(v45, (Data *)parentWorldspace) /*0x4f3215*/
                          || TESObjectCELL_GetXCoordinate((TESObjectCELL *)v45) != v43
                          || TESObjectCELL_GetYCoordinate((TESObjectCELL *)v45) != v39 )
                        {
                          v48 = (const char *)((int (__thiscall *)(TESWorldSpace *, UInt32))this->vtbl->GetEditorName)( /*0x4f3225*/
                                                this,
                                                this->super.refID);
                          PrintError("Failed to find cell (%i, %i) in world '%s' (%08X).", v43, v39, v48, v53); /*0x4f322f*/
                        }
                        TESWorldSpace_RemoveCellFromCellMap(this, (TESObjectCELL *)v45); /*0x4f323a*/
                        if ( v45 ) /*0x4f3241*/
                          v45->vtbl->Destroy(v45, 1); /*0x4f324c*/
                      }
                    }
                    ++v39; /*0x4f324e*/
                  }
                  while ( v39 <= v59 ); /*0x4f3255*/
                }
                if ( ++v43 > (int)keyOut ) /*0x4f3262*/
                  break; /*0x4f3262*/
                v39 = (int)position; /*0x4f3170*/
              }
            }
          }
        }
      }
    }
    goto LABEL_85; /*0x4f3262*/
  }
  v19 = TESForm_GetOverrideFile((TESForm *)this, 0); /*0x4f2e7d*/
  if ( !v19 ) /*0x4f2e84*/
    goto LABEL_85; /*0x4f2e84*/
  v20 = TESFile_GetThreadSafeFile(v19); /*0x4f2e8c*/
  v21 = v20; /*0x4f2e91*/
  if ( !v20 ) /*0x4f2e95*/
    goto LABEL_85; /*0x4f2e95*/
  if ( !TESFile_GetIsMaster(v20) ) /*0x4f2e9d*/
    goto LABEL_85; /*0x4f2e9d*/
  if ( !TESFile::FindForm(v21, (TESForm *)this) ) /*0x4f2ead*/
    goto LABEL_85; /*0x4f2ead*/
  v22 = Double_To_SInt32(this->cellBounds[2]) >> 0xC; /*0x4f2ecd*/
  v23 = v22 - (Double_To_SInt32(this->cellBounds[0]) >> 0xC) + 1; /*0x4f2ee0*/
  v24 = Double_To_SInt32(this->cellBounds[3]) >> 0xC; /*0x4f2ef0*/
  v25 = v24 - (Double_To_SInt32(this->cellBounds[1]) >> 0xC) + 1; /*0x4f2efd*/
  if ( v23 >= 0x3E8 || v25 >= 0x3E8 ) /*0x4f2f12*/
    goto LABEL_85; /*0x4f2f12*/
  refID = this->super.refID; /*0x4f2f1b*/
  v26 = this->vtbl->GetEditorName(this); /*0x4f2f26*/
  PrintError("Offset collection for worldspace '%s' (%08X) is not optimal.", v26, refID); /*0x4f2f2e*/
  v27 = v23 * v25; /*0x4f2f33*/
  v28 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)v27 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v27);
  position = v28; /*0x4f2f5b*/
  _memset((int)v28, 0, 4 * v27); /*0x4f2f5f*/
  TESFile_NextRecordEx(v21, 1); /*0x4f2f6b*/
  p_currentRecord = &v21->currentRecord; /*0x4f2f70*/
  v54 = 0; /*0x4f2f78*/
  if ( v21 == (Data *)0xFFFFFDC4 ) /*0x4f2f7d*/
    goto LABEL_64; /*0x4f2f7d*/
  while ( !v54 ) /*0x4f2f88*/
  {
    type = p_currentRecord->chunkInfo.type; /*0x4f2f8e*/
    if ( p_currentRecord->chunkInfo.type == dword_B05E20 ) /*0x4f2f97*/
    {
      v31 = 1; /*0x4f2fa2*/
      v54 = 1; /*0x4f2fa4*/
      switch ( v21->currentRecord.formID ) /*0x4f2fb1*/
      {
        case kFormType_TES4: /*0x4f2fb1*/
        case kFormType_Global: /*0x4f2fb1*/
        case kFormType_Class: /*0x4f2fb1*/
          v31 = 0; /*0x4f2fc0*/
          goto LABEL_45; /*0x4f2fc0*/
        case kFormType_Faction: /*0x4f2fb1*/
        case kFormType_Eyes: /*0x4f2fb1*/
        case kFormType_Race: /*0x4f2fb1*/
        case kFormType_Sound: /*0x4f2fb1*/
LABEL_45:
          v54 = 0; /*0x4f2fc2*/
          if ( !v31 ) /*0x4f2fc9*/
            goto LABEL_59; /*0x4f2fc9*/
          TESFile::NextGroup(v21); /*0x4f2fd1*/
          break; /*0x4f2fd6*/
        default:
          continue;
      }
    }
    else
    {
      if ( type == dword_B06048 ) /*0x4f2fde*/
      {
        v32 = (v21->currentRecord.flags & 0x400) == 0; /*0x4f2fe6*/
        a2 = 0; /*0x4f2fed*/
        a3 = 0; /*0x4f2ff1*/
        if ( v32 ) /*0x4f2ff5*/
        {
          v33 = 0; /*0x4f2ff9*/
          for ( i = TESFile_GetChunkType(v21); i; i = TESFile_GetChunkType(v21) ) /*0x4f3002*/
          {
            if ( v33 ) /*0x4f3006*/
              break; /*0x4f3006*/
            if ( i == XCLC_ID ) /*0x4f300d*/
            {
              TESFile_GetChunkData(v21, (char *)&a2, 8u); /*0x4f3018*/
              v33 = 1; /*0x4f301f*/
              TESFile_JumpToBeginningOfRecord(v21); /*0x4f3021*/
            }
            if ( !TESFile_GetNextChunk(v21) ) /*0x4f3028*/
              break; /*0x4f302f*/
          }
          v35 = TESWorldSpace::GetIndexForCellCoord(this, a2, a3); /*0x4f3048*/
          if ( v35 != 0xFFFFFFFF ) /*0x4f3050*/
            *((_DWORD *)position + v35) = v21->currentRecordOffset - this->recordOffsetFromFileBeginning;// MEF v21 verification correction: guard DoPostFixups rebuilt WRLD offset-table write; only write table[index] when index is within the allocation rectangle derived from [0x98..0xA4]. /*0x4f3062*/
        }
        goto LABEL_59; /*0x4f3062*/
      }
      if ( type == dword_B0609C || type == dword_B060A8 ) /*0x4f308f*/
LABEL_59:
        TESFile_NextRecordEx(v21, 1); /*0x4f307b*/
      else
        v54 = 1; /*0x4f309f*/
    }
  }
  v28 = position;                               // MEF v21 verification correction: track vanilla rebuilt WRLD offset table and count when committing it to TESWorldSpace+0xA8, so fast lookup remains bounded without discarding valid rebuilt tables. /*0x4f30a9*/
LABEL_64:
  this->cellOffsetsArray = (UInt32 *)v28; /*0x4f30ad*/
LABEL_85:
  TESWorldSpace::LoadLODObjects(this);          // Verified DoPostFixups invokes TESWorldSpace::LoadLODObjects after climate/water/parent and exterior-cell map repair, populating +0xC8 CellsWithLODObjects and the +0xD8/+0xDC LOD metadata fields. /*0x4f3268*/
}
