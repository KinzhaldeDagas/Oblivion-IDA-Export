// Verified ExtraLock constructor: initializes BSExtraData type 0x31 and wrapper vtable, clears the +8 base field, and stores the ExtraLockData* payload at +0x0C.
ExtraLock *__thiscall ExtraLock_ctor(ExtraLock *this, ExtraLockData *lockData)
{
  this->super.members.type = 0x31; /*0x429a86*/
  this->super.members.next = 0; /*0x429a8a*/
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraLock::`vftable'; /*0x429a91*/
  this->lockData = lockData; /*0x429a97*/
  return this; /*0x429a9a*/
}
