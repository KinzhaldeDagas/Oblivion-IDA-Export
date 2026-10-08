// Common ExtraDataList single-chunk dispatcher reached by REFR/ACHR/ACRE. TESFile_GetChunkData(max) semantics at 0x450C20: length 0 leaves destination unchanged; <=max copies a prefix only; >max copies max-1 and writes a terminal zero. Each explicitly zeroed scratch therefore gives deterministic malformed-width behavior; singleton setters make repeats last-wins/remove as noted per branch.
//
// 0x425b0d: XLOC runtime-only load mutation verified 2026-09-05: both accepted12 andlegacy16 paths converge at0x425B05 then OR byte[lockData+8] with1 here. Thus loaded flags = serialized flags |0x01, including zero input. TESCS peers0x45F4A8/0x45F4D5 exit without this OR. CELL rich semantics expose flags by executable; lossless raw recompile/remapping preserve serialized flags. This shared-loader instruction also applies to placed owners, whose broader flag presentation is a separate audit target.
//
// 0x425B0D: XLOC load flag decoding correction 2026-10-01: after either exact12 or legacy16 bytes are stored, this instruction ORs lock flags+8 with1. The runtime predicate ExtraLock_IsLocked0x428E70 tests that exact bit; IsOffLimitToThePlayer0x4DEBF0 uses it to mark the door unavailable. Runtime bit2 is the leveled difficulty branch at0x42999E. Structured and semantic output now names these native loaded meanings while preserving serialized flags and unchanged recompile output.
//
// 0x425EE3: Oblivion common XCCM path uses a fresh zeroed bounded U32 then TESObjectCELL_SetInteriorClimate; it installs ExtraCellClimate with no owner-class guard. The subsequent common LinkFormIDs climate case0x0C at0x426429 validates the target as TESClimate and removes failure. Shared writer emits retained XCCM as exact4.
//
// 0x42624C: Oblivion common XCWT loader uses fresh-zero bounded U32 then ExtraDataList_SetWaterType; no owner filter. Shared LinkFormIDs water case0x05 casts to TESWaterForm and removes unresolved/wrong-kind data. Common writer emits retained XCWT size4.
//
// 0x42618A: Oblivion common XCMT loader reads a fresh zeroed byte with bounded max1 and calls ExtraDataList_SetCellMusicType0x4242C0. Zero removes; nonzero stores the byte regardless of owner. Shared writer case0x0B emits retained XCMT size1. xEdit declares the field on CELL.
//
// 0x42622A: Oblivion common XCLW loader reads fresh-zero bounded U32, bitcasts float, then calls ExtraDataList_SetWaterHeight0x423FF0. Either signed zero removes; nonzero and NaN values store/update. Common writer case4 emits retained raw float bits as exact4, with no owner-type filter.
//
// 0x42601F: Oblivion common XCLR loader accepts only size divisible by4. It rebases and looks up each candidate in the loaded Region map before calling ExtraDataList_SetRegionList0x4241E0; valid occurrences replace prior list, malformed ones preserve it. No owner type check occurs; region lookup happens during list construction.
//
// 0x425EE3: Placed-owner XCCM reaches TESObjectCELL_SetInteriorClimate from shared ExtraDataList_Load. Fresh-zero bounded u32 is stored as an extra without owner validation. Common LinkFormIDs type12 casts the loaded candidate to TESClimate and removes unresolved/wrong-type values; writer type0x0C emits exact4.
//
// 0x42624C: Placed-owner XCWT reaches ExtraDataList_SetWaterType0x4204E0 from common loader, without owner validation. Common LinkFormIDs type5 resolves the candidate as TESWaterForm and removes failure; common writer type5 emits exact4 for surviving state.
//
// 0x42618A: Placed-owner XCMT is read with a fresh zeroed bounded byte and sent to ExtraDataList_SetCellMusicType0x4242C0. Zero removes; nonzero stores the byte with no owner check. Common writer type0x0B emits one byte for an extant extra.
//
// 0x42622A: Placed-owner XCLW reads a fresh zeroed bounded U32 and bitcasts to f32, then ExtraDataList_SetWaterHeight0x423FF0 removes either signed zero or sets nonzero/NaN value. Common writer type4 emits exact4 for retained state. No owner-kind validation.
//
// 0x42601F: Placed-owner XCLR size must be divisible by4. Loader resolves each candidate through the loaded Region map at0x426076..0x42609B then calls ExtraDataList_SetRegionList0x4241E0 to replace previous state; malformed widths are no-ops and valid empty lists clear. Shared writer type8 emits resolved nonempty candidate lists.
void __thiscall ExtraDataList_Load(ExtraDataList *this, Data *tesFile, TESForm *owner)
{
  Data *v4; // edi
  signed int ChunkType; // eax
  BSExtraData *v6; // eax
  int v7; // ebp
  ExtraLockData *vtbl; // esi
  int v9; // eax
  Data *v10; // eax
  ExtraLock *v11; // eax
  UInt32 length; // eax
  unsigned __int8 x_low; // cl
  float y; // edx
  bool v15; // zf
  BSExtraData *ExtraData; // esi
  Data *v17; // eax
  Data *v18; // eax
  BSExtraDataVtbl *v19; // eax
  BSExtraDataVtbl *v20; // esi
  Data *v21; // eax
  MapMarkerData *v22; // eax
  TeleportData *Teleport; // esi
  Data *v24; // eax
  TeleportData *inited; // eax
  UInt32 v26; // ebp
  Data *v27; // eax
  float x; // esi
  TESRegion *RegionByFormID; // eax
  float v30; // [esp+8h] [ebp-3Ch]
  NiPoint3 a1; // [esp+20h] [ebp-24h] BYREF
  int v32; // [esp+2Ch] [ebp-18h]
  float v33; // [esp+30h] [ebp-14h]
  unsigned int a4; // [esp+34h] [ebp-10h] BYREF
  int v35; // [esp+40h] [ebp-4h]

  v4 = tesFile; /*0x425a09*/
  ChunkType = TESFile_GetChunkType(tesFile); /*0x425a0f*/
  if ( ChunkType > 0x4D434358 )
  {
    if ( ChunkType > 0x53524858 )
    {
      if ( ChunkType > 0x544E4358 ) /*0x42614a*/
      {
        if ( ChunkType == 0x54574358 ) /*0x426205*/
        {
          *(float *)&tesFile = 0.0; /*0x426238*/
          TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x426240*/
          ExtraDataList_SetWaterType(this, (BSExtraDataVtbl *)tesFile); /*0x42624c*/
        }
        else if ( ChunkType == 0x574C4358 ) /*0x42620c*/
        {
          *(float *)&tesFile = 0.0; /*0x426215*/
          TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x42621b*/
          ExtraDataList_SetWaterHeight(this, *(float *)&tesFile); /*0x42622a*/
        }
      }
      else
      {
        switch ( ChunkType ) /*0x426150*/
        {
          case 0x544E4358: /*0x426150*/
            *(float *)&tesFile = 0.0; /*0x4261e5*/
            TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x4261ed*/
            ExtraDataList_SetExtraCount(this, (int)tesFile); /*0x4261f9*/
            break;
          case 0x54434158: /*0x426150*/
            *(float *)&tesFile = 0.0; /*0x4261c3*/
            TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x4261cb*/
            ExtraDataList_SetActionFlags(this, (unsigned int)tesFile); /*0x4261d7*/
            break;
          case 0x544C4858: /*0x426150*/
            *(float *)&tesFile = 0.0; /*0x42619b*/
            TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x4261a3*/
            v30 = (float)(int)tesFile; /*0x4261af*/
            ExtraDataList_SetHealthValue(this, (BSExtraDataVtbl *)LODWORD(v30)); /*0x4261b2*/
            break;
          case 0x544D4358: /*0x426150*/
            LOBYTE(tesFile) = 0; /*0x426178*/
            TESFile_GetChunkData(v4, (char *)&tesFile, 1u); /*0x42617d*/
            ExtraDataList_SetCellMusicType(this, (char)tesFile); /*0x42618a*/
            break;
        }
      }
    }
    else if ( ChunkType == 0x53524858 )
    {
      *(float *)&tesFile = 0.0; /*0x426127*/
      TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x42612f*/
      ExtraDataList_SetTravelHorse(this, (BSExtraDataVtbl *)tesFile); /*0x42613b*/
    }
    else if ( ChunkType > 0x4E535058 )
    {
      switch ( ChunkType )
      {
        case 0x4E574F58:
          *(float *)&tesFile = 0.0; /*0x426102*/
          TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x42610a*/
          ExtraDataList::SetOrRemoveExtraOwnership(this, (TESForm *)tesFile); /*0x426116*/
          break;
        case 0x50534558:
          a1.x = 0.0; /*0x4260c8*/
          a1.y = 0.0; /*0x4260cc*/
          TESFile_GetChunkData(v4, (char *)&a1, 8u); /*0x4260d9*/
          ExtraDataList_SetEnableStateParent(this, (BSExtraDataVtbl *)LODWORD(a1.x)); /*0x4260e5*/
          ExtraDataList_SetEnableStateFlags(this, LOBYTE(a1.y)); /*0x4260f1*/
          break;
        case 0x524C4358:
          v26 = v4->currentChunk.length >> 2; /*0x425fe6*/
          a4 = v4->currentChunk.length; /*0x425feb*/
          if ( (a4 & 3) != 0 )
          {
            PrintError("Invalid Extra Data - Region List in file \"%s\".", v4->name); /*0x425ffa*/
          }
          else
          {
            *(float *)&v27 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x426009*/
            tesFile = v27; /*0x426011*/
            v35 = 3; /*0x426017*/
            if ( *(float *)&v27 == 0.0 ) /*0x42601f*/
              *(float *)&tesFile = 0.0; /*0x426030*/
            else
              *(float *)&tesFile = COERCE_FLOAT(TESRegionList_constr(v27, 0)); /*0x42602a*/
            v35 = 0xFFFFFFFF; /*0x426046*/
            LODWORD(a1.x) = FormHeapAlloc((unsigned __int64)v26 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v26);
            TESFile_GetChunkData(v4, (char *)LODWORD(a1.x), a4); /*0x426067*/
            if ( v26 ) /*0x42606e*/
            {
              x = a1.x; /*0x426070*/
              do /*0x4260a6*/
              {
                TESForm_ResolveFormID((UInt32 *)LODWORD(x), v4); /*0x426076*/
                RegionByFormID = TESRegionList_FindRegionByFormID( /*0x42608d*/
                                   g_TESDataHandler->regionListOwner,
                                   *(_DWORD *)LODWORD(x));
                if ( RegionByFormID ) /*0x426094*/
                  TESRegionList_AddUniqueRegion((TESRegionList *)tesFile, &RegionByFormID->form); /*0x42609b*/
                LODWORD(x) += 4; /*0x4260a0*/
                --v26; /*0x4260a3*/
              }
              while ( v26 ); /*0x4260a6*/
            }
            ExtraDataList_SetRegionList(this, (BSExtraDataVtbl *)tesFile); /*0x4260af*/
            FormHeapFree(LODWORD(a1.x)); /*0x4260b9*/
          }
          break;
      }
    }
    else
    {
      switch ( ChunkType ) /*0x425f09*/
      {
        case 0x4E535058: /*0x425f09*/
          *(float *)&tesFile = 0.0; /*0x425f9f*/
          TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x425fa7*/
          ExtraDataList_SetPoison(this, (BSExtraDataVtbl *)tesFile); /*0x425fb3*/
          break;
        case 0x4D434C58: /*0x425f09*/
          a4 = 0; /*0x425f7a*/
          TESFile_GetChunkData4(v4, (char *)&a4); /*0x425f82*/
          ExtraDataList_SetLevCreaModifier(this, (BSExtraDataVtbl *)a4); /*0x425f8e*/
          break;
        case 0x4D495458: /*0x425f09*/
          *(float *)&tesFile = 0.0; /*0x425f54*/
          TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x425f5a*/
          ExtraDataList_SetTimeLeft(this, (BSExtraDataVtbl *)tesFile); /*0x425f69*/
          break;
        case 0x4D545258: /*0x425f09*/
          *(float *)&tesFile = 0.0; /*0x425f2f*/
          TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x425f37*/
          ExtraDataList_SetRandomTeleportMarker(this, (TESObjectREFR *)tesFile); /*0x425f43*/
          break;
      }
    }
  }
  else if ( ChunkType == 0x4D434358 ) /*0x425a1f*/
  {
    *(float *)&tesFile = 0.0; /*0x425ecf*/
    TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x425ed7*/
    TESObjectCELL_SetInteriorClimate(this, (TESClimate *)tesFile); /*0x425ee3*/
  }
  else if ( ChunkType > 0x47484358 ) /*0x425a2a*/
  {
    if ( ChunkType > 0x4B524D58 ) /*0x425d1c*/
    {
      switch ( ChunkType ) /*0x425de9*/
      {
        case 0x4C455458: /*0x425de9*/
          Teleport = ExtraDataList_GetTeleport(this); /*0x425e7e*/
          if ( !Teleport ) /*0x425e82*/
          {
            *(float *)&v24 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x425e86*/
            tesFile = v24; /*0x425e8e*/
            v35 = 1; /*0x425e94*/
            if ( *(float *)&v24 == 0.0 ) /*0x425e9c*/
              inited = 0; /*0x425ea7*/
            else
              inited = TeleportData_InitSentinels((TeleportData *)v24); /*0x425ea0*/
            v35 = 0xFFFFFFFF; /*0x425eac*/
            Teleport = inited; /*0x425eb4*/
            ExtraDataList::SetTeleportData(this, inited); /*0x425eb6*/
          }
          TeleportData_LoadXTEL(Teleport, v4); /*0x425ebe*/
          break;
        case 0x4C4F5358: /*0x425de9*/
          if ( v4->currentChunk.length == 1 ) /*0x425e4c*/
          {
            LOBYTE(tesFile) = 0; /*0x425e5b*/
            TESFile_GetChunkData(v4, (char *)&tesFile, 1u); /*0x425e60*/
            BaseExtraList_SetSoulLevel(this, (char)tesFile); /*0x425e6d*/
          }
          break;
        case 0x4C535058: /*0x425de9*/
          memset(&a1, 0, sizeof(a1)); /*0x425e03*/
          v32 = 0; /*0x425e0f*/
          v33 = 0.0; /*0x425e13*/
          TESFile_GetChunkData(v4, (char *)&a1, 0x14u); /*0x425e20*/
          ExtraDataList_SetStartLocation(this, (BSExtraDataVtbl *)LODWORD(a1.x), 0, &a1.y, v33); /*0x425e3b*/
          break;
      }
    }
    else
    {
      switch ( ChunkType ) /*0x425d22*/
      {
        case 0x4B524D58: /*0x425d22*/
          v20 = ExtraDataList_MapMarker(this); /*0x425d9a*/
          if ( !v20 ) /*0x425d9e*/
          {
            *(float *)&v21 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x425da2*/
            tesFile = v21; /*0x425daa*/
            v35 = 2; /*0x425db0*/
            if ( *(float *)&v21 == 0.0 ) /*0x425db8*/
              v22 = 0; /*0x425dc3*/
            else
              v22 = MapMarkerData_ctor((MapMarkerData *)v21); /*0x425dbc*/
            v35 = 0xFFFFFFFF; /*0x425dc8*/
            v20 = (BSExtraDataVtbl *)v22; /*0x425dd0*/
            ExtraDataList_SetMapMarkerData(this, v22); /*0x425dd2*/
          }
          MapMarkerData_LoadXMRKSequence((MapMarkerData *)v20, v4); /*0x425dda*/
          break;
        case 0x47525458: /*0x425d22*/
          *(float *)&tesFile = 0.0; /*0x425d75*/
          TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x425d7d*/
          ExtraDataList_SetXTarget(this, (BSExtraDataVtbl *)tesFile); /*0x425d89*/
          break;
        case 0x49435058: /*0x425d22*/
          TESFile_GetNextChunk(v4); /*0x425d64*/
          break;
        case 0x4B4E5258: /*0x425d22*/
          *(float *)&tesFile = 0.0; /*0x425d44*/
          TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x425d4c*/
          ExtraDataList_SetRank(this, (SInt32)tesFile); /*0x425d58*/
          break;
      }
    }
  }
  else if ( ChunkType == 0x47484358 ) /*0x425a30*/
  {
    *(float *)&tesFile = 0.0; /*0x425cf8*/
    TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x425cfe*/
    ExtraDataList_SetCharge(this, (BSExtraDataVtbl *)tesFile); /*0x425d0d*/
  }
  else if ( ChunkType > 0x44455358 ) /*0x425a3b*/
  {
    switch ( ChunkType ) /*0x425be2*/
    {
      case 0x44475258: /*0x425be2*/
        ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RagDollData); /*0x425c57*/
        if ( !ExtraData ) /*0x425c5b*/
        {
          *(float *)&v17 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x425c5f*/
          tesFile = v17; /*0x425c67*/
          v35 = 4; /*0x425c6d*/
          if ( *(float *)&v17 == 0.0 ) /*0x425c75*/
            ExtraData = 0; /*0x425c82*/
          else
            ExtraData = (BSExtraData *)ExtraRagDollData::ExtraRagDollData((ExtraRagDollData *)v17); /*0x425c7e*/
          *(float *)&v18 = COERCE_FLOAT(FormHeapAlloc(8u)); /*0x425c8e*/
          tesFile = v18; /*0x425c96*/
          v35 = 5; /*0x425c9c*/
          if ( *(float *)&v18 == 0.0 ) /*0x425ca4*/
            v19 = 0; /*0x425caf*/
          else
            v19 = (BSExtraDataVtbl *)sub_497210(v18); /*0x425ca8*/
          v35 = 0xFFFFFFFF; /*0x425cb4*/
          ExtraData[1].vtbl = v19; /*0x425cbc*/
          BaseExtraList_AddExtra(this, ExtraData); /*0x425cbf*/
        }
        if ( !ExtraRagDollDataArray_LoadXRGD(&ExtraData[1].vtbl->Destructor, v4) ) /*0x425cc8*/
        {
          PrintError("Failed to load RagDoll Data."); /*0x425cda*/
          BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x425ce7*/
        }
        break;
      case 0x444F4C58: /*0x425be2*/
        a1.x = 0.0;                             // Verified Oblivion XLOD load path defaults a NiPoint3 normal to (0,0,0.97), overlays the 12-byte chunk, and stores it in ExtraDistantData.normal_00C. Fallout's ExtraDataList::Load routes XLOD_ID to its normal setter at the same offset, despite the different ExtraData EType. /*0x425c1f*/
        a1.y = 0.0; /*0x425c27*/
        a1.z = 0.97000003; /*0x425c34*/
        TESFile_GetChunkData(v4, (char *)&a1, 0xCu); /*0x425c38*/
        ExtraDataList_SetDistantDataNormal(this, &a1); /*0x425c44*/
        break;
      case 0x45535558: /*0x425be2*/
        *(float *)&tesFile = 0.0; /*0x425bfd*/
        TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x425c05*/
        ExtraDataList_SetUses(this, (char)tesFile); /*0x425c11*/
        break;
    }
  }
  else
  {
    switch ( ChunkType ) /*0x425a41*/
    {
      case 0x44455358: /*0x425a41*/
        v15 = v4->currentChunk.length == 4; /*0x425b83*/
        LOBYTE(tesFile) = 0; /*0x425b8a*/
        if ( v15 ) /*0x425b8f*/
        {
          a1.x = 0.0; /*0x425b98*/
          TESFile_GetChunkData4(v4, (char *)&a1); /*0x425ba0*/
          LOBYTE(tesFile) = LOBYTE(a1.x); /*0x425ba9*/
          ExtraDataList_SetOrRemoveTreeSeed(this, SLOBYTE(a1.x)); /*0x425bb4*/
        }
        else
        {
          TESFile_GetChunkData(v4, (char *)&tesFile, 1u); /*0x425bc7*/
          ExtraDataList_SetOrRemoveTreeSeed(this, (signed __int8)tesFile); /*0x425bd3*/
        }
        break;
      case 0x424C4758: /*0x425a41*/
        *(float *)&tesFile = 0.0; /*0x425b65*/
        TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x425b6d*/
        ExtraDataList_SetGlobal(this, (TESGlobal *)tesFile); /*0x425b79*/
        break;
      case 0x434F4C58: /*0x425a41*/
        v6 = BaseExtraList_GetExtraData(this, kExtraData_Lock); /*0x425a8d*/
        v7 = (int)v6; /*0x425a92*/
        vtbl = 0; /*0x425a94*/
        if ( v6 ) /*0x425a98*/
        {
          vtbl = (ExtraLockData *)v6[1].vtbl; /*0x425aee*/
        }
        else
        {
          v9 = FormHeapAlloc(0xCu); /*0x425a9c*/
          if ( v9 ) /*0x425aa6*/
          {
            *(_DWORD *)(v9 + 4) = 0; /*0x425aa8*/
            *(_BYTE *)v9 = 0; /*0x425aab*/
            *(_BYTE *)(v9 + 8) = 0; /*0x425aae*/
            vtbl = (ExtraLockData *)v9; /*0x425ab2*/
          }
          *(float *)&v10 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x425ab6*/
          tesFile = v10; /*0x425abe*/
          v35 = 0; /*0x425ac4*/
          if ( *(float *)&v10 == 0.0 ) /*0x425acc*/
            v11 = 0; /*0x425ad8*/
          else
            v11 = ExtraLock_ctor((ExtraLock *)v10, vtbl); /*0x425ad1*/
          v35 = 0xFFFFFFFF; /*0x425add*/
          v7 = (int)v11; /*0x425ae5*/
          BaseExtraList_AddExtra(this, &v11->super); /*0x425ae7*/
        }
        length = v4->currentChunk.length; /*0x425af1*/
        if ( length == 0xC ) /*0x425afa*/
        {
          TESFile_GetChunkData(v4, (char *)vtbl, 0xCu); /*0x425b00*/
        }
        else
        {
          if ( length != 0x10 ) /*0x425b19*/
          {
            PrintError("Unrecognized format for lock data in file '%s'.", v4->name); /*0x425b47*/
            BaseExtraList_RemoveExtraByPtr(this, v7, 1); /*0x425b54*/
            return; /*0x425b59*/
          }
          TESFile_GetChunkData(v4, (char *)&a1, 0x10u); /*0x425b23*/
          x_low = LOBYTE(a1.x); /*0x425b2c*/
          y = a1.y; /*0x425b30*/
          vtbl->flags = v32; /*0x425b34*/
          vtbl->level = x_low; /*0x425b37*/
          *(float *)&vtbl->key = y; /*0x425b39*/
        }
        if ( vtbl ) /*0x425b07*/
          vtbl->flags |= 1u; /*0x425b0d*/
        break;
      case 0x43524D58: /*0x425a41*/
        *(float *)&tesFile = 0.0; /*0x425a6b*/
        TESFile_GetChunkData4(v4, (char *)&tesFile); /*0x425a73*/
        ExtraDataList_SetMerchantContainer(this, (BSExtraDataVtbl *)tesFile); /*0x425a7f*/
        break;
    }
  }
}
