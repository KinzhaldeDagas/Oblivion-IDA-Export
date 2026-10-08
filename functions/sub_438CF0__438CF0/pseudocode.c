LockFreeQueue_NiIOTask *__thiscall sub_438CF0(LockFreeQueue_NiIOTask *this, unsigned int a2, UInt32 a3)
{
  NodeNiPtrIOTask *v4; // eax
  ThreadSpecificInterfaceManager *v5; // eax
  ThreadSpecificInterfaceManager *v6; // eax

  this->vtbl = &LockFreeQueue<NiPointer<AttachDistant3DTask>>::`vftable'; /*0x438d14*/
  this->unk18 = 0; /*0x438d1c*/
  v4 = (NodeNiPtrIOTask *)FormHeapAlloc(8u); /*0x438d23*/
  if ( v4 ) /*0x438d2d*/
  {
    v4->next = 0; /*0x438d2f*/
    v4->data.data = 0; /*0x438d35*/
  }
  else
  {
    v4 = 0; /*0x438d3e*/
  }
  this->head = v4; /*0x438d44*/
  this->tail = v4; /*0x438d47*/
  this->unk0C = a3; /*0x438d4e*/
  this->unk10 = (void *)FormHeapAlloc((unsigned __int64)(2 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 8 * a2);
  v5 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x438d6f*/
  if ( v5 ) /*0x438d85*/
    v6 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v5, a2); /*0x438d8a*/
  else
    v6 = 0; /*0x438d91*/
  this->unk14 = v6; /*0x438d93*/
  return this; /*0x438d98*/
}
