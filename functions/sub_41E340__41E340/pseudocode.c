char __stdcall sub_41E340(int a1)
{
  char result; // al

  result = 1;
  if ( a1 )
  {
    switch ( *(_BYTE *)(a1 + 4) )
    {
      case 2:
      case 3:
      case 8:
      case 0x11:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x1A:
      case 0x30:
      case 0x3B:
      case 0x49:
      case 0x56:
        result = 0;
        break;
      default:
        return result;
    }
  }
  return result;
}
