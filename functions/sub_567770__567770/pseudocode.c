char __thiscall sub_567770(char *this)
{
  char result; // al

  result = 0;
  switch ( *(this + 0x20) )
  {
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1B:
    case 0x1C:
    case 0x1E:
    case 0x20:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}
