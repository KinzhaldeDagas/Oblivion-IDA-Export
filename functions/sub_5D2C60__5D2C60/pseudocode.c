int __thiscall sub_5D2C60(_DWORD *this, int a2, int a3)
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
      *(this + 0xD) = a3;
      result = a3;
      break;
    case 4:
      *(this + 0xE) = a3;
      break;
    case 5:
      *(this + 0xF) = a3;
      result = a3;
      break;
    case 6:
      *(this + 0x10) = a3;
      break;
    case 7:
      *(this + 0x11) = a3;
      result = a3;
      break;
    case 9:
      *(this + 0x12) = a3;
      break;
    default:
      return result;
  }
  return result;
}
