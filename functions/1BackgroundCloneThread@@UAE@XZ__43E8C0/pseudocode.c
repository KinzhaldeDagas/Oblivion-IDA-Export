void __thiscall BackgroundCloneThread::~BackgroundCloneThread(BackgroundCloneThread *this)
{
  LockFreeMap *handle; // esi

  this->vtbl = &BackgroundCloneThread::`vftable'; /*0x43e8e9*/
  handle = (LockFreeMap *)this->semaphores[0].handle; /*0x43e8ef*/
  if ( handle ) /*0x43e8fc*/
  {
    handle->vtbl = &LockFreeQueue<NiPointer<QueuedReference>>::`vftable'; /*0x43e902*/
    sub_43D510(handle, 1); /*0x43e908*/
    FormHeapFree(handle->members.unk10); /*0x43e919*/
    FormHeapFree((unsigned int)handle); /*0x43e91f*/
  }
  BSTaskManagerThread<__int64>::~BSTaskManagerThread<__int64>((HANDLE *)&this->vtbl); /*0x43e931*/
}
