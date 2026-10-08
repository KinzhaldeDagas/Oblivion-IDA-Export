// Verified quad lookup and terrain pick; Probable auxiliary output role: triangle geometry pick records supply the normalized surface normal at NiPickRecord +0x28..+0x30. Bounds-only fallback records do not explicitly populate that field. The embedded parser remaps the vector and adds it to rounded record positions; the purpose of its 0.97/128 clamp remains Unknown.
bool __thiscall TESWorldSpaceTerrainLODQuadMap_ProjectPointToLoadedTerrain(
        TESWorldSpaceTerrainLODQuadMap *this,
        NiPoint3 *worldPosition,
        float *hitPointZOut,
        NiPoint3 *pickVectorOut)
{
  int v5; // esi
  int v6; // eax
  TESTerrainLODQuadRoot_OblivionLayout_010Verified *Root; // eax
  TESTerrainLODQuad_OblivionComplete_060 *quadData; // ecx
  bool result; // al

  if ( !bUseLODLandData ) /*0x4eb373*/
    return 0; /*0x4eb3de*/
  v5 = 0xFFFFFFFF - Double_To_SInt32(worldPosition->x * kTerrainLODQuadWorldToGridScaleNegX);// Verified world-to-quad X conversion multiplies by kTerrainLODQuadWorldToGridScaleNegX (-1/131072), converts to signed integer, then computes 0xFFFFFFFF minus that result. Preserve this X-axis inversion in the key calculation. /*0x4eb39d*/
  v6 = Double_To_SInt32(worldPosition->y * kTerrainLODQuadWorldToGridScale);// Verified world-to-quad Y conversion multiplies by kTerrainLODQuadWorldToGridScale (+1/131072) and converts to signed integer. /*0x4eb39f*/
  Root = TESWorldSpaceTerrainLODQuadMap_GetOrCreateRoot(this, v5, v6, 0); /*0x4eb3aa*/
  if ( !Root ) /*0x4eb3b3*/
    return 0; /*0x4eb3d7*/
  quadData = Root->quadData; /*0x4eb3b5*/
  result = 0; /*0x4eb3b7*/
  if ( quadData ) /*0x4eb3bb*/
    return TESTerrainLODQuad_PickSurfacePoint(quadData, worldPosition, hitPointZOut, pickVectorOut); /*0x4eb3c8*/
  return result; /*0x4eb3cf*/
}
