int __thiscall sub_5C26D0(_DWORD *this, int a2, int a3)
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
    case 0x14:
      *(this + 0xD) = a3;
      return a3;
    case 0x15:
      *(this + 0xE) = a3;
      break;
    case 0xA:
      *(this + 0xC) = a3;
      return a3;
    case 0x5A:
      *(this + 0xF) = a3;
      break;
  }
  return result;
}
