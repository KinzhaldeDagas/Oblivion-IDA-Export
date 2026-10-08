// Verified ExtraGlobal constructor: initializes BSExtraData type 0x28, clears next, installs ExtraGlobal vtable, and stores TESGlobal* at +0x0C; payload size is 16 bytes.
ExtraGlobal *__thiscall ExtraGlobal_ctor(ExtraGlobal *this, TESGlobal *global)
{
  this->super.members.type = 0x28; /*0x429e26*/
  this->super.members.next = 0; /*0x429e2a*/
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraGlobal::`vftable'; /*0x429e31*/
  this->global = global; /*0x429e37*/
  return this; /*0x429e3a*/
}
