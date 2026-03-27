int __thiscall sub_5D5650(_DWORD *this, int a2, int a3)
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
      *(this + 0xB) = a3;
      result = a3;
      break;
    case 3:
      *(this + 0xC) = a3;
      break;
    case 4:
      *(this + 0xD) = a3;
      break;
    case 5:
      *(this + 0xE) = a3;
      result = def_5D565C(a2, a3);
      break;
    default:
      JUMPOUT(0x5D5692);
  }
  return result;
}
