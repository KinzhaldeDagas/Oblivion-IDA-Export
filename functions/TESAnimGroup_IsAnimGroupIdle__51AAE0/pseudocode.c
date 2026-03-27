char __cdecl TESAnimGroup_IsAnimGroupIdle(char a1)
{
  char result; // al

  switch ( a1 )
  {
    case 0:
    case 1:
    case 0x1B:
    case 0x21:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
