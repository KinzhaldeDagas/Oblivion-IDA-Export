// Verified ExtraOwnership constructor: initializes BSExtraData type 0x27, clears next, installs ExtraOwnership vtable, and stores the TESForm* owner at +0x0C. The payload size is 16 bytes.
ExtraOwnership *__thiscall ExtraOwnership::ExtraOwnership(ExtraOwnership *this, TESForm *owner)
{
  this->super.members.type = 0x27; /*0x429e06*/
  this->super.members.next = 0; /*0x429e0a*/
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraOwnership::`vftable'; /*0x429e11*/
  this->owner.ownerForm = owner; /*0x429e17*/
  return this; /*0x429e1a*/
}
