IOManager *__thiscall IOManager::IOManager(IOManager *this)
{
  LockFreeQueue_NiIOTask *v2; // eax
  LockFreeQueue_NiIOTask *v3; // eax

  BSTaskManager::BSTaskManager((BSTaskManager *)this, 2, 1u, 0x12u);// IOManager constructs its BSTaskManager with one worker thread (numThreads = 1). /*0x4344b0*/
  this->vtbl = &IOManager::`vftable'; /*0x4344bf*/
  this->members.unk38 = 6; /*0x4344c5*/
  v2 = (LockFreeQueue_NiIOTask *)FormHeapAlloc(0x1Cu); /*0x4344cc*/
  if ( v2 ) /*0x4344df*/
    v3 = LockFreeQueue<NiPointer<IOTask>>::LockFreeQueue<NiPointer<IOTask>>(v2, 3u, 8u); /*0x4344e7*/
  else
    v3 = 0; /*0x4344ee*/
  this->members.taskQueue = v3; /*0x4344f5*/
  QueryPerformanceFrequency(&MEMORY[0xB33A08]); /*0x4344f8*/
  this->members.currentThreadIDBoh = (*this->members.super.threads)->super.threadID; /*0x434506*/
  return this; /*0x43450b*/
}
