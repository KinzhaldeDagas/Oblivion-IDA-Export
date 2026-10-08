// Verified — linked-point state dispatcher. In an interior, it obtains the current interior cell's PathGrid and applies the reference toggle. Otherwise it scans the loaded exterior grid as a uGridsToLoad × uGridsToLoad array, obtains each present cell's PathGrid, and applies the same toggle. The exterior loop and call to SetLinkedPointsEnabled are confirmed in disassembly at 0x4E5247–0x4E5264. Fallout comparison: Fallout PathBuilder::BuildNavMeshInfoPath (0x82241A48) reconstructs a route through NavMeshInfo nodes and linked-door references into VirtualPathingNodes; that is a different navigation representation and does not establish Oblivion linked-point semantics.
void __cdecl TESPathGrid_SetLinkedPointsEnabledForCurrentCells(TESObjectREFR *reference, bool enabled)
{
  TESObjectCELL *currentInteriorCell; // ecx
  TESPathGrid *v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // edi
  unsigned int v6; // esi

  currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x4e51f5*/
  if ( currentInteriorCell ) /*0x4e51fa*/
  {
    v3 = (TESPathGrid *)sub_4AF170(currentInteriorCell); /*0x4e51fc*/
    if ( v3 ) /*0x4e5203*/
    {
      TESPathGrid_SetLinkedPointsEnabled(v3, reference, enabled); /*0x4e5211*/
      return; /*0x4e5216*/
    }
  }
  else
  {
    v4 = uGridsToLoad; /*0x4e5218*/
    for ( i = 0; i < v4; ++i ) /*0x4e5218*/
    {
      v6 = 0; /*0x4e5230*/
      do /*0x4e5268*/
      {
        if ( GetGridEntry(MEMORY[0xB333A0]->gridCellArray, i, v6) ) /*0x4e523c*/
          JUMPOUT(0x4E5247); /*0x4e5247*/
        ++v6; /*0x4e5263*/
      }
      while ( v6 < v4 ); /*0x4e5268*/
    }
  }
  sub_4E5275(); /*0x4e5203*/
}
