// Verified: computes the PlayerCharacter-scaled lock magnitude from ExtraLockData, applies the iLockLevelMaxVeryEasy/Easy/Average/Hard/VeryHard thresholds, and returns a LOCK_LEVEL value 0..5. Its direct caller indexes LockLevelNames with this result to display the lock category.
LOCK_LEVEL __thiscall ExtraLockData_GetLockLevelCategory(ExtraLockData *this)
{
  int level; // eax
  int v3; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  level = (char)this->level; /*0x42acd7*/
  v4 = level; /*0x42acda*/
  if ( (this->flags & 4) != 0 ) /*0x42acde*/
  {
    v3 = (unsigned __int16)Actor_GetLevel((Actor *)reference); /*0x42acee*/
    level = Double_To_SInt32((double)v3 * MEMORY[0xB33880].value + (double)v4); /*0x42acfe*/
    if ( level > 0x63 ) /*0x42ad06*/
      level = 0x63; /*0x42ad08*/
  }
  if ( level <= MEMORY[0xB338B8].value ) /*0x42ad13*/
    return LL_VERYEASY; /*0x42ad15*/
  if ( level <= MEMORY[0xB338C0].value ) /*0x42ad21*/
    return LL_EASY; /*0x42ad23*/
  if ( level <= MEMORY[0xB338C8].value ) /*0x42ad32*/
    return LL_AVERAGE; /*0x42ad34*/
  if ( level > MEMORY[0xB338D0].value ) /*0x42ad43*/
    return (level > MEMORY[0xB338D8].value) + 4; /*0x42ad5c*/
  return LL_HARD; /*0x42ad17*/
}
