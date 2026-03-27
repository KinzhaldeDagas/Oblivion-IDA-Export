int __thiscall sub_5B13C0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 9;
  switch ( a2 )
  {
    case 9:
      *(this + 0xA) = a3;
      result = a3;
      break;
    case 0xA:
      *(this + 0xB) = a3;
      break;
    case 0xB:
      *(this + 0xC) = a3;
      result = a3;
      break;
    case 0xC:
      *(this + 0xD) = a3;
      result = def_5B13CC(a2, a3);
      break;
    default:
      JUMPOUT(0x5B13F8);
  }
  return result;
}
