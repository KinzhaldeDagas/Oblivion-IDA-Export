int __thiscall sub_5DD990(_DWORD *this, int a2, int a3)
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
    case 5:
      *(this + 0xE) = a3;
      return a3;
    case 6:
      *(this + 0xF) = a3;
      break;
    case 7:
      *(this + 0x10) = a3;
      return a3;
    case 8:
      *(this + 0x11) = a3;
      break;
  }
  return result;
}
