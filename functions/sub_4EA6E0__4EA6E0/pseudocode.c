// Verified position-triggered LandLOD refresh wrapper: resolves current WorldSpace, climbs parentWorldspace to the root, obtains root terrainLODQuadRoots via TESWorldSpace_GetRootTerrainLODQuadMap, and delegates to DistantLOD_UpdateLandLODMap.
void __cdecl DistantLOD_UpdateLandLODAtPosition(unsigned int a1, float a2, int a3, int a4)
{
  TESWorldSpace *CurrentWorldspace; // eax
  TESWorldSpace *PointerAtOffset7C; // esi
  TESWorldSpaceTerrainLODQuadMap *RootTerrainLODQuadMap; // eax

  CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x4ea6e7*/
  PointerAtOffset7C = CurrentWorldspace; /*0x4ea6ec*/
  if ( CurrentWorldspace ) /*0x4ea6f0*/
  {
    if ( Shared_GetPointerAtOffset7C(CurrentWorldspace) ) /*0x4ea6f4*/
    {
      do /*0x4ea70b*/
        PointerAtOffset7C = (TESWorldSpace *)Shared_GetPointerAtOffset7C(PointerAtOffset7C); /*0x4ea707*/
      while ( Shared_GetPointerAtOffset7C(PointerAtOffset7C) ); /*0x4ea70b*/
    }
    RootTerrainLODQuadMap = TESWorldSpace_GetRootTerrainLODQuadMap(PointerAtOffset7C); /*0x4ea71b*/
    DistantLOD_UpdateLandLODMap(a1, a2, a3, RootTerrainLODQuadMap, a4); /*0x4ea73a*/
  }
}
