int *__thiscall sub_6EBDF0(int *this, char a2)
{
  if ( (a2 & 2) != 0 ) /*0x6ebdfb*/
  {
    _LN21((char *)this, 0x14u, *(this + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_6EBB40); /*0x6ebe0d*/
    if ( (a2 & 1) != 0 ) /*0x6ebe15*/
      FormHeapFree((unsigned int)(this + 0xFFFFFFFF)); /*0x6ebe18*/
    return this + 0xFFFFFFFF; /*0x6ebe20*/
  }
  else
  {
    sub_6EBB40(this); /*0x6ebe28*/
    if ( (a2 & 1) != 0 ) /*0x6ebe30*/
      FormHeapFree((unsigned int)this); /*0x6ebe33*/
    return this; /*0x6ebe3b*/
  }
}
