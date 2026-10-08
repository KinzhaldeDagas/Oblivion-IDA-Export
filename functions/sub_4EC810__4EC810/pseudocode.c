// Verified release path: releases terrainLODNode and finishes in Unloaded (5); if not already UnloadPending (4), first moves into state 4.
void __thiscall TESTerrainLODQuad_ReleaseMesh(TESTerrainLODQuad_OblivionComplete_060 *this)
{
  TerrainLODQuadState_Oblivion state; // eax
  NiAVObject *terrainLODNode_02C; // edi

  state = this->state; /*0x4ec813*/
  if ( state != TerrainLODQuadState_Unloaded ) /*0x4ec819*/
  {
    if ( state != TerrainLODQuadState_UnloadPending ) /*0x4ec81e*/
      this->state = TerrainLODQuadState_UnloadPending; /*0x4ec820*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4ec82a*/
    terrainLODNode_02C = this->terrainLODNode_02C; /*0x4ec82f*/
    if ( terrainLODNode_02C ) /*0x4ec837*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&terrainLODNode_02C->members) ) /*0x4ec83d*/
        terrainLODNode_02C->vtbl->super.super.Destructor((NiRefObject *)terrainLODNode_02C, 1); /*0x4ec853*/
      this->terrainLODNode_02C = 0; /*0x4ec855*/
    }
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4ec85e*/
    this->state = TerrainLODQuadState_Unloaded; // Verified final unload transition: releases terrainLODNode and sets quad state to Unloaded (5). State values 0 and 6 were not observed in this quad state machine and remain Unknown. /*0x4ec866*/
  }
}
