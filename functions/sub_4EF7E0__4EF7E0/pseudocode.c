// Verified: climbs parentWorldspace to the root TESWorldSpace and returns its embedded terrainLODQuadRoots map at +0x38.
TESWorldSpaceTerrainLODQuadMap *__fastcall TESWorldSpace_GetRootTerrainLODQuadMap(TESWorldSpace *worldspace)
{
  TESWorldSpace *i; // eax

  for ( i = worldspace->parentWorldspace; i; i = i->parentWorldspace ) /*0x4ef7e5*/
    worldspace = i; /*0x4ef7e7*/
  return &worldspace->terrainLODQuadRoots; /*0x4ef7f3*/
}
