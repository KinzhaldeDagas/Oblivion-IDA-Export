int __thiscall sub_42ACD0(char *this)
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-8h]
  int Level; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  v1 = *this;
  v5 = v1;
  if ( (*(this + 8) & 4) != 0 )
  {
    Level = (unsigned __int16)Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, v3);
    v1 = Double_To_SInt32((double)Level * fLeveledLockMult + (double)v5);
    if ( v1 > 0x63 )
      v1 = 0x63;
  }
  if ( v1 <= iLockLevelMaxVeryEasy )
    return 0;
  if ( v1 <= iLockLevelMaxEasy )
    return 1;
  if ( v1 <= iLockLevelMaxAverage )
    return 2;
  if ( v1 > iLockLevelMaxHard )
    return (v1 > iLockLevelMaxVeryHard) + 4;
  return 3;
}
