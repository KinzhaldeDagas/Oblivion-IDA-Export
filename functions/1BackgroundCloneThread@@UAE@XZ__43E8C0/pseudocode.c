void __thiscall BackgroundCloneThread::~BackgroundCloneThread(BackgroundCloneThread *this)
{
  LockFreeMap *handle; // esi

  this->vtbl = &BackgroundCloneThread::`vftable';
  handle = (LockFreeMap *)this->semaphores[0].handle;
  if ( handle )
  {
    handle->vtbl = &LockFreeQueue<NiPointer<QueuedReference>>::`vftable';
    sub_43D510(handle, 1);
    FormHeapFree(handle->members.unk10);
    FormHeapFree((unsigned int)handle);
  }
  BSTaskManagerThread<__int64>::~BSTaskManagerThread<__int64>((HANDLE *)&this->vtbl);
}
