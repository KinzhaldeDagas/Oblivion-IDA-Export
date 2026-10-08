// Construct 0x10-byte ExtraReferencePointer: BSExtraData header/type 0x22 plus TESObjectREFR pointer at +0x0C.
ExtraReferencePointer *__thiscall ExtraReferencePointer_ctor(ExtraReferencePointer *this, TESObjectREFR *reference)
{
  this->base.members.type = 0x22; /*0x42a186*/
  this->base.members.next = 0; /*0x42a18a*/
  this->base.vtbl = (BSExtraDataVtbl *)&ExtraReferencePointer::`vftable'; /*0x42a191*/
  this->reference = reference; /*0x42a197*/
  return this; /*0x42a19a*/
}
