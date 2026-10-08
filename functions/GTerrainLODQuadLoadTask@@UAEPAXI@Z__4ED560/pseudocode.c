TerrainLODQuadLoadTask *__thiscall TerrainLODQuadLoadTask::`scalar deleting destructor'(
        TerrainLODQuadLoadTask *this,
        char a2)
{
  TerrainLODQuadLoadTask::~TerrainLODQuadLoadTask(this); /*0x4ed563*/
  if ( (a2 & 1) != 0 ) /*0x4ed56d*/
    FormHeapFree((unsigned int)this); /*0x4ed570*/
  return this; /*0x4ed57a*/
}
