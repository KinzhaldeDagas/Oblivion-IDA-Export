int __thiscall sub_5D9BE0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 0xA:
      *(this + 0xA) = a3;
      return a3;
    case 0x14:
      *(this + 0xB) = a3;
      break;
    case 0x1E:
      *(this + 0xC) = a3;
      return a3;
    case 0x28:
      *(this + 0xD) = a3;
      break;
    case 0x32:
      *(this + 0xE) = a3;
      return a3;
    case 0x1F:
      *(this + 0xF) = a3;
      break;
    case 0x20:
      *(this + 0x10) = a3;
      return a3;
    case 0x29:
      *(this + 0x11) = a3;
      break;
    case 0x2A:
      *(this + 0x12) = a3;
      return a3;
    case 0x33:
      *(this + 0x13) = a3;
      break;
    case 0x34:
      *(this + 0x14) = a3;
      return a3;
    case 0x3C:
      *(this + 0x15) = a3;
      break;
    case 0x3D:
      *(this + 0x16) = a3;
      return a3;
  }
  return result;
}
