int __cdecl Actor::GetSoulValueFromLevel(int a1)
{
  int result; // eax

  result = 0;
  switch ( a1 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = dword_B35B44;
      break;
    case 2:
      result = dword_B35B54;
      break;
    case 3:
      result = dword_B35B64;
      break;
    case 4:
      result = dword_B35B74;
      break;
    case 5:
      result = iSoulLevelValueGrand;
      break;
    default:
      return result;
  }
  return result;
}
