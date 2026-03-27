int __thiscall sub_5BCE80(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 1:
      *(this + 0xA) = a3;
      return a3;
    case 2:
      *(this + 0xB) = a3;
      break;
    case 3:
      *(this + 0xC) = a3;
      return a3;
    case 4:
      *(this + 0xD) = a3;
      break;
    case 6:
      *(this + 0xE) = a3;
      return a3;
    case 7:
      *(this + 0xF) = a3;
      break;
    case 9:
      *(this + 0x10) = a3;
      return a3;
    case 0xA:
      *(this + 0x11) = a3;
      break;
    case 0xB:
      *(this + 0x12) = a3;
      return a3;
    case 0xC:
      *(this + 0x13) = a3;
      break;
  }
  return result;
}
