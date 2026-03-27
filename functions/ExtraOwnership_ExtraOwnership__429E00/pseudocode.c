ExtraOwnership *__thiscall ExtraOwnership::ExtraOwnership(ExtraOwnership *this, TESForm *a2)
{
  this->super.members.type = 0x27;
  this->super.members.next = 0;
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraOwnership::`vftable';
  this->owner.ownerForm = a2;
  return this;
}
