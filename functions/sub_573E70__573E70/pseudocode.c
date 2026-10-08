void __thiscall sub_573E70(unsigned int *this)
{
  MemoryHeap_Free_checked(unk_B3A6B4); /*0x573eab*/
  unk_B3A6B8 = 0; /*0x573eb2*/
  unk_B3A6B4 = 0; /*0x573ebc*/
  sub_573950(this); /*0x573ec6*/
  FormHeapFree(*(this + 1)); /*0x573ecf*/
  _LN21((char *)this + 0xC, 4u, 8, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x573eec*/
}
