int __cdecl GetLockLevel(int a1)
{
  if ( a1 <= iLockLevelMaxVeryEasy )
    return 0;
  if ( a1 <= iLockLevelMaxEasy )
    return 1;
  if ( a1 <= iLockLevelMaxAverage )
    return 2;
  if ( a1 > iLockLevelMaxHard )
    return (a1 > iLockLevelMaxVeryHard) + 4;
  return 3;
}
