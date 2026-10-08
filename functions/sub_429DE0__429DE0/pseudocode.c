// Construct 0x10-byte ExtraOriginalReference: BSExtraData header/type 0x26 plus original TESObjectREFR pointer at +0x0C.
ExtraOriginalReference *__thiscall ExtraOriginalReference_ctor(
        ExtraOriginalReference *this,
        TESObjectREFR *originalReference)
{
  this->base.members.type = 0x26; /*0x429de6*/
  this->base.members.next = 0; /*0x429dea*/
  this->base.vtbl = (BSExtraDataVtbl *)&ExtraOriginalReference::`vftable'; /*0x429df1*/
  this->originalReference = originalReference; /*0x429df7*/
  return this; /*0x429dfa*/
}
