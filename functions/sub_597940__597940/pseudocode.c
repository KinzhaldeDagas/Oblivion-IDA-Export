int __thiscall sub_597940(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 0xB;
  switch ( a2 )
  {
    case 0xB:
      *(this + 0xA) = a3;
      result = a3;
      break;
    case 0xC:
      *(this + 0xB) = a3;
      break;
    case 0xD:
      *(this + 0xC) = a3;
      result = a3;
      break;
    case 0xE:
      *(this + 0xD) = a3;
      break;
    case 0xF:
      *(this + 0xE) = a3;
      result = def_59794C(a2, a3);
      break;
    default:
      JUMPOUT(0x597982);
  }
  return result;
}
