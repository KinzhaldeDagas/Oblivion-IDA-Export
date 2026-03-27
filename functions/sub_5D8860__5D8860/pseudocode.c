int __thiscall sub_5D8860(_DWORD *this, int a2, int a3)
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
      *(this + 0xD) = a3;
      break;
    case 3:
      *(this + 0xB) = a3;
      break;
    case 4:
      *(this + 0xE) = a3;
      break;
    case 5:
      *(this + 0xF) = a3;
      result = a3;
      break;
    case 6:
      *(this + 0xC) = a3;
      result = a3;
      break;
    case 7:
      *(this + 0x10) = a3;
      result = def_5D886C(a2, a3);
      break;
    case 8:
      *(this + 0x11) = a3;
      result = a3;
      break;
    default:
      JUMPOUT(0x5D88C0);
  }
  return result;
}
