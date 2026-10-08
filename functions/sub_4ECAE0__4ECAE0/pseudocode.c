// Verified recursive unload state machine: Attached(3)->LoadedDetached(2) removes the terrain node; LoadedDetached(2)->UnloadPending(4); the next unload pass releases the mesh and reaches Unloaded(5). The same transition recurses over four child pointers at +0x30..+0x3C.
void __thiscall TESTerrainLODQuad_AdvanceUnloadState(
        TESTerrainLODQuad_OblivionComplete_060 *this,
        NiNode *landLODParent)
{
  NiNode *v2; // ebx
  NiNode *v4; // edi
  void **children_030; // esi
  int v6; // edi

  v2 = landLODParent; /*0x4ecae1*/
  switch ( this->state ) /*0x4ecaef*/
  {
    case TerrainLODQuadState_LoadedDetached: /*0x4ecaef*/
      this->state = TerrainLODQuadState_UnloadPending;// Verified deferred-unload transition: a LoadedDetached quad moves to UnloadPending (4); a later update releases its mesh and transitions to Unloaded (5). /*0x4ecb44*/
      break;
    case TerrainLODQuadState_Attached: /*0x4ecaef*/
      landLODParent->vtbl->RemoveObject(landLODParent, (NiAVObject **)&landLODParent, this->terrainLODNode_02C); /*0x4ecb15*/
      v4 = landLODParent; /*0x4ecb17*/
      if ( landLODParent ) /*0x4ecb1d*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&landLODParent->members) ) /*0x4ecb23*/
        {
          if ( v4 ) /*0x4ecb2f*/
            v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x4ecb39*/
        }
      }
      this->state = TerrainLODQuadState_LoadedDetached;// Verified detach transition: removes terrainLODNode from LandLOD and changes state from Attached (3) to LoadedDetached (2). /*0x4ecb3b*/
      break;
    case TerrainLODQuadState_UnloadPending: /*0x4ecaef*/
      TESTerrainLODQuad_ReleaseMesh(this); /*0x4ecafb*/
      break;
  }
  children_030 = this->children_030; /*0x4ecb4b*/
  if ( *children_030 ) /*0x4ecb4e*/
  {
    v6 = 4;                                     // Verified recursion over the four child-quad pointers at +0x30..+0x3C applies the same detach/unload state progression to descendants. /*0x4ecb53*/
    do /*0x4ecb66*/
    {
      TESTerrainLODQuad_AdvanceUnloadState((TESTerrainLODQuad_OblivionComplete_060 *)*children_030++, v2); /*0x4ecb5b*/
      --v6; /*0x4ecb63*/
    }
    while ( v6 ); /*0x4ecb66*/
  }
}
