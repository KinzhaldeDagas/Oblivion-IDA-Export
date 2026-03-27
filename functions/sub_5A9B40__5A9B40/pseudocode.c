int __thiscall sub_5A9B40(_DWORD *this, int a2, int a3)
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
      break;
    case 0xD:
      *(this + 0xE) = a3;
      result = def_5A9B4C(a2, a3);
      break;
    default:
      JUMPOUT(0x5A9B82);
  }
  return result;
}
