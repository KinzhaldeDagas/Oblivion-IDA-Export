void __thiscall TESWorldSpace::Load(TESWorldSpace *this, Data *a2)
{
  signed int i; // eax
  double v4; // st7
  double v5; // st7
  float v6; // edx
  double v7; // st7
  bool v8; // c0
  bool v9; // c3
  double v10; // st7
  double v11; // st7
  bool v12; // c0
  bool v13; // c3
  double v14; // st7
  float v15; // ecx
  __int32 v16; // eax
  UInt32 length; // eax
  UInt32 v18; // ebx
  UInt32 *v19; // eax
  TESTexture *p_texture; // eax
  NiTMap_TESCELL *cellMap; // ecx
  float v22; // eax
  NiTMap_TESCELL *v23; // eax
  float v24; // eax
  int v25[4]; // [esp+0h] [ebp-34h] BYREF
  char v26[4]; // [esp+10h] [ebp-24h] BYREF
  float v27; // [esp+14h] [ebp-20h]
  char Dst[4]; // [esp+18h] [ebp-1Ch] BYREF
  float v29; // [esp+1Ch] [ebp-18h]
  float v30; // [esp+20h] [ebp-14h] BYREF
  int v31; // [esp+30h] [ebp-4h]

  if ( (unsigned __int8)TESFile_GetRecordType(a2) == kFormType_WorldSpace )
  {
    if ( TESFile_GetIsMaster(a2) )
      // This should become a List of pair (File ID / current reocrd offsets)?
      this->recordOffsetFromFileBeginning = a2->currentRecordOffset;
    TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v25[0], v25[1]);
    TESForm_SetIsLinked((TESForm *)this, 0);
    for ( i = TESFile_GetChunkType(a2); i; i = TESFile_GetChunkType(a2) )
    {
      if ( i > CNAM_ID )
      {
        if ( i > WNAM_ID )
        {
          if ( i == ICON_ID )
          {
            if ( this )
              p_texture = &this->texture;
            else
              p_texture = 0;
            TESTexture_Load((int)p_texture, a2);
          }
          else if ( i == OFST_ID )
          {
            length = a2->currentChunk.length;
            if ( length )
            {
              v18 = length >> 2;
              if ( this->cellOffsetsArray )
                FormHeapFree((unsigned int)this->cellOffsetsArray);
              v19 = (UInt32 *)FormHeapAlloc((unsigned __int64)v18 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v18);
              this->cellOffsetsArray = v19;
              TESFile_GetChunkData(a2, (char *)v19, 0);
            }
          }
        }
        else if ( i == WNAM_ID )
        {
          v30 = 0.0;
          TESFile_GetChunkData4(a2, (int)&v30);
          *(float *)&this->parentWorldspace = v30;
        }
        else
        {
          v16 = i - MNAM_ID;
          if ( v16 )
          {
            if ( v16 == 6 )
            {
              v30 = 0.0;
              TESFile_GetChunkData4(a2, (int)&v30);
              *(float *)&this->unk084[4] = v30;
            }
          }
          else
          {
            TESFile_GetChunkData(a2, (char *)this->unk084, 0x10u);
          }
        }
      }
      else if ( i == CNAM_ID )
      {
        v30 = 0.0;
        TESFile_GetChunkData4(a2, (int)&v30);
        *(float *)&this->climate = v30;
      }
      else if ( i > DATA_ID )
      {
        if ( i == EDID_ID )
        {
          _alloca_();
          TESFile_GetChunkData(a2, (char *)v25, 0x200u);
          this->vtbl->SetEditorID((TESForm *)this, (const char *)v25);
        }
        else if ( i == FULL_ID )
        {
          if ( this )
            TESFullname_Load(&this->fullName, a2);
          else
            TESFullname_Load(0, a2);
        }
      }
      else
      {
        switch ( i )
        {
          case DATA_ID:
            TESForm_LoadGenericComponents((TESForm *)this, (int)a2, &this->worldFlags, 1u);
            break;
          case NAM0_ID:
            TESFile_GetChunkData(a2, v26, 8u);
            v7 = this->unk9C[0];
            v8 = *(float *)v26 < v7;
            v9 = *(float *)v26 == v7;
            v10 = *(float *)v26;
            if ( !v8 && !v9 )
              v10 = this->unk9C[0];
            v30 = v10;
            this->unk9C[0] = v30;
            v11 = this->unk9C[1];
            v12 = v27 < v11;
            v13 = v27 == v11;
            v14 = v27;
            if ( !v12 && !v13 )
              v14 = this->unk9C[1];
            v30 = v14;
            this->unk9C[1] = v30;
            if ( TESFile_GetIsMaster(a2) )
            {
              v15 = v27;
              this->unk0AC[0] = *(float *)v26;
              this->unk0AC[1] = v15;
            }
            break;
          case NAM2_ID:
            v30 = 0.0;
            TESFile_GetChunkData4(a2, (int)&v30);
            *(float *)&this->WaterForm = v30;
            break;
          case NAM9_ID:
            TESFile_GetChunkData(a2, Dst, 8u);
            v4 = *(float *)Dst;
            if ( *(float *)Dst < (double)this->unk9C[2] )
              v4 = this->unk9C[2];
            v30 = v4;
            this->unk9C[2] = v30;
            v5 = v29;
            if ( v29 < (double)this->unk9C[3] )
              v5 = this->unk9C[3];
            v30 = v5;
            this->unk9C[3] = v30;
            if ( TESFile_GetIsMaster(a2) )
            {
              v6 = v29;
              this->unk0AC[2] = *(float *)Dst;
              this->unk0AC[3] = v6;
            }
            break;
        }
      }
      if ( !TESFile_GetNextChunk(a2) )
        break;
    }
    cellMap = this->cellMap;
    if ( !cellMap->m_numItems && (this->worldFlags & kFlag_SmallWorld) == 0 )
    {
      if ( cellMap )
        (*(void (__thiscall **)(NiTMap_TESCELL *, int))cellMap->vtbl)(cellMap, 1);
      if ( sub_46B660(this) )
      {
        v22 = COERCE_FLOAT(FormHeapAlloc(0x10u));
        v30 = v22;
        v31 = 0;
        if ( v22 != 0.0 )
        {
          v23 = (NiTMap_TESCELL *)NiTPointerMap<int,TESObjectCELL *>::NiTPointerMap<int,TESObjectCELL *>(
                                    (_DWORD *)LODWORD(v22),
                                    0x1B59u);
LABEL_62:
          this->cellMap = v23;
          return;
        }
      }
      else
      {
        v24 = COERCE_FLOAT(FormHeapAlloc(0x10u));
        v30 = v24;
        v31 = 1;
        if ( v24 != 0.0 )
        {
          v23 = (NiTMap_TESCELL *)NiTPointerMap<int,TESObjectCELL *>::NiTPointerMap<int,TESObjectCELL *>(
                                    (_DWORD *)LODWORD(v24),
                                    0x2BDu);
          goto LABEL_62;
        }
      }
      v23 = 0;
      goto LABEL_62;
    }
  }
}
