ExtraContainerChanges *__thiscall ExtraContainerChanges::ExtraContainerChanges(
        ExtraContainerChanges *this,
        ExtraContainerChanges_Data *a2)
{
  this->super.members.type = 0x1A;
  this->super.members.next = 0;
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraContainerChanges::`vftable';
  this->data = a2;
  return this;
}
