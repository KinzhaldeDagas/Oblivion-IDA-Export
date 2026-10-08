int *__thiscall sub_72CA40(int *this, char a2)
{
  if ( (a2 & 2) != 0 ) /*0x72ca4b*/
  {
    _LN21((char *)this, 0x2Cu, *(this + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_72C450); /*0x72ca5d*/
    if ( (a2 & 1) != 0 ) /*0x72ca65*/
      FormHeapFree((unsigned int)(this + 0xFFFFFFFF)); /*0x72ca68*/
    return this + 0xFFFFFFFF; /*0x72ca70*/
  }
  else
  {
    sub_72C450((unsigned int *)this); /*0x72ca78*/
    if ( (a2 & 1) != 0 ) /*0x72ca80*/
      FormHeapFree((unsigned int)this); /*0x72ca83*/
    return this; /*0x72ca8b*/
  }
}
