BSTaskManager *__thiscall BSTaskManager::BSTaskManager(BSTaskManager *this, int a2, UInt32 arg4, UInt32 a3)
{
  void *v5; // eax
  BSTaskManagerThread **v6; // eax
  UInt32 v7; // ebp
  bool v8; // zf
  BSTaskThread *v9; // edi

  LockFreeMap::LockFreeMap((LockFreeMap *)this, arg4 + a2, a3, 0xCu);
  this->vtbl = &BSTaskManager<__int64>::`vftable';
  this->members.unk1C = 0;
  this->members.unk20 = 0;
  this->members.numThreads = arg4;
  v5 = (void *)FormHeapAlloc((unsigned __int64)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  this->members.unk2C = v5;
  _memset(v5, 0, 4 * a3);
  v6 = (BSTaskManagerThread **)FormHeapAlloc(
                                 (unsigned __int64)this->members.numThreads >> 0x1E != 0
                               ? 0xFFFFFFFF
                               : 4 * this->members.numThreads);
  v7 = 0;
  v8 = this->members.numThreads == 0;
  this->members.threads = v6;
  if ( !v8 )
  {
    do
    {
      v9 = (BSTaskThread *)FormHeapAlloc(0x28u);
      if ( v9 )
      {
        BSTaskThread::BSTaskThread((PULONG *)v9, v7 + 2, "BSTaskManagerThread");
        v9->vtbl = &BSTaskManagerThread<__int64>::`vftable';
        v9[1].vtbl = this;
      }
      else
      {
        v9 = 0;
      }
      this->members.threads[v7] = (BSTaskManagerThread *)v9;
      BSTaskThread::Resume((PULONG *)this->members.threads[v7++]);
    }
    while ( v7 < this->members.numThreads );
  }
  return this;
}
