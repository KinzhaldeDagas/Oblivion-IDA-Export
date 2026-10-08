// Verified ExtraRank constructor: initializes inherited BSExtraData type to kExtraData_Rank (0x29), clears linkage, installs the ExtraRank vtable, and stores a signed 32-bit rank at +0x0C. Allocations request 0x10 bytes.
ExtraRank *__thiscall ExtraRank_ctor(ExtraRank *this, SInt32 rank)
{
  this->super.members.type = 0x29; /*0x429e46*/
  this->super.members.next = 0; /*0x429e4a*/
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraRank::`vftable'; /*0x429e51*/
  this->rank = rank; /*0x429e57*/
  return this; /*0x429e5a*/
}
