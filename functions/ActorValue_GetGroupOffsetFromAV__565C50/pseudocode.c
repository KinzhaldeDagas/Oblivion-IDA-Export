char __cdecl ActorValue_GetGroupOffsetFromAV(int a1, char a2)
{
  char result; // al

  switch ( a1 )
  {
    case 0:
      result = a2;
      break;
    case 1:
      result = a2 - 8;
      break;
    case 2:
      result = a2 - 0xC;
      break;
    case 3:
      result = a2 - 0x21;
      break;
    case 4:
      result = a2 - 0x25;
      break;
    case 5:
      result = a2 - 0x28;
      break;
    case 6:
      result = a2 - 0x2A;
      break;
    default:
      JUMPOUT(0x565C95);
  }
  return result;
}
