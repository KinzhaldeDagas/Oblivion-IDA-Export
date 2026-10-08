// Verified embedded CELL/REFR parser resolves NAME FormIDs to TESForm* keys, skips disabled refs, converts positions through the root terrain-LOD map, and appends position/rotation/scale arrays. The embedded path does not RTTI-cast the NAME result. Probable: the TESForm key is a TESBoundObject because local REFR save writes NAME from baseForm->refID, external .lod loading explicitly RTTI-casts to TESBoundObject, and cleanup dispatches through the bound-object vtable +0x11C. For triangle hits, the second terrain-pick vector is Probable surface-normal data; the 0.97 cap rationale remains Unknown. It returns 0 after accumulation so override/parent searches continue.
char __cdecl TESWorldSpace_ParseCellDistantLODRecords(
        Data *file,
        TESWorldSpace *worldSpace,
        int cellX,
        int cellY,
        DistantLODCellObjectMap *outMap)
{
  Data::FormInfo *p_currentRecord; // esi
  NiTArray_float *p_rotationAngles; // esi
  DistantLODCellObjectData *v7; // eax
  DistantLODCellObjectData *v8; // eax
  float x; // eax
  float y; // ecx
  float z; // edx
  TESWorldSpaceTerrainLODQuadMap *RootTerrainLODQuadMap; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // rt1
  double v17; // st5
  double v18; // st7
  float v20; // [esp+14h] [ebp-74h] BYREF
  int v21; // [esp+18h] [ebp-70h]
  NiTArray_float *v22; // [esp+1Ch] [ebp-6Ch]
  NiTArray_float *v23; // [esp+20h] [ebp-68h] BYREF
  int v24; // [esp+24h] [ebp-64h]
  DistantLODCellObjectData *v25; // [esp+28h] [ebp-60h]
  float v26; // [esp+2Ch] [ebp-5Ch] BYREF
  float v27; // [esp+30h] [ebp-58h]
  float v28; // [esp+34h] [ebp-54h]
  NiPoint3 position; // [esp+38h] [ebp-50h] BYREF
  NiPoint3 v30; // [esp+44h] [ebp-44h]
  NiPoint3 v31; // [esp+50h] [ebp-38h]
  DistantLODReferenceRecord referenceRecord; // [esp+5Ch] [ebp-2Ch] BYREF
  unsigned int v33; // [esp+84h] [ebp-4h]

  if ( outMap ) /*0x4d4420*/
  {
    if ( worldSpace ) /*0x4d442d*/
    {
      if ( file ) /*0x4d443c*/
      {
        if ( TESFile_GetRecordType(file) == 0x30 ) /*0x4d444c*/
        {
          TESFile_NextRecordEx(file, 1); /*0x4d4456*/
          p_currentRecord = &file->currentRecord; /*0x4d4467*/
          if ( file->currentRecord.chunkInfo.type == dword_B05E20 && file->currentRecord.formID == 6 ) /*0x4d4477*/
          {
            TESFile_NextRecordEx(file, 1); /*0x4d4481*/
            if ( p_currentRecord->chunkInfo.type == dword_B05E20 ) /*0x4d448e*/
            {
              if ( file->currentRecord.formID == 8 ) /*0x4d4498*/
                TESFile::NextGroup(file); /*0x4d449c*/
              if ( p_currentRecord->chunkInfo.type == dword_B05E20 && file->currentRecord.formID == 0xA ) /*0x4d44b3*/
              {
                TESFile_NextRecordEx(file, 1); /*0x4d44bd*/
                while ( TESFile_GetRecordType(file) == 0x31 ) /*0x4d44cc*/
                {
                  if ( (file->currentRecord.flags & 0x20) == 0 ) /*0x4d44e7*/
                  {
                    if ( TESWorldSpace_ParseDistantLODReferenceRecord(file, &referenceRecord) ) /*0x4d44f3*/
                    {
                      if ( referenceRecord.baseForm ) /*0x4d4509*/
                      {
                        v23 = 0; /*0x4d451c*/
                        if ( !NiTMap_GetAt(outMap, (int)referenceRecord.baseForm, &v23) || (p_rotationAngles = v23) == 0 )// Verified: looks up or creates DistantLODCellObjectData keyed by the TESForm* resolved from the REFR NAME FormID. The embedded path does not RTTI-check TESBoundObject here. /*0x4d452f*/
                        {
                          v7 = (DistantLODCellObjectData *)FormHeapAlloc(0x34u); /*0x4d4533*/
                          v25 = v7; /*0x4d453b*/
                          v33 = 0; /*0x4d4541*/
                          if ( v7 ) /*0x4d4548*/
                            v8 = DistantLODCellObjectData_ctor(v7); /*0x4d454c*/
                          else
                            v8 = 0; /*0x4d4553*/
                          v8->scalePercent.growBy = 0x1E; /*0x4d455c*/
                          v8->positions.growBy = 0x5A; /*0x4d4562*/
                          v8->rotationAnglesXYZ.growBy = 0x5A; /*0x4d4566*/
                          v8->recordCount = 0; /*0x4d456a*/
                          v33 = 0xFFFFFFFF; /*0x4d4573*/
                          p_rotationAngles = &v8->rotationAnglesXYZ; /*0x4d457e*/
                          NiTMap_SetAt(outMap, (int)referenceRecord.baseForm, (int)v8);// Verified embedded parser inserts DistantLODCellObjectData under the TESForm* resolved by the REFR NAME chunk. Candidate is no longer merely Fallout-based: local REFR serialization and downstream vtable contract raise the bound-object invariant to Probable, but this path has no direct RTTI cast. /*0x4d4580*/
                        }
                        x = g_zeroNiPoint3.x; /*0x4d4585*/
                        y = g_zeroNiPoint3.y; /*0x4d458c*/
                        v20 = 0.0; /*0x4d4592*/
                        z = g_zeroNiPoint3.z; /*0x4d4596*/
                        v26 = x; /*0x4d459c*/
                        v27 = y; /*0x4d45a4*/
                        v28 = z; /*0x4d45ac*/
                        position = referenceRecord.position; /*0x4d45b4*/
                        RootTerrainLODQuadMap = TESWorldSpace_GetRootTerrainLODQuadMap(worldSpace); /*0x4d45d6*/
                        if ( TESWorldSpaceTerrainLODQuadMap_ProjectPointToLoadedTerrain( /*0x4d45dd*/
                               RootTerrainLODQuadMap,
                               &position.x,
                               &v20,
                               &v26) )          // Verified embedded-record conversion consumes hit Z and the auxiliary NiPick vector. Probable: for triangle hits this is a normalized terrain surface normal. It maps each component by 0.5*x+0.5, caps at 0.97, and adds to rounded reference position; the likely purpose is to keep offsets below the next unit boundary, but the exact design reason remains Unknown.
                        {
                          v21 = (int)v20; /*0x4d45f6*/
                          v25 = (DistantLODCellObjectData *)v21; /*0x4d45fe*/
                          v22 = (NiTArray_float *)(int)position.y; /*0x4d4606*/
                          v23 = v22; /*0x4d460e*/
                          v24 = (int)position.x; /*0x4d4616*/
                          v30.x = (float)v24; /*0x4d461e*/
                          v30.y = (float)(int)v22; /*0x4d462e*/
                          v30.z = (float)v21; /*0x4d463e*/
                          position = v30; /*0x4d464a*/
                          v13 = dbl_A2FAA0; /*0x4d4658*/
                          v26 = v26 * v13 + v13;// Verified X component transform: 0.5 * pickVector.x + 0.5, capped at 0.97 when it reaches/exceeds that value. Probable source role is terrain surface-normal X; the cap's design rationale is Unknown. /*0x4d465a*/
                          v14 = dbl_A46B18; /*0x4d466c*/
                          v15 = kDistantLODNormalLimit_097; /*0x4d4671*/
                          if ( v14 <= v26 ) /*0x4d4677*/
                            v26 = kDistantLODNormalLimit_097; /*0x4d4679*/
                          v27 = v27 * v13 + v13;// Verified Y component transform: 0.5 * pickVector.y + 0.5, capped at 0.97 when it reaches/exceeds that value. Probable source role is terrain surface-normal Y; the cap's design rationale is Unknown. /*0x4d4685*/
                          if ( v27 >= v14 ) /*0x4d4694*/
                            v27 = v15; /*0x4d4696*/
                          v16 = v15;            // Verified Z component transform: 0.5 * pickVector.z + 0.5, capped at 0.97 when it reaches/exceeds that value. Probable source role is terrain surface-normal Z; the cap's design rationale is Unknown. /*0x4d46a2*/
                          v17 = v13 + v28 * v13; /*0x4d46a2*/
                          v18 = v16; /*0x4d46a2*/
                          v28 = v17; /*0x4d46a4*/
                          if ( v28 >= v14 ) /*0x4d46b3*/
                            v28 = v18; /*0x4d46b5*/
                          v31.x = v30.x + v26;  // Verified terrain-pick normal components are remapped and added to rounded reference position. Probable rationale: the 0.97 cap keeps the fractional offset below the next 1-unit boundary; the code does not state that rationale explicitly. /*0x4d46c5*/
                          v31.y = v30.y + v27; /*0x4d46d9*/
                          v31.z = v30.z + v28; /*0x4d46ed*/
                          referenceRecord.position = v31; /*0x4d46f5*/
                        }
                        NiTArray_float_Append(p_rotationAngles + 1, &referenceRecord.position.x);// Verified append order: transformed world-space position triples go into DistantLODCellObjectData.positions (+0x10). /*0x4d4703*/
                        NiTArray_float_Append(p_rotationAngles + 1, &referenceRecord.position.y); /*0x4d470f*/
                        NiTArray_float_Append(p_rotationAngles + 1, &referenceRecord.position.z); /*0x4d471b*/
                        NiTArray_float_Append(p_rotationAngles, &referenceRecord.rotationAnglesXYZ.x);// Verified append order: DistantLODReferenceRecord.rotationAngles triples go into DistantLODCellObjectData.rotationAngles (+0x00). /*0x4d4727*/
                        NiTArray_float_Append(p_rotationAngles, &referenceRecord.rotationAnglesXYZ.y); /*0x4d4733*/
                        NiTArray_float_Append(p_rotationAngles, &referenceRecord.rotationAnglesXYZ.z); /*0x4d473f*/
                        NiTArray_float_Append(p_rotationAngles + 2, &referenceRecord.scalePercentWithFloorBias);// Verified append order: DistantLODReferenceRecord.scalePercentWithFloorBias is appended to DistantLODCellObjectData.scalePercent (+0x20). /*0x4d474c*/
                        ++p_rotationAngles[3].vtbl; /*0x4d4751*/
                      }
                    }
                  }
                  TESFile_NextRecordEx(file, 1); /*0x4d475b*/
                }
              }
            }
          }
        }
      }
    }
  }
  return 0; /*0x4d4772*/
}
