// Verified per-frame terrain-quad state machine: outside maximumLODQuadDistance advances detach/unload; in range, Unloaded/Loading quads without geometry request a NIF, LoadedDetached/UnloadPending quads attach under LandLOD and become Attached, while Attached quads are stable. State meanings for 1..5 are written in TerrainLODQuadState_Oblivion; values 0 and 6 are Unknown.
int __thiscall TESTerrainLODQuad_Update(
        TESTerrainLODQuad_OblivionComplete_060 *this,
        NiNode *landLODParent,
        float maximumLODQuadDistance,
        float viewX,
        float viewY,
        int unknownArg)
{
  TESTerrainLODQuadRoot_OblivionLayout_010Verified *root; // eax
  TerrainLODQuadState_Oblivion state; // eax
  float *terrainLODNode_02C; // ecx
  TerrainLODQuadState_Oblivion v12; // eax
  float landLODParenta; // [esp+20h] [ebp+4h]

  if ( !landLODParent ) /*0x4ed43d*/
    return 0; /*0x4ed43d*/
  root = this->root; /*0x4ed43f*/
  this->quadOriginX_018 = (float)(this->root->quadX << 0x11);// Verified world origin: quadOriginX = signed quadX << 17, matching kTerrainLODQuadWorldSize = 131072 world units. /*0x4ed454*/
  landLODParenta = (float)(root->quadY << 0x11);// Verified world origin: quadOriginY = signed quadY << 17, matching kTerrainLODQuadWorldSize = 131072 world units. /*0x4ed46f*/
  this->quadOriginY_01C = landLODParenta; /*0x4ed477*/
  if ( maximumLODQuadDistance < TESTerrainLODQuad_DistanceToXYBounds( /*0x4ed4a8*/
                                  this->quadOriginX_018,
                                  landLODParenta,
                                  kTerrainLODQuadWorldSize,
                                  viewX,
                                  viewY) )
  {
    TESTerrainLODQuad_AdvanceUnloadState(this, landLODParent); /*0x4ed4ad*/
    return 0; /*0x4ed4b9*/
  }
  state = this->state; /*0x4ed4bc*/
  if ( state == TerrainLODQuadState_Attached ) /*0x4ed4c2*/
    return 0; /*0x4ed4c2*/
  if ( (state == TerrainLODQuadState_Unloaded || state == TerrainLODQuadState_Loading) && !this->terrainLODNode_02C ) /*0x4ed4ce*/
  {
    if ( !TESTerrainLODQuad_BuildMesh(this) ) /*0x4ed4d6*/
      PrintError("TESTerrainLODQuad::BuildMesh() failed for %i,%i.", this->root->quadX, this->root->quadY); /*0x4ed4f0*/
    terrainLODNode_02C = (float *)this->terrainLODNode_02C; /*0x4ed4f8*/
    if ( !terrainLODNode_02C ) /*0x4ed4fd*/
      return 0; /*0x4ed4fd*/
    sub_404CF0(terrainLODNode_02C, this->quadOriginX_018, this->quadOriginY_01C, 0.0); /*0x4ed515*/
  }
  v12 = this->state; /*0x4ed51a*/
  if ( v12 == TerrainLODQuadState_LoadedDetached || v12 == TerrainLODQuadState_UnloadPending ) /*0x4ed525*/
  {
    ((void (__thiscall *)(NiNode *, NiAVObject *, int))landLODParent->vtbl->AddObject)( /*0x4ed537*/
      landLODParent,
      this->terrainLODNode_02C,
      1);
    this->state = TerrainLODQuadState_Attached; // Verified attach transition: attaches terrainLODNode to the LandLOD parent and changes quad state to Attached (3). /*0x4ed539*/
    sub_43FCD0((GridCellArray **)MEMORY[0xB333A0]); /*0x4ed546*/
  }
  return *(_DWORD *)&this->unknown_020_02B[4] - 2; /*0x4ed4b2*/
}
