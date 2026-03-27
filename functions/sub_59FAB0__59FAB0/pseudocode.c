int __thiscall sub_59FAB0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 1;
  switch ( a2 )
  {
    case 1:
      *(this + 0xA) = a3;
      break;
    case 2:
      *(this + 0xB) = a3;
      result = a3;
      break;
    case 3:
      *(this + 0xC) = a3;
      break;
    case 0xE:
      *(this + 0x11) = a3;
      result = a3;
      break;
    case 0xF:
      *(this + 0x12) = a3;
      break;
    case 0x10:
      *(this + 0x14) = a3;
      break;
    case 0x11:
      *(this + 0x15) = a3;
      result = a3;
      break;
    case 0x12:
      *(this + 0x16) = a3;
      break;
    case 0x13:
      *(this + 0x17) = a3;
      result = a3;
      break;
    case 0x15:
      *(this + 0x18) = a3;
      break;
    case 0x16:
      *(this + 0x19) = a3;
      result = a3;
      break;
    case 0x17:
      *(this + 0x1A) = a3;
      break;
    case 0x1F:
      *(this + 0xD) = a3;
      result = a3;
      break;
    case 0x20:
      *(this + 0xE) = a3;
      break;
    case 0x21:
      *(this + 0xF) = a3;
      result = a3;
      break;
    case 0x22:
      *(this + 0x10) = a3;
      break;
    case 0x24:
      *(this + 0x13) = a3;
      result = a3;
      break;
    default:
      return result;
  }
  return result;
}
