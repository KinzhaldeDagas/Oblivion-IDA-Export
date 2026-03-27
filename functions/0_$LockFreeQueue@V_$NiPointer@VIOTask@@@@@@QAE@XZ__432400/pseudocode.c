LockFreeQueue_NiIOTask *__thiscall LockFreeQueue<NiPointer<IOTask>>::LockFreeQueue<NiPointer<IOTask>>(
        LockFreeQueue_NiIOTask *this,
        unsigned int a2,
        UInt32 a3)
{
  NodeNiPtrIOTask *v4; // eax
  ThreadSpecificInterfaceManager *v5; // eax
  ThreadSpecificInterfaceManager *v6; // eax

  this->vtbl = &LockFreeQueue<NiPointer<IOTask>>::`vftable';
  this->unk18 = 0;
  v4 = (NodeNiPtrIOTask *)FormHeapAlloc(8u);
  if ( v4 )
  {
    v4->next = 0;
    v4->data.data = 0;
  }
  else
  {
    v4 = 0;
  }
  this->head = v4;
  this->tail = v4;
  this->unk0C = a3;
  this->unk10 = (void *)FormHeapAlloc((unsigned __int64)(2 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 8 * a2);
  v5 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u);
  if ( v5 )
    v6 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v5, a2);
  else
    v6 = 0;
  this->unk14 = v6;
  return this;
}
