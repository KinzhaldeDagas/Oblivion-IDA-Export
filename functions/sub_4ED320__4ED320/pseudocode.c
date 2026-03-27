char __thiscall sub_4ED320(int *this)
{
  int v2; // eax
  _DWORD *v4; // ebx
  TerrainLODQuadLoadTask *v5; // eax
  int v6; // edx
  int v7; // edx
  TerrainLODQuadLoadTask *Task; // eax

  v2 = *(this + 2);
  if ( v2 == 5 || v2 == 1 )
  {
    if ( *this )
    {
      v4 = this + 1;
      if ( !*(this + 1) )
      {
        *(this + 2) = 1;
        v5 = (TerrainLODQuadLoadTask *)FormHeapAlloc(0x48u);
        if ( v5 )
        {
          if ( *this && (v6 = *(_DWORD *)(*this + 4)) != 0 )
            v7 = *(_DWORD *)(v6 + 0x10);
          else
            v7 = 0;
          Task = TerrainLODQuadLoadTask::TerrainLODQuadLoadTask(
                   v5,
                   (int)this,
                   *(_DWORD *)(v7 + 0xC),
                   0x20 * *(__int16 *)(*this + 8),
                   0x20 * *(__int16 *)(*this + 0xA));
        }
        else
        {
          Task = 0;
        }
        sub_4BCB70(this + 1, (int)Task);
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v4 + 0x20))(*v4);
      }
      return 1;
    }
    else
    {
      sub_40FEC0("TESTerrainLODQuad::BuildMesh(): pQuadRoot = NULL");
      return 0;
    }
  }
  else
  {
    PrintError("TESTerrainLODQuad::BuildMesh called on LOD chunk that isn't free.");
    return 0;
  }
}
