// Verified serialized PGRL chunk processing calls TESPathGrid_AddPointForLinkedReference, populating the reference-to-point index used by runtime enable/disable callbacks. This is separate from modified-form save data, which stores disabled point indices.
bool __thiscall TESPathGrid_LoadSerializedGraphChunks(TESPathGrid *this, Data *file)
{
  Data *v2; // ebx
  bool result; // al
  NiTArray_TESPathGridPoint *pointArray; // eax
  int v6; // eax
  ExtraDataList *parentCell; // ecx
  TESObjectCELL *v8; // edi
  signed int ChunkType; // eax
  UInt32 length; // edi
  int *v11; // ebp
  unsigned int v12; // edi
  TESForm *v13; // eax
  TESObjectREFR *v14; // ebx
  unsigned int v15; // ecx
  NiTArray_TESPathGridPoint *v16; // eax
  TESPathGridPoint *v17; // ecx
  TESObjectCELL *v18; // ecx
  char IsInterior; // al
  TESObjectCELL *v20; // ecx
  TESWorldSpace *v21; // eax
  TESObjectCELL *v22; // edi
  int XCoordinate; // eax
  const char *v24; // eax
  int v25; // eax
  const char *v26; // eax
  const char *v27; // eax
  unsigned int v28; // ebp
  _DWORD *v29; // edi
  _DWORD *v30; // eax
  float *v31; // eax
  signed int v32; // ebx
  float *v33; // ebp
  TESPathGridPoint *v34; // eax
  TESPathGridPoint *v35; // edi
  TESObjectREFR *SmallestSubSpaceContainingPosition; // eax
  signed int pointCount; // edx
  int v38; // ebp
  char *v39; // ecx
  bool v40; // zf
  TESObjectCELL *v41; // ecx
  char v42; // al
  TESObjectCELL *v43; // ecx
  TESWorldSpace *v44; // eax
  TESObjectCELL *v45; // edi
  int v46; // eax
  const char *v47; // eax
  int v48; // eax
  const char *v49; // eax
  const char *v50; // eax
  int v51; // eax
  TESPathGridPoint *v52; // ebp
  float *v53; // edi
  TESPathGridPoint *v54; // ebx
  unsigned __int16 neighbor_index; // ax
  TESPathGridPoint *v56; // eax
  BSSimpleList_VoidPtr *Connections; // eax
  int v58; // ecx
  size_t v59; // [esp-18h] [ebp-174h]
  size_t v60; // [esp-18h] [ebp-174h]
  size_t v61; // [esp-14h] [ebp-170h]
  size_t v62; // [esp-14h] [ebp-170h]
  size_t v63; // [esp-Ch] [ebp-168h]
  size_t v64; // [esp-Ch] [ebp-168h]
  size_t v65; // [esp-8h] [ebp-164h]
  int YCoordinate; // [esp-8h] [ebp-164h]
  size_t v67; // [esp-8h] [ebp-164h]
  size_t v68; // [esp-8h] [ebp-164h]
  int v69; // [esp-8h] [ebp-164h]
  int v70; // [esp-4h] [ebp-160h]
  int v71; // [esp-4h] [ebp-160h]
  unsigned int v72; // [esp-4h] [ebp-160h]
  int v73; // [esp-4h] [ebp-160h]
  int v74; // [esp-4h] [ebp-160h]
  int v75; // [esp-4h] [ebp-160h]
  const char *v76; // [esp+0h] [ebp-15Ch]
  bool loaded_successfully; // [esp+1Bh] [ebp-141h]
  void *v78; // [esp+1Ch] [ebp-140h] BYREF
  float *serialized_point_data; // [esp+20h] [ebp-13Ch]
  unsigned int total_declared_connection_slots; // [esp+24h] [ebp-138h]
  bool value[4]; // [esp+28h] [ebp-134h]
  TESObjectCELL *v82; // [esp+2Ch] [ebp-130h]
  char *serialized_connection_indices; // [esp+30h] [ebp-12Ch]
  char ArgList[4]; // [esp+34h] [ebp-128h] BYREF
  TESWorldSpace *WorldSpace; // [esp+38h] [ebp-124h]
  float WaterHeight; // [esp+3Ch] [ebp-120h]
  TESPathGridPoint *v87; // [esp+40h] [ebp-11Ch]
  Data *a1; // [esp+44h] [ebp-118h]
  char Dest[260]; // [esp+48h] [ebp-114h] BYREF
  int v90; // [esp+158h] [ebp-4h]

  v2 = file; /*0x4e65eb*/
  result = 0; /*0x4e65f4*/
  a1 = file; /*0x4e65fa*/
  loaded_successfully = 0; /*0x4e65fe*/
  if ( file && this->pointCount )
  {
    pointArray = this->pointArray; /*0x4e6612*/
    serialized_point_data = 0; /*0x4e6617*/
    serialized_connection_indices = 0; /*0x4e661b*/
    total_declared_connection_slots = 0; /*0x4e661f*/
    if ( !pointArray ) /*0x4e6623*/
    {
      v6 = FormHeapAlloc(0x10u); /*0x4e6627*/
      if ( v6 ) /*0x4e6631*/
      {
        *(_DWORD *)v6 = &NiTArray<TESPathGridPoint *>::`vftable'; /*0x4e6633*/
        *(_WORD *)(v6 + 8) = 0; /*0x4e6639*/
        *(_WORD *)(v6 + 0xE) = 1; /*0x4e663d*/
        *(_WORD *)(v6 + 0xA) = 0; /*0x4e6643*/
        *(_WORD *)(v6 + 0xC) = 0; /*0x4e6647*/
        *(_DWORD *)(v6 + 4) = 0; /*0x4e664b*/
      }
      else
      {
        v6 = 0; /*0x4e6650*/
      }
      v90 = 0xFFFFFFFF; /*0x4e6652*/
      this->pointArray = (NiTArray_TESPathGridPoint *)v6; /*0x4e665d*/
    }
    parentCell = (ExtraDataList *)this->parentCell; /*0x4e6660*/
    WaterHeight = flt_A3B888; /*0x4e666b*/
    if ( parentCell ) /*0x4e666f*/
    {
      if ( (parentCell[1].members.m_presenceBitfield[8] & 2) != 0 ) /*0x4e6679*/
        WaterHeight = TESObjectCELL_GetWaterHeight(parentCell); /*0x4e6680*/
    }
    v8 = this->parentCell; /*0x4e6684*/
    WorldSpace = 0; /*0x4e6689*/
    v82 = v8; /*0x4e668d*/
    if ( v8 ) /*0x4e6691*/
    {
      if ( !TESObjectCELL_IsInterior(v8) ) /*0x4e6695*/
      {
        WorldSpace = TESObjectCELL_GetWorldSpace(v8); /*0x4e66a5*/
        v82 = 0; /*0x4e66a9*/
      }
    }
    Dest[0] = 0; /*0x4e66ad*/
    while ( 1 )
    {
      ChunkType = TESFile_GetChunkType(v2); /*0x4e66b4*/
      if ( !ChunkType ) /*0x4e66bb*/
      {
LABEL_86:
        FormHeapFree((unsigned int)serialized_point_data); /*0x4e6c5a*/
        FormHeapFree((unsigned int)serialized_connection_indices); /*0x4e6c69*/
        return loaded_successfully; /*0x4e6c6e*/
      }
      if ( ChunkType > 0x50524750 ) /*0x4e66c6*/
        break; /*0x4e66c6*/
      if ( ChunkType != 0x50524750 ) /*0x4e66cc*/
      {
        if ( ChunkType == 0x49524750 ) /*0x4e66d7*/
        {
          v28 = v2->currentChunk.length / 0x10; /*0x4e68c2*/
          if ( !(v2->currentChunk.length % 0x10) ) /*0x4e68be*/
          {
            HIDWORD(v67) = 1; /*0x4e68cc*/
            LODWORD(v67) = 0x10 * v28; /*0x4e68d1*/
            v78 = j_MemoryHeap_Alloc(&FormHeap, v28, v67, (int)v76); /*0x4e68e0*/
            TESFile_GetChunkData(v2, (char *)v78, 0x10 * v28); /*0x4e68e4*/
            if ( v28 ) /*0x4e68eb*/
            {
              v29 = v78; /*0x4e68ed*/
              do /*0x4e6922*/
              {
                v30 = (_DWORD *)FormHeapAlloc(0x10u); /*0x4e68f6*/
                *v30 = *v29; /*0x4e68fd*/
                v30[1] = v29[1]; /*0x4e6902*/
                v30[2] = v29[2]; /*0x4e6908*/
                v30[3] = v29[3]; /*0x4e6911*/
                BSSimpleList_PushFront(&this->PGRIRecords.firstNode.data, (int)v30); /*0x4e6917*/
                v29 += 4; /*0x4e691c*/
                --v28; /*0x4e691f*/
              }
              while ( v28 ); /*0x4e6922*/
            }
            MemoryHeap_Free_checked(v78); /*0x4e692e*/
          }
        }
        else if ( ChunkType == 0x4C524750 ) /*0x4e66e2*/
        {
          length = v2->currentChunk.length; /*0x4e66e8*/
          if ( length ) /*0x4e66f0*/
          {
            v11 = MemoryHeap_Alloc_ZlibCallback(v2->currentChunk.length); /*0x4e66ff*/
            TESFile_GetChunkData(v2, (char *)v11, 0); /*0x4e6706*/
            v78 = (void *)(length >> 2); /*0x4e670e*/
            if ( length >> 2 ) /*0x4e670e*/
            {
              *(_DWORD *)ArgList = *v11; /*0x4e6721*/
              v12 = 1; /*0x4e6725*/
              TESForm_ResolveFormID((UInt32 *)ArgList, v2); /*0x4e672a*/
              v13 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4e6745*/
              v14 = (TESObjectREFR *)OblivionDynamicCast( /*0x4e6753*/
                                       v13,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                       0);
              if ( v14 ) /*0x4e675a*/
              {
                if ( (unsigned int)v78 > 1 ) /*0x4e6760*/
                {
                  do /*0x4e6793*/
                  {
                    v15 = v11[v12]; /*0x4e6766*/
                    v16 = this->pointArray; /*0x4e676a*/
                    ++v12; /*0x4e676d*/
                    if ( v16 ) /*0x4e6772*/
                    {
                      if ( v15 < this->pointCount ) /*0x4e677a*/
                      {
                        v17 = v16->data[v15]; /*0x4e677f*/
                        if ( v17 ) /*0x4e6784*/
                          TESPathGrid_AddPointForLinkedReference(this, v14, v17); /*0x4e678a*/
                      }
                    }
                  }
                  while ( v12 < (unsigned int)v78 ); /*0x4e6793*/
                }
              }
              else
              {
                if ( !Dest[0] ) /*0x4e67aa*/
                {
                  v18 = this->parentCell; /*0x4e67b0*/
                  if ( v18 ) /*0x4e67b5*/
                  {
                    IsInterior = TESObjectCELL_IsInterior(v18); /*0x4e67d3*/
                    v20 = this->parentCell; /*0x4e67da*/
                    if ( IsInterior ) /*0x4e67dd*/
                    {
                      v27 = v20->vtbl->GetEditorName((TESForm *)v20); /*0x4e6870*/
                      HIDWORD(v63) = "%s"; /*0x4e6873*/
                      LODWORD(v63) = 0x104; /*0x4e687c*/
                      _snprintf(Dest, v63, v27); /*0x4e6882*/
                    }
                    else
                    {
                      v21 = TESObjectCELL_GetWorldSpace(v20); /*0x4e67e3*/
                      v22 = this->parentCell; /*0x4e67ea*/
                      if ( v21 ) /*0x4e67ed*/
                      {
                        v70 = (int)v21->vtbl->GetEditorName((TESForm *)v21); /*0x4e67fb*/
                        YCoordinate = TESObjectCELL_GetYCoordinate(v22); /*0x4e6803*/
                        XCoordinate = TESObjectCELL_GetXCoordinate(v22); /*0x4e6806*/
                        v24 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int, int))v22->vtbl->GetEditorName)( /*0x4e6816*/
                                              v22,
                                              XCoordinate,
                                              YCoordinate,
                                              v70);
                        HIDWORD(v59) = "%s (%d, %d) in world %s"; /*0x4e6819*/
                        LODWORD(v59) = 0x104; /*0x4e6822*/
                        _snprintf(Dest, v59, v24); /*0x4e6828*/
                      }
                      else
                      {
                        v71 = TESObjectCELL_GetYCoordinate(this->parentCell); /*0x4e6839*/
                        v25 = TESObjectCELL_GetXCoordinate(v22); /*0x4e683c*/
                        v26 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))v22->vtbl->GetEditorName)( /*0x4e684c*/
                                              v22,
                                              v25,
                                              v71);
                        HIDWORD(v61) = "%s (%d, %d)"; /*0x4e684f*/
                        LODWORD(v61) = 0x104; /*0x4e6858*/
                        _snprintf(Dest, v61, v26); /*0x4e685e*/
                      }
                    }
                  }
                  else
                  {
                    HIDWORD(v65) = "UNKNOWN"; /*0x4e67b7*/
                    LODWORD(v65) = 0x104; /*0x4e67c0*/
                    _snprintf(Dest, v65, v76); /*0x4e67c6*/
                  }
                }
                PrintError( /*0x4e6899*/
                  "Could not find reference (%08X) for linked points in pathgrid for cell %s.",
                  *(_DWORD *)ArgList,
                  Dest);
              }
            }
            MemoryHeap_Free_checked(v11); /*0x4e679b*/
          }
        }
        goto LABEL_85; /*0x4e67a0*/
      }
      NiTArray_SetSize((unsigned __int16 *)this->pointArray, this->pointCount); /*0x4e6940*/
      v31 = (float *)FormHeapAlloc((unsigned __int64)this->pointCount >> 0x1C != 0 ? 0xFFFFFFFF : 0x10
                                                                                                * this->pointCount);
      v72 = 0x10 * this->pointCount; /*0x4e6969*/
      serialized_point_data = v31; /*0x4e696f*/
      TESFile_GetChunkData(a1, (char *)v31, v72); /*0x4e6973*/
      v32 = 0; /*0x4e6978*/
      if ( this->pointCount )
      {
        v33 = serialized_point_data; /*0x4e6984*/
        while ( 1 )
        {
          v34 = (TESPathGridPoint *)FormHeapAlloc(0x2Cu); /*0x4e698a*/
          v87 = v34; /*0x4e6992*/
          v90 = 1; /*0x4e6998*/
          v35 = v34 ? TESPathGridPoint_ctor(v34) : 0;
          v90 = 0xFFFFFFFF; /*0x4e69b5*/
          v78 = v35; /*0x4e69c0*/
          PathGraphNode_SetPosition(v35, (const NiPoint3 *)v33); /*0x4e69c4*/
          NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)this->pointArray, v32, &v78); /*0x4e69d2*/
          if ( WaterHeight > (double)v33[2] ) /*0x4e69e5*/
            PathGraphNode_SetBelowWaterFlag(v35, 1); /*0x4e69eb*/
          value[0] = 0; /*0x4e69f5*/
          if ( v82 ) /*0x4e69fa*/
            break; /*0x4e69fa*/
          if ( WorldSpace ) /*0x4e6a0d*/
          {
            SmallestSubSpaceContainingPosition = TESWorldSpace_FindSmallestSubSpaceContainingPosition(WorldSpace, v33); /*0x4e6a14*/
LABEL_56:
            if ( SmallestSubSpaceContainingPosition ) /*0x4e6a1b*/
              value[0] = 1; /*0x4e6a1d*/
          }
          PathGraphNode_SetSubSpaceMembershipFlag(v35, value[0]); /*0x4e6a22*/
          TESPathGrid_AddPointToSpatialBucket(this, v35); /*0x4e6a31*/
          pointCount = this->pointCount; /*0x4e6a3a*/
          total_declared_connection_slots += *((unsigned __int8 *)v33 + 0xC);// Accumulate total PGRR slot count from each PGRP point's u8 connection-count field. /*0x4e6a3e*/
          ++v32; /*0x4e6a42*/
          v33 += 4; /*0x4e6a45*/
          if ( v32 >= pointCount ) /*0x4e6a4a*/
            goto LABEL_59; /*0x4e6a4a*/
        }
        SmallestSubSpaceContainingPosition = TESObjectCELL_FindSmallestSubSpaceContainingPosition(v82, v33); /*0x4e6a01*/
        goto LABEL_56; /*0x4e6a06*/
      }
LABEL_59:
      if ( !total_declared_connection_slots ) /*0x4e6a55*/
        goto LABEL_84; /*0x4e6a55*/
LABEL_85:
      v2 = a1; /*0x4e6c47*/
      if ( !TESFile_GetNextChunk(a1) ) /*0x4e6c4d*/
        goto LABEL_86; /*0x4e6c54*/
    }
    if ( ChunkType != 0x52524750 || !serialized_point_data ) /*0x4e6a70*/
      goto LABEL_85;                            // PGRR branch. It is ignored until a serialized PGRP point buffer exists. /*0x4e6a70*/
    v38 = total_declared_connection_slots; /*0x4e6a76*/
    v87 = 0; /*0x4e6a88*/
    v39 = (char *)FormHeapAlloc(
                    (unsigned __int64)total_declared_connection_slots >> 0x1F != 0
                  ? 0xFFFFFFFF
                  : 2 * total_declared_connection_slots);
    v40 = v2->currentChunk.length == 2 * v38;   // Require PGRR byte length == 2 * total declared connection slots. On mismatch Oblivion logs an error and does not read chunk bytes into the allocated buffer. /*0x4e6aa3*/
    serialized_connection_indices = v39; /*0x4e6aa9*/
    if ( v40 )
    {
      TESFile_GetChunkData(v2, v39, 2 * v38); /*0x4e6bbe*/
    }
    else
    {
      if ( !Dest[0] ) /*0x4e6ab8*/
      {
        v41 = this->parentCell; /*0x4e6abe*/
        if ( v41 ) /*0x4e6ac3*/
        {
          v42 = TESObjectCELL_IsInterior(v41); /*0x4e6ae1*/
          v43 = this->parentCell; /*0x4e6ae8*/
          if ( v42 ) /*0x4e6aeb*/
          {
            v50 = v43->vtbl->GetEditorName((TESForm *)v43); /*0x4e6b7e*/
            HIDWORD(v64) = "%s"; /*0x4e6b81*/
            LODWORD(v64) = 0x104; /*0x4e6b8a*/
            _snprintf(Dest, v64, v50); /*0x4e6b90*/
          }
          else
          {
            v44 = TESObjectCELL_GetWorldSpace(v43); /*0x4e6af1*/
            v45 = this->parentCell; /*0x4e6af8*/
            if ( v44 ) /*0x4e6afb*/
            {
              v73 = (int)v44->vtbl->GetEditorName((TESForm *)v44); /*0x4e6b09*/
              v69 = TESObjectCELL_GetYCoordinate(v45); /*0x4e6b11*/
              v46 = TESObjectCELL_GetXCoordinate(v45); /*0x4e6b14*/
              v47 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int, int))v45->vtbl->GetEditorName)( /*0x4e6b24*/
                                    v45,
                                    v46,
                                    v69,
                                    v73);
              HIDWORD(v60) = "%s (%d, %d) in world %s"; /*0x4e6b27*/
              LODWORD(v60) = 0x104; /*0x4e6b30*/
              _snprintf(Dest, v60, v47); /*0x4e6b36*/
            }
            else
            {
              v74 = TESObjectCELL_GetYCoordinate(this->parentCell); /*0x4e6b47*/
              v48 = TESObjectCELL_GetXCoordinate(v45); /*0x4e6b4a*/
              v49 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))v45->vtbl->GetEditorName)( /*0x4e6b5a*/
                                    v45,
                                    v48,
                                    v74);
              HIDWORD(v62) = "%s (%d, %d)"; /*0x4e6b5d*/
              LODWORD(v62) = 0x104; /*0x4e6b66*/
              _snprintf(Dest, v62, v49); /*0x4e6b6c*/
            }
          }
        }
        else
        {
          HIDWORD(v68) = "UNKNOWN"; /*0x4e6ac5*/
          LODWORD(v68) = 0x104; /*0x4e6ace*/
          _snprintf(Dest, v68, v76); /*0x4e6ad4*/
        }
      }
      PrintError(
        "PathGrid (%08X) in cell %s found different connection data than it was expecting:\r\n"
        "\tExpected: %i\t Found: %i",
        this->base.member.refID,
        Dest,
        v38,
        v2->currentChunk.length >> 1);
    }
    v51 = 0; /*0x4e6bc3*/
    v40 = this->pointCount == 0; /*0x4e6bc5*/
    v78 = 0; /*0x4e6bc9*/
    if ( !v40 ) /*0x4e6bcd*/
    {
      v52 = v87; /*0x4e6bd3*/
      v53 = serialized_point_data + 3; /*0x4e6bd7*/
      do /*0x4e6c40*/
      {
        v54 = this->pointArray->data[v51]; /*0x4e6be9*/
        if ( *(_BYTE *)v53 ) /*0x4e6be0*/
        {
          do /*0x4e6c27*/
          {
            neighbor_index = *(_WORD *)&serialized_connection_indices[2 * (_DWORD)v52];// Read one PGRR neighbor as unsigned u16 (movzx). Serialized 0xFFFF is 65535, not signed -1. /*0x4e6bf4*/
            if ( neighbor_index < this->pointCount )// Unsigned range gate: neighbor_index >= point_count skips insertion. This silently filters 0xFFFF and any other out-of-range index. /*0x4e6bfc*/
            {
              v56 = this->pointArray->data[neighbor_index]; /*0x4e6c07*/
              if ( v56 )                        // Skip a valid-range index whose point-array entry is null. /*0x4e6c0c*/
              {                                 // Skip self-edge when target point equals source point.
                if ( v56 != v54 ) /*0x4e6c10*/
                {
                  v75 = (int)v56; /*0x4e6c12*/
                  Connections = PathGraphNode_GetConnections(v54);// Only an in-range, non-null, non-self target reaches adjacency-list insertion. /*0x4e6c15*/
                  BSSimpleList_PushFront(Connections, v75); /*0x4e6c1c*/
                }
              }
            }
            --*(_BYTE *)v53;                    // Every serialized PGRR value consumes one source point's declared connection slot, including 0xFFFF/out-of-range/null/self values. /*0x4e6c21*/
            v52 = (TESPathGridPoint *)((char *)v52 + 1);// Advance the flat PGRR u16 stream index after every slot, even when no edge was inserted. /*0x4e6c24*/
          }
          while ( *(_BYTE *)v53 ); /*0x4e6c27*/
          v51 = (int)v78; /*0x4e6c2c*/
        }
        v58 = this->pointCount; /*0x4e6c30*/
        ++v51; /*0x4e6c34*/
        v53 += 4; /*0x4e6c37*/
        v78 = (void *)v51; /*0x4e6c3c*/
      }
      while ( v51 < v58 ); /*0x4e6c40*/
    }
LABEL_84:
    loaded_successfully = 1; /*0x4e6c42*/
    goto LABEL_85; /*0x4e6c42*/
  }
  return result; /*0x4e6c75*/
}
