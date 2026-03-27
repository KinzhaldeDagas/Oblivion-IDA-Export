int __thiscall sub_5AF0D0(_DWORD *this, int a2, int a3)
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
    case 5:
      *(this + 0xD) = a3;
      return a3;
    case 3:
      *(this + 0x5E) = a3;
      break;
    case 4:
      *(this + 0xC) = a3;
      return a3;
    case 0xB:
      *(this + 0x27) = a3;
      break;
    case 0xC:
      *(this + 0x31) = a3;
      return a3;
    case 0xD:
      *(this + 0x3B) = a3;
      break;
    case 0xE:
      *(this + 0x45) = a3;
      return a3;
    case 0xF:
      *(this + 0x4F) = a3;
      break;
    case 0x14:
      *(this + 0x51) = a3;
      return a3;
  }
  return result;
}
