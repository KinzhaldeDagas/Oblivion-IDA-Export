// Verified terrain ray query: uses NiPick against terrainLODNode with a vertical ray from worldPosition.z + 1,000,000 toward -Z. It returns the selected record's hit Z at +0x10 and copies a separate 3-float vector at +0x28..+0x30; the latter's meaning remains Unknown.
bool __thiscall TESTerrainLODQuad_PickSurfacePoint(
        TESTerrainLODQuad_OblivionComplete_060 *this,
        NiPoint3 *worldPosition,
        float *hitPointZOut,
        NiPoint3 *pickVectorOut)
{
  bool v5; // bl
  float y; // edx
  double v7; // st7
  NiAVObject *terrainLODNode_02C; // esi
  NiAVObject *v9; // edi
  NiPickRecord_Oblivion_044Verified *pickRecord; // eax
  float v12; // [esp+18h] [ebp-58h]
  float v13[3]; // [esp+1Ch] [ebp-54h] BYREF
  float v14[3]; // [esp+28h] [ebp-48h] BYREF
  _DWORD v15[5]; // [esp+34h] [ebp-3Ch] BYREF
  NiAVObject *v16; // [esp+48h] [ebp-28h]
  NiPickRecord_Oblivion_044Verified **v17; // [esp+50h] [ebp-20h]
  int v18; // [esp+60h] [ebp-10h]
  unsigned int v19; // [esp+6Ch] [ebp-4h]

  v5 = 0; /*0x4ec9b8*/
  if ( this->terrainLODNode_02C ) /*0x4ec9ba*/
  {
    y = worldPosition->y; /*0x4ec9c9*/
    v7 = worldPosition->z + kTerrainLODQuadRayStartZOffset;// Verified terrain pick ray starts at the requested world position with kTerrainLODQuadRayStartZOffset (1,000,000) added to Z. /*0x4ec9d7*/
    v13[0] = worldPosition->x; /*0x4ec9dd*/
    v13[1] = y; /*0x4ec9e1*/
    v13[2] = v7; /*0x4ec9e5*/
    v12 = kTerrainLODQuadRayDirectionZ; /*0x4eca01*/
    v14[0] = 0.0; /*0x4eca05*/
    v14[1] = 0.0; /*0x4eca11*/
    v14[2] = v12;                               // Verified terrain pick ray direction is (0,0,-1), using kTerrainLODQuadRayDirectionZ. /*0x4eca15*/
    NiPickContext_ctor(v15); /*0x4eca19*/
    terrainLODNode_02C = this->terrainLODNode_02C; /*0x4eca1e*/
    v19 = 0; /*0x4eca27*/
    if ( v16 != terrainLODNode_02C ) /*0x4eca2b*/
    {
      if ( v16 ) /*0x4eca2f*/
      {
        v9 = v16; /*0x4eca31*/
        if ( !InterlockedDecrement((volatile LONG *)&v16->members) ) /*0x4eca37*/
          v9->vtbl->super.super.Destructor((NiRefObject *)v9, 1); /*0x4eca4d*/
      }
      v16 = terrainLODNode_02C; /*0x4eca51*/
      if ( terrainLODNode_02C ) /*0x4eca55*/
        InterlockedIncrement((volatile LONG *)&terrainLODNode_02C->members); /*0x4eca5b*/
    }
    *(_WORD *)((char *)&v18 + 1) = 0x101; /*0x4eca70*/
    v15[2] = 1; /*0x4eca7a*/
    if ( NiPick_ExecuteAndSort(v15, v13, v14, 0) )// Verified terrain query calls NiPick_ExecuteAndSort; the selected nearest record supplies intersectionPoint.z and its +0x28 auxiliary vector. For geometry records that vector is the normalized surface normal; bounds-only fallback records do not explicitly populate it. /*0x4eca82*/
    {
      pickRecord = *v17; /*0x4eca8f*/
      if ( *v17 ) /*0x4eca8f*/
      {
        *hitPointZOut = pickRecord->intersectionPoint_008.z;// Verified output is the selected NiPick record's intersection Z (record +0x10). /*0x4eca9c*/
        *pickVectorOut = pickRecord->surfaceNormal_028;// Probable for terrain NIF geometry hits: copies NiPickRecord.surfaceNormal_028. The scene-object fallback does not explicitly set this field, so keep the call-site interpretation Probable rather than universal. /*0x4ecaa5*/
        v5 = 1; /*0x4ecab0*/
      }
    }
    v19 = 0xFFFFFFFF; /*0x4ecab9*/
    NiPickContext_dtor(v15); /*0x4ecac1*/
  }
  return v5; /*0x4ecac8*/
}
