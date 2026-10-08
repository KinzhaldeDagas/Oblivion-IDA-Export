// Verified BuildMesh scheduling: allocates a TerrainLODQuadLoadTask with priority 3 and the current quad-data context; passes the worldspace filename key and quad tile coordinates, then queues the task.
char __thiscall TESTerrainLODQuad_BuildMesh(TESTerrainLODQuad_OblivionComplete_060 *this)
{
  TerrainLODQuadState_Oblivion state; // eax
  void **p_unknown_004; // ebx
  TerrainLODQuadLoadTask_OblivionLayout_048Verified *v5; // eax
  TESWorldSpaceTerrainLODQuadMap *ownerMap; // edx
  _DWORD *vtable; // edx
  TerrainLODQuadLoadTask_OblivionLayout_048Verified *Task; // eax

  state = this->state; /*0x4ed346*/
  if ( state == TerrainLODQuadState_Unloaded || state == TerrainLODQuadState_Loading )
  {
    if ( this->root )
    {
      p_unknown_004 = &this->unknown_004; /*0x4ed3a0*/
      if ( !this->unknown_004 ) /*0x4ed39c*/
      {
        this->state = TerrainLODQuadState_Loading; /*0x4ed3a7*/
        v5 = (TerrainLODQuadLoadTask_OblivionLayout_048Verified *)FormHeapAlloc(0x48u); /*0x4ed3ae*/
        if ( v5 ) /*0x4ed3c4*/
        {
          if ( this->root && (ownerMap = this->root->ownerMap) != 0 ) /*0x4ed3d9*/
            vtable = ownerMap[1].vtable; /*0x4ed3db*/
          else
            vtable = 0; /*0x4ed3e0*/
          Task = TerrainLODQuadLoadTask::TerrainLODQuadLoadTask( /*0x4ed3f7*/
                   v5,
                   this,
                   vtable[3],
                   0x20 * this->root->quadX,
                   0x20 * this->root->quadY);   // Verified task factory passes the owning WorldSpace FormID and tile-file coordinates derived from quadX/quadY (each multiplied by 32) into the terrain NIF load task.
        }
        else
        {
          Task = 0; /*0x4ed3fe*/
        }
        sub_4BCB70((int *)&this->unknown_004, (int)Task); /*0x4ed40b*/
        (*(void (__thiscall **)(void *))(*(_DWORD *)*p_unknown_004 + 0x20))(*p_unknown_004); /*0x4ed417*/
      }
      return 1; /*0x4ed419*/
    }
    else
    {
      sub_40FEC0("TESTerrainLODQuad::BuildMesh(): pQuadRoot = NULL");
      return 0; /*0x4ed387*/
    }
  }
  else
  {
    PrintError("TESTerrainLODQuad::BuildMesh called on LOD chunk that isn't free."); /*0x4ed358*/
    return 0; /*0x4ed360*/
  }
}
