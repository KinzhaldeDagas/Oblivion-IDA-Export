int __thiscall EnchMenu_SetField(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 2;
  switch ( a2 )
  {
    case 2:
      *(this + 0xF) = a3;
      result = a3;
      break;
    case 3:
      *(this + 0x11) = a3;
      result = a3;
      break;
    case 4:
      *(this + 0x14) = a3;
      break;
    case 5:
      *(this + 0x12) = a3;
      result = a3;
      break;
    case 6:
      *(this + 0x15) = a3;
      result = a3;
      break;
    case 7:
      *(this + 0x16) = a3;
      break;
    case 8:
      *(this + 0x17) = a3;
      result = a3;
      break;
    case 9:
      *(this + 0x18) = a3;
      break;
    case 0xA:
      *(this + 0x19) = a3;
      result = a3;
      break;
    case 0xB:
      *(this + 0x1B) = a3;
      result = a3;
      break;
    case 0xC:
      *(this + 0x1A) = a3;
      break;
    case 0xD:
      *(this + 0x13) = a3;
      break;
    case 0xE:
      *(this + 0x1C) = a3;
      break;
    case 0xF:
      *(this + 0x1D) = a3;
      result = a3;
      break;
    case 0x10:
      *(this + 0x1E) = a3;
      break;
    case 0x11:
      *(this + 0x1F) = a3;
      result = a3;
      break;
    case 0x14:
      *(this + 0x20) = a3;
      break;
    case 0x16:
      *(this + 0x21) = a3;
      result = a3;
      break;
    case 0x18:
      *(this + 0x10) = a3;
      break;
    case 0x19:
      *(this + 0x23) = a3;
      break;
    case 0x1A:
      *(this + 0x22) = a3;
      result = a3;
      break;
    default:
      return result;
  }
  return result;
}
