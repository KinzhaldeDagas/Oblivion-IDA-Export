int __thiscall sub_5D74B0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 1;
  switch ( a2 )
  {
    case 1:
      *(this + 0xA) = a3;
      result = a3;
      break;
    case 2:
      *(this + 0x14) = a3;
      result = a3;
      break;
    case 6:
      *(this + 0xB) = a3;
      break;
    case 7:
      *(this + 0xC) = a3;
      result = a3;
      break;
    case 8:
      *(this + 0xD) = a3;
      break;
    case 9:
      *(this + 0xE) = a3;
      result = a3;
      break;
    case 0xA:
      *(this + 0xF) = a3;
      break;
    case 0xB:
      *(this + 0x10) = a3;
      result = a3;
      break;
    case 0xC:
      *(this + 0x11) = a3;
      break;
    case 0xE:
      *(this + 0x12) = a3;
      result = a3;
      break;
    case 0xF:
      *(this + 0x13) = a3;
      break;
    case 0x14:
      *(this + 0x15) = a3;
      break;
    default:
      return result;
  }
  return result;
}
