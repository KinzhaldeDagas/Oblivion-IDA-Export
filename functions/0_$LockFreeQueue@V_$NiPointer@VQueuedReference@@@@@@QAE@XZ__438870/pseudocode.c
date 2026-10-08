LockFreeQueue_NiIOTask *__thiscall LockFreeQueue<NiPointer<QueuedReference>>::LockFreeQueue<NiPointer<QueuedReference>>(
        LockFreeQueue_NiIOTask *this,
        unsigned int a2,
        UInt32 a3)
{
  NodeNiPtrIOTask *v4; // eax
  ThreadSpecificInterfaceManager *v5; // eax
  ThreadSpecificInterfaceManager *v6; // eax

  this->vtbl = &LockFreeQueue<NiPointer<QueuedReference>>::`vftable'; /*0x438894*/
  this->unk18 = 0; /*0x43889c*/
  v4 = (NodeNiPtrIOTask *)FormHeapAlloc(8u); /*0x4388a3*/
  if ( v4 ) /*0x4388ad*/
  {
    v4->next = 0; /*0x4388af*/
    v4->data.data = 0; /*0x4388b5*/
  }
  else
  {
    v4 = 0; /*0x4388be*/
  }
  this->head = v4; /*0x4388c4*/
  this->tail = v4; /*0x4388c7*/
  this->unk0C = a3; /*0x4388ce*/
  this->unk10 = (void *)FormHeapAlloc((unsigned __int64)(2 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 8 * a2);
  v5 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x4388ef*/
  if ( v5 ) /*0x438905*/
    v6 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v5, a2); /*0x43890a*/
  else
    v6 = 0; /*0x438911*/
  this->unk14 = v6; /*0x438913*/
  return this; /*0x438918*/
}
