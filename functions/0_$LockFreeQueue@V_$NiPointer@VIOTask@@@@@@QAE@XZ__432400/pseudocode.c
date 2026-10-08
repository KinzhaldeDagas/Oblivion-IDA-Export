LockFreeQueue_NiIOTask *__thiscall LockFreeQueue<NiPointer<IOTask>>::LockFreeQueue<NiPointer<IOTask>>(
        LockFreeQueue_NiIOTask *this,
        unsigned int a2,
        UInt32 a3)
{
  NodeNiPtrIOTask *v4; // eax
  ThreadSpecificInterfaceManager *v5; // eax
  ThreadSpecificInterfaceManager *v6; // eax

  this->vtbl = &LockFreeQueue<NiPointer<IOTask>>::`vftable'; /*0x432424*/
  this->unk18 = 0; /*0x43242c*/
  v4 = (NodeNiPtrIOTask *)FormHeapAlloc(8u); /*0x432433*/
  if ( v4 ) /*0x43243d*/
  {
    v4->next = 0; /*0x43243f*/
    v4->data.data = 0; /*0x432445*/
  }
  else
  {
    v4 = 0; /*0x43244e*/
  }
  this->head = v4; /*0x432454*/
  this->tail = v4; /*0x432457*/
  this->unk0C = a3; /*0x43245e*/
  this->unk10 = (void *)FormHeapAlloc((unsigned __int64)(2 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 8 * a2);
  v5 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x43247f*/
  if ( v5 ) /*0x432495*/
    v6 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v5, a2); /*0x43249a*/
  else
    v6 = 0; /*0x4324a1*/
  this->unk14 = v6; /*0x4324a3*/
  return this; /*0x4324a8*/
}
