// Verified local WRLD Load does not read the runtime TESRoad* field at WorldSpace+0x54; ROAD is a separate form/group relationship. The neighboring WorldSpace words +0x4C and +0x50 remain Unknown.
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
  NiTPointerMap<int,TESObjectCELL *> *v22; // eax
  NiTMap_TESCELL *v23; // eax
  NiTPointerMap<int,TESObjectCELL *> *v24; // eax
  int v25[4]; // [esp+0h] [ebp-34h] BYREF
  char v26[4]; // [esp+10h] [ebp-24h] BYREF
  float v27; // [esp+14h] [ebp-20h]
  char Dst[4]; // [esp+18h] [ebp-1Ch] BYREF
  float v29; // [esp+1Ch] [ebp-18h]
  float v30; // [esp+20h] [ebp-14h] BYREF
  int v31; // [esp+30h] [ebp-4h]

  if ( (unsigned __int8)TESFile_GetRecordType(a2) == kFormType_WorldSpace )
  {
    if ( TESFile_GetIsMaster(a2) ) /*0x4f1eb4*/
      // This should become a List of pair (File ID / current reocrd offsets)? /*0x4f1ec3*/
      this->recordOffsetFromFileBeginning = a2->currentRecordOffset; /*0x4f1ec3*/
    TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v25[0], v25[1]); /*0x4f1ecc*/
    TESForm_SetIsLinked((TESForm *)this, 0); /*0x4f1ed6*/
    for ( i = TESFile_GetChunkType(a2); i; i = TESFile_GetChunkType(a2) )
    {
      if ( i > CNAM_ID )
      {
        if ( i > WNAM_ID )
        {
          if ( i == ICON_ID )
          {
            if ( this ) /*0x4f21a3*/
              p_texture = &this->texture; /*0x4f21a5*/
            else
              p_texture = 0; /*0x4f21aa*/
            TESTexture_Load((int)p_texture, a2); /*0x4f21ae*/
          }
          else if ( i == OFST_ID )
          {
            length = a2->currentChunk.length;   // Authoritative WRLD OFST replay: every nonempty OFST occurrence frees any prior cellOffsetsArray, allocates floor(length/4) DWORD storage, then reads the chunk; a later nonempty OFST replaces the earlier array. Zero-length OFST takes no mutation branch and retains inherited/prior state. /*0x4f2150*/
            if ( length )
            {
              v18 = length >> 2; /*0x4f215d*/
              if ( this->cellOffsetsArray ) /*0x4f215f*/
                FormHeapFree((unsigned int)this->cellOffsetsArray); /*0x4f216a*/
              v19 = (UInt32 *)FormHeapAlloc((unsigned __int64)v18 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v18);
              this->cellOffsetsArray = v19; /*0x4f2192*/
              TESFile_GetChunkData(a2, (char *)v19, 0); /*0x4f2198*/
            }
          }
        }
        else if ( i == WNAM_ID ) /*0x4f20e9*/
        {
          v30 = 0.0; /*0x4f2132*/
          TESFile_GetChunkData4(a2, (char *)&v30); /*0x4f2135*/
          *(float *)&this->parentWorldspace = v30;// Verified WRLD load: WNAM chunk reads parent worldspace FormID; TESWorldSpace_DoPostFixups resolves it later. /*0x4f213d*/
        }
        else
        {
          v16 = i - MNAM_ID; /*0x4f20eb*/
          if ( v16 ) /*0x4f20f0*/
          {
            if ( v16 == 6 ) /*0x4f20f5*/
            {
              v30 = 0.0; /*0x4f2101*/
              TESFile_GetChunkData4(a2, (char *)&v30); /*0x4f2104*/
              *(float *)&this->unknown084[4] = v30; /*0x4f210c*/
            }
          }
          else
          {
            TESFile_GetChunkData(a2, (char *)this->unknown084, 0x10u);// Authoritative WRLD MNAM replay into existing field with cap16. Zero length retains. Lengths1..16 overlay that prefix; length>16 copies payload[0:15] and writes byte15=0. Fresh full forms start with 16 zero bytes in SetDefault; partial records inherit unknown prior bytes. /*0x4f2122*/
          }
        }
      }
      else if ( i == CNAM_ID ) /*0x4f1efb*/
      {
        v30 = 0.0; /*0x4f20cf*/
        TESFile_GetChunkData4(a2, (char *)&v30); /*0x4f20d2*/
        *(float *)&this->climate = v30;         // Verified WRLD load: CNAM chunk reads Climate FormID into unresolved TESWorldSpace.climate field; TESWorldSpace_DoPostFixups resolves it later. /*0x4f20da*/
      }
      else if ( i > DATA_ID ) /*0x4f1f06*/
      {
        if ( i == EDID_ID ) /*0x4f206d*/
        {
          _alloca_(v25[0]); /*0x4f20a1*/
          TESFile_GetChunkData(a2, (char *)v25, 0x200u); /*0x4f20b0*/
          this->vtbl->SetEditorID((TESForm *)this, (const char *)v25); /*0x4f20c0*/
        }
        else if ( i == FULL_ID ) /*0x4f2074*/
        {
          if ( this ) /*0x4f207c*/
            TESFullname_Load(&this->fullName, a2); /*0x4f2083*/
          else
            TESFullname_Load(0, a2); /*0x4f2091*/
        }
      }
      else
      {
        switch ( i ) /*0x4f1f0c*/
        {
          case DATA_ID: /*0x4f1f0c*/
            TESForm_LoadGenericComponents((TESForm *)this, a2, &this->worldFlags, 1u);// Authoritative WRLD DATA replay: every occurrence calls the generic prefix-overlay helper. Zero length is a no-op; any nonempty DATA deterministically replaces worldFlags with payload[0], including overlong chunks. Repeated nonempty chunks are stream-order last-wins; deleted WRLD payload still replays. /*0x4f205e*/
            break;
          case NAM0_ID: /*0x4f1f0c*/
            TESFile_GetChunkData(a2, v26, 8u);  // NAM0 minimum-axis replay: 0x4F1FD2..0x4F1FDA calls bounded GetChunkData with maxSize 8 into local bytes [ebp-0x24..-0x1D] without prior initialization, then both axes are compared/stored at 0x4F1FDF..0x4F202B. Widths 0..7 retain stack bytes and may change state; >8 copies 7 payload bytes and forces the last local byte to zero. x87 test at 0x4F1FEE selects the new candidate on unordered/NaN comparisons. /*0x4f1fda*/
            v7 = this->cellBounds[0]; /*0x4f1fdf*/
            v8 = *(float *)v26 < v7; /*0x4f1fe8*/
            v9 = *(float *)v26 == v7; /*0x4f1fe8*/
            v10 = *(float *)v26; /*0x4f1fec*/
            if ( !v8 && !v9 ) /*0x4f1fee*/
              v10 = this->cellBounds[0]; /*0x4f1ff5*/
            v30 = v10; /*0x4f1ffb*/
            this->cellBounds[0] = v30; /*0x4f2001*/
            v11 = this->cellBounds[1]; /*0x4f2007*/
            v12 = v27 < v11; /*0x4f2010*/
            v13 = v27 == v11; /*0x4f2010*/
            v14 = v27; /*0x4f2014*/
            if ( !v12 && !v13 ) /*0x4f2016*/
              v14 = this->cellBounds[1]; /*0x4f201d*/
            v30 = v14; /*0x4f2023*/
            this->cellBounds[1] = v30; /*0x4f202b*/
            if ( TESFile_GetIsMaster(a2) ) /*0x4f2031*/
            {
              v15 = v27; /*0x4f2041*/
              this->unknown0AC[0] = *(float *)v26; /*0x4f2044*/
              this->unknown0AC[1] = v15; /*0x4f204a*/
            }
            break;
          case NAM2_ID: /*0x4f1f0c*/
            v30 = 0.0; /*0x4f1fbc*/
            TESFile_GetChunkData4(a2, (char *)&v30); /*0x4f1fbf*/
            *(float *)&this->WaterForm = v30;   // Verified WRLD load: NAM2 chunk reads WaterForm FormID; TESWorldSpace_DoPostFixups resolves it later. /*0x4f1fc7*/
            break;
          case NAM9_ID: /*0x4f1f0c*/
            TESFile_GetChunkData(a2, Dst, 8u);  // NAM9 maximum-axis replay uses bounded GetChunkData(maxSize=8) into an uninitialized local pair, then compares/stores both axes. Widths 0..7 retain stack bytes and may change bounds; >8 deterministically reads first 7 bytes and a forced zero. x87 ordered/unordered branch behavior must be preserved for NaNs; the TESCS WRLD reader does not dispatch NAM9. /*0x4f1f3b*/
            v4 = *(float *)Dst; /*0x4f1f4d*/
            if ( *(float *)Dst < (double)this->cellBounds[2] ) /*0x4f1f52*/
              v4 = this->cellBounds[2]; /*0x4f1f56*/
            v30 = v4; /*0x4f1f5c*/
            this->cellBounds[2] = v30; /*0x4f1f62*/
            v5 = v29; /*0x4f1f75*/
            if ( v29 < (double)this->cellBounds[3] ) /*0x4f1f7a*/
              v5 = this->cellBounds[3]; /*0x4f1f7e*/
            v30 = v5; /*0x4f1f84*/
            this->cellBounds[3] = v30; /*0x4f1f8c*/
            if ( TESFile_GetIsMaster(a2) ) /*0x4f1f92*/
            {
              v6 = v29; /*0x4f1fa2*/
              this->unknown0AC[2] = *(float *)Dst; /*0x4f1fa5*/
              this->unknown0AC[3] = v6; /*0x4f1fab*/
            }
            break;
        }
      }
      if ( !TESFile_GetNextChunk(a2) ) /*0x4f21b8*/
        break; /*0x4f21bf*/
    }
    cellMap = this->cellMap; /*0x4f21d0*/
    if ( !cellMap->m_numItems && (this->worldFlags & kFlag_SmallWorld) == 0 ) /*0x4f21dc*/
    {
      if ( cellMap ) /*0x4f21e0*/
        (*(void (__thiscall **)(NiTMap_TESCELL *, int))cellMap->vtbl)(cellMap, 1); /*0x4f21e8*/
      if ( TESForm_HasBuiltinFormID(this) ) /*0x4f21ec*/
      {
        *(float *)&v22 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x4f21f7*/
        v30 = *(float *)&v22; /*0x4f21ff*/
        v31 = 0; /*0x4f2204*/
        if ( *(float *)&v22 != 0.0 ) /*0x4f2207*/
        {
          v23 = (NiTMap_TESCELL *)NiTPointerMap<int,TESObjectCELL *>::NiTPointerMap<int,TESObjectCELL *>(v22, 0x1B59u); /*0x4f2210*/
LABEL_62:
          this->cellMap = v23; /*0x4f223d*/
          return; /*0x4f223d*/
        }
      }
      else
      {
        *(float *)&v24 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x4f2217*/
        v30 = *(float *)&v24; /*0x4f221f*/
        v31 = 1; /*0x4f2224*/
        if ( *(float *)&v24 != 0.0 ) /*0x4f222b*/
        {
          v23 = (NiTMap_TESCELL *)NiTPointerMap<int,TESObjectCELL *>::NiTPointerMap<int,TESObjectCELL *>(v24, 0x2BDu); /*0x4f2234*/
          goto LABEL_62; /*0x4f2239*/
        }
      }
      v23 = 0; /*0x4f223b*/
      goto LABEL_62; /*0x4f223b*/
    }
  }
}
