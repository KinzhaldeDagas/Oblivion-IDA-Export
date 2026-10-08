ExtraDataList *__thiscall BaseExtraList_VDdestr(ExtraDataList *this, char a2)
{
  this->vtbl = &BaseExtraList::`vftable'; /*0x4259b5*/
  BaseExtraList_Clear(this, 1); /*0x4259bb*/
  if ( (a2 & 1) != 0 ) /*0x4259c5*/
    FormHeapFree((unsigned int)this); /*0x4259c8*/
  return this; /*0x4259d2*/
}
