void __thiscall IOManager::~IOManager(IOManager *this)
{
  LockFreeMap *taskQueue; // esi

  this->vtbl = &IOManager::`vftable';
  taskQueue = (LockFreeMap *)this->members.taskQueue;
  if ( taskQueue )
  {
    taskQueue->vtbl = &LockFreeQueue<NiPointer<IOTask>>::`vftable';
    sub_43D510(taskQueue, 1);
    FormHeapFree(taskQueue->members.unk10);
    FormHeapFree((unsigned int)taskQueue);
  }
  sub_4343C0(&this->vtbl);
}
