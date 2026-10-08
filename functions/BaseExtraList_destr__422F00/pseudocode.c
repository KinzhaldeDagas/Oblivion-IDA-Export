int __thiscall BaseExtraList_destr(ExtraDataList *this)
{
  this->vtbl = &BaseExtraList::`vftable'; /*0x422f02*/
  return BaseExtraList_Clear(this, 1); /*0x422f0d*/
}
