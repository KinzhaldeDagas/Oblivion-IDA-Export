// Verified task constructor for external .lod files: initializes the same owner/payload fields, sets the supplied DistantLOD\\<EditorID>_X_Y.lod path, and marks queued-file state for opening on the worker.
IOTask *__thiscall DistantLODLoaderTask_ctorExternalLodFile(
        IOTask *this,
        const char *lodPath,
        unsigned __int8 priority,
        LockFreeMap *ownerMap,
        DistantLODLoaderTaskData *taskData)
{
  sub_436FA0(this, priority); /*0x4bcaed*/
  *((_DWORD *)this + 0xA) = ownerMap; /*0x4bcafe*/
  this->vtbl = &DistantLODLoaderTask::`vftable'; /*0x4bcb0c*/
  *((_DWORD *)this + 0xB) = taskData; /*0x4bcb12*/
  sub_434600(this, lodPath); /*0x4bcb15*/
  sub_434CB0((char **)this, 0, 0); /*0x4bcb20*/
  return this; /*0x4bcb27*/
}
