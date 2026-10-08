// Verified ExtraRandomTeleportMarker constructor: sets ExtraData type 0x43 and the ExtraRandomTeleportMarker vtable, and zeroes its 4-byte teleportRef payload at +0x0C.
ExtraRandomTeleportMarker *__thiscall ExtraRandomTeleportMarker_ctor(ExtraRandomTeleportMarker *this)
{
  this->super.members.type = 0x43; /*0x42a664*/
  this->super.members.next = 0; /*0x42a668*/
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraRandomTeleportMarker::`vftable'; /*0x42a66b*/
  this->teleportRef = 0; /*0x42a671*/
  return this; /*0x42a674*/
}
