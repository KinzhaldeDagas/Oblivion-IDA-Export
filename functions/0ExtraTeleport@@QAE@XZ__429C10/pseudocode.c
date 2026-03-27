ExtraTeleport *__thiscall ExtraTeleport::ExtraTeleport(ExtraTeleport *this, TeleportData *a2)
{
  this->super.members.type = 0x32;
  this->super.members.next = 0;
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraTeleport::`vftable';
  this->teleport = a2;
  return this;
}
