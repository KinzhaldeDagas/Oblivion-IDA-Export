TerrainLODQuadLoadTask *__thiscall TerrainLODQuadLoadTask::`scalar deleting destructor'(
        TerrainLODQuadLoadTask *this,
        char a2)
{
  TerrainLODQuadLoadTask::~TerrainLODQuadLoadTask(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
