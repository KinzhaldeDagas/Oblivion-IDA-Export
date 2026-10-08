// Verified: initializes 16-byte ExtraCellClimate: inherited BSExtraData type byte=0x0C, next pointer null, vtable, and TESClimate* at +0x0C.
ExtraCellClimate *__thiscall ExtraCellClimate_Constructor(ExtraCellClimate *this, TESClimate *climate)
{
  this->super.members.type = 0xC; /*0x41d986*/
  this->super.members.next = 0; /*0x41d98a*/
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraCellClimate::`vftable'; /*0x41d991*/
  this->climate = climate; /*0x41d997*/
  return this; /*0x41d99a*/
}
