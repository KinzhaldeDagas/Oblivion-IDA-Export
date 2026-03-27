int __thiscall sub_595190(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 0xC:
      *(this + 0x14) = a3;
      return a3;
    case 1:
      *(this + 0xA) = a3;
      break;
    case 2:
      *(this + 0xB) = a3;
      return a3;
    case 3:
      *(this + 0xC) = a3;
      break;
    case 4:
      *(this + 0xD) = a3;
      return a3;
    case 5:
      *(this + 0xE) = a3;
      break;
    case 6:
      *(this + 0xF) = a3;
      return a3;
    case 7:
      *(this + 0x10) = a3;
      break;
    case 8:
      *(this + 0x11) = a3;
      return a3;
    case 9:
      *(this + 0x12) = a3;
      break;
    case 0xA:
      *(this + 0x13) = a3;
      return a3;
  }
  return result;
}
