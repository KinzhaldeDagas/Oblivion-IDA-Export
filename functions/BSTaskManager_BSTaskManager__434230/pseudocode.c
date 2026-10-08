BSTaskManager *__thiscall BSTaskManager::BSTaskManager(BSTaskManager *this, int a2, UInt32 arg4, UInt32 a3)
{
  void *v5; // eax
  BSTaskManagerThread **v6; // eax
  UInt32 v7; // ebp
  bool v8; // zf
  BSTaskThread *v9; // edi

  LockFreeMap::LockFreeMap((LockFreeMap *)this, arg4 + a2, a3, 0xCu); /*0x43426d*/
  this->vtbl = &BSTaskManager<__int64>::`vftable'; /*0x434282*/
  this->members.unk1C = 0; /*0x434288*/
  this->members.unk20 = 0; /*0x43428f*/
  this->members.numThreads = arg4; /*0x434292*/
  v5 = (void *)FormHeapAlloc((unsigned __int64)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  this->members.unk2C = v5; /*0x4342a9*/
  _memset((int)v5, 0, 4 * a3); /*0x4342ac*/
  v6 = (BSTaskManagerThread **)FormHeapAlloc(
                                 (unsigned __int64)this->members.numThreads >> 0x1E != 0
                               ? 0xFFFFFFFF
                               : 4 * this->members.numThreads);
  v7 = 0; /*0x4342cd*/
  v8 = this->members.numThreads == 0; /*0x4342cf*/
  this->members.threads = v6; /*0x4342d2*/
  if ( !v8 ) /*0x4342d5*/
  {
    do /*0x434328*/
    {
      v9 = (BSTaskThread *)FormHeapAlloc(0x28u); /*0x4342de*/
      if ( v9 ) /*0x4342ee*/
      {
        BSTaskThread::BSTaskThread((PULONG *)v9, v7 + 2, "BSTaskManagerThread"); /*0x4342fb*/
        v9->vtbl = &BSTaskManagerThread<__int64>::`vftable'; /*0x434300*/
        v9[1].vtbl = this; /*0x434306*/
      }
      else
      {
        v9 = 0; /*0x43430b*/
      }
      this->members.threads[v7] = (BSTaskManagerThread *)v9; /*0x434310*/
      BSTaskThread::Resume((PULONG *)this->members.threads[v7++]); /*0x43431d*/
    }
    while ( v7 < this->members.numThreads ); /*0x434328*/
  }
  return this; /*0x43432c*/
}
