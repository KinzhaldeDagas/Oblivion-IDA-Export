// Verified: sets only ExtraLockData.flags bit 0x01 (Locked), preserving bit 0x02. LockEffect_Apply first writes bit 0x02, then calls the self/linked-door locked setter to produce flags 0x03.
ExtraLockData *__thiscall ExtraLock_SetLockedFlag(ExtraLock *this)
{
  ExtraLockData *result; // eax

  result = this->lockData; /*0x428e80*/
  result->flags |= 1u; /*0x428e83*/
  return result; /*0x428e87*/
}
