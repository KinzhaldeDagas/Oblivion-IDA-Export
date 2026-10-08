void __thiscall IOManager::~IOManager(IOManager *this)
{
  LockFreeMap *taskQueue; // esi

  this->vtbl = &IOManager::`vftable'; /*0x434579*/
  taskQueue = (LockFreeMap *)this->members.taskQueue; /*0x43457f*/
  if ( taskQueue ) /*0x43458c*/
  {
    taskQueue->vtbl = &LockFreeQueue<NiPointer<IOTask>>::`vftable'; /*0x434592*/
    sub_43D510(taskQueue, 1); /*0x434598*/
    FormHeapFree(taskQueue->members.unk10); /*0x4345a9*/
    FormHeapFree((unsigned int)taskQueue); /*0x4345af*/
  }
  sub_4343C0(&this->vtbl); /*0x4345c1*/
}
