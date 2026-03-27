ExtraCell3D *__thiscall BSExtraData::ExtraCell3D(ExtraCell3D *this)
{
  this->super.type = 3;
  this->super.next = 0;
  this->vtbl = (BSExtraDataVtbl *)&ExtraCell3D::`vftable';
  this->unk001 = 0;
  return this;
}
