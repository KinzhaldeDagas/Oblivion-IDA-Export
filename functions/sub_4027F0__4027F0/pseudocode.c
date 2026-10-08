int *__thiscall sub_4027F0(int *this, char a2)
{
  int v4; // esi

  if ( (a2 & 2) != 0 ) /*0x4027fc*/
  {
    _LN21((char *)this, 4u, *(this + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x40280d*/
    if ( (a2 & 1) != 0 ) /*0x402815*/
      FormHeapFree((unsigned int)(this + 0xFFFFFFFF)); /*0x402818*/
    return this + 0xFFFFFFFF; /*0x402821*/
  }
  else
  {
    v4 = *this; /*0x402828*/
    if ( *this ) /*0x402828*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x402832*/
      {
        if ( v4 ) /*0x40283e*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x402848*/
      }
    }
    if ( (a2 & 1) != 0 ) /*0x40284d*/
      FormHeapFree((unsigned int)this); /*0x402850*/
    return this; /*0x402858*/
  }
}
