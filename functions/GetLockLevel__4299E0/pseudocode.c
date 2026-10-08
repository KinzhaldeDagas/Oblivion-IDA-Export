// Verified numeric lock magnitude to LOCK_LEVEL mapper. Thresholds are iLockLevelMaxVeryEasy, iLockLevelMaxEasy, iLockLevelMaxAverage, iLockLevelMaxHard, and iLockLevelMaxVeryHard; outputs 0..5 map through LockLevelNames to VeryEasy, Easy, Average, Hard, VeryHard, Impossible. Fallout independently uses the matching LOCK_LEVEL names, but this mapping is directly established by Oblivion code and data.
LOCK_LEVEL __cdecl GetLockLevel(int numericLockMagnitude)
{
  if ( numericLockMagnitude <= MEMORY[0xB338B8].value ) /*0x4299ea*/
    return LL_VERYEASY; /*0x4299ec*/
  if ( numericLockMagnitude <= MEMORY[0xB338C0].value ) /*0x4299f5*/
    return LL_EASY; /*0x4299f7*/
  if ( numericLockMagnitude <= MEMORY[0xB338C8].value ) /*0x429a03*/
    return LL_AVERAGE; /*0x429a05*/
  if ( numericLockMagnitude > MEMORY[0xB338D0].value ) /*0x429a11*/
    return (numericLockMagnitude > MEMORY[0xB338D8].value) + 4; /*0x429a27*/
  return LL_HARD; /*0x4299ee*/
}
