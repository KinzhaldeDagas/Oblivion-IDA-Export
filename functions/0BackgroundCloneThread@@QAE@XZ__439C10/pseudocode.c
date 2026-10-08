BackgroundCloneThread *__thiscall BackgroundCloneThread::BackgroundCloneThread(
        BackgroundCloneThread *this,
        unsigned int a2)
{
  LockFreeQueue_NiIOTask *v3; // eax
  LockFreeQueue_NiIOTask *v4; // eax

  BSTaskThread::BSTaskThread((PULONG *)this, 3, "BackgroundCloneThread"); /*0x439c41*/
  this->vtbl = &BackgroundCloneThread::`vftable'; /*0x439c46*/
  this->semaphores[0].maximumCount = 0; /*0x439c56*/
  v3 = (LockFreeQueue_NiIOTask *)FormHeapAlloc(0x1Cu); /*0x439c5d*/
  if ( v3 ) /*0x439c70*/
    v4 = LockFreeQueue<NiPointer<QueuedReference>>::LockFreeQueue<NiPointer<QueuedReference>>(v3, a2, 8u); /*0x439c7b*/
  else
    v4 = 0; /*0x439c82*/
  this->semaphores[0].handle = v4; /*0x439c84*/
  return this; /*0x439c89*/
}
