IOManager *__thiscall IOManager::IOManager(IOManager *this)
{
  LockFreeQueue_NiIOTask *v2; // eax
  LockFreeQueue_NiIOTask *v3; // eax

  BSTaskManager::BSTaskManager((BSTaskManager *)this, 2, 1u, 0x12u);
  this->vtbl = &IOManager::`vftable';
  this->members.unk38 = 6;
  v2 = (LockFreeQueue_NiIOTask *)FormHeapAlloc(0x1Cu);
  if ( v2 )
    v3 = LockFreeQueue<NiPointer<IOTask>>::LockFreeQueue<NiPointer<IOTask>>(v2, 3u, 8u);
  else
    v3 = 0;
  this->members.taskQueue = v3;
  QueryPerformanceFrequency(&Frequency);
  this->members.currentThreadIDBoh = (*this->members.super.threads)->super.threadID;
  return this;
}
