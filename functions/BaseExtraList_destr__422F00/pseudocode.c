int __thiscall BaseExtraList_destr(ExtraDataList *this)
{
  this->vtbl = &BaseExtraList::`vftable';
  return BaseExtraList_Clear(this, 1);
}
