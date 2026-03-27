int __thiscall sub_5B3D80(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 1;
  switch ( a2 )
  {
    case 1:
      *(this + 0xA) = a3;
      break;
    case 0xB:
      *(this + 0xB) = a3;
      result = a3;
      break;
    case 0xC:
      *(this + 0xC) = a3;
      break;
    case 0xD:
      *(this + 0xD) = a3;
      result = a3;
      break;
    case 0xE:
      *(this + 0xE) = a3;
      break;
    case 0xF:
      *(this + 0xF) = a3;
      result = a3;
      break;
    case 0x10:
      *(this + 0x10) = a3;
      break;
    case 0x11:
      *(this + 0x11) = a3;
      result = a3;
      break;
    case 0x12:
      *(this + 0x12) = a3;
      break;
    case 0x15:
      *(this + 0x13) = a3;
      result = a3;
      break;
    default:
      return result;
  }
  return result;
}
