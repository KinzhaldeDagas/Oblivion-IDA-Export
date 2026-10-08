// Verified task constructor for the embedded-record source path: initializes IOTask, sets DistantLODLoaderTask vtable, stores owner map and DistantLODLoaderTaskData, and carries no external .lod path.
IOTask *__thiscall DistantLODLoaderTask_ctorEmbeddedRecordSource(
        IOTask *this,
        unsigned __int8 priority,
        LockFreeMap *ownerMap,
        DistantLODLoaderTaskData *taskData)
{
  sub_436FA0(this, priority); /*0x4bca98*/
  this->vtbl = &DistantLODLoaderTask::`vftable'; /*0x4bcaa5*/
  *((_DWORD *)this + 0xA) = ownerMap; /*0x4bcaab*/
  *((_DWORD *)this + 0xB) = taskData; /*0x4bcaae*/
  return this; /*0x4bcab3*/
}
