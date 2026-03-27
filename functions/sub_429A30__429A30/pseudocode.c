int __cdecl sub_429A30(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = iLockLevelMaxVeryEasy;
      break;
    case 1:
      result = iLockLevelMaxEasy;
      break;
    case 2:
      result = iLockLevelMaxAverage;
      break;
    case 3:
      result = iLockLevelMaxHard;
      break;
    case 4:
      result = iLockLevelMaxVeryHard;
      break;
    default:
      JUMPOUT(0x429A5E);
  }
  return result;
}
