ExtraDataList *__thiscall BaseExtraList_VDdestr(ExtraDataList *this, char a2)
{
  this->vtbl = &BaseExtraList::`vftable';
  BaseExtraList_Clear(this, 1);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
