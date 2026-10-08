// Verified: clears only ExtraLockData.flags bit 0x01 (Locked), preserving bit 0x02. OpenEffect uses this after its lock-category test; this preserves LockEffect's bit-0x02 ownership marker.
ExtraLockData *__thiscall ExtraLock_ClearLockedFlag(ExtraLock *this)
{
  ExtraLockData *result; // eax

  result = this->lockData; /*0x428e90*/
  result->flags &= ~1u; /*0x428e93*/
  return result; /*0x428e97*/
}
