BackgroundCloneThread *__thiscall BackgroundCloneThread::BackgroundCloneThread(
        BackgroundCloneThread *this,
        unsigned int a2)
{
  LockFreeQueue_NiIOTask *v3; // eax
  LockFreeQueue_NiIOTask *v4; // eax

  BSTaskThread::BSTaskThread((PULONG *)this, 3, "BackgroundCloneThread");
  this->vtbl = &BackgroundCloneThread::`vftable';
  this->semaphores[0].maximumCount = 0;
  v3 = (LockFreeQueue_NiIOTask *)FormHeapAlloc(0x1Cu);
  if ( v3 )
    v4 = LockFreeQueue<NiPointer<QueuedReference>>::LockFreeQueue<NiPointer<QueuedReference>>(v3, a2, 8u);
  else
    v4 = 0;
  this->semaphores[0].handle = v4;
  return this;
}
