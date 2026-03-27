bool __thiscall sub_54AFB0(_DWORD *this, int a2)
{
  bool result; // al

  switch ( a2 )
  {
    case 0:
      result = *(this + 0x3A) == 0;
      break;
    case 1:
      result = *(this + 0xC) == 0;
      break;
    case 2:
      result = *(this + 0x23) == 0;
      break;
    case 3:
      result = *(this + 0x51) == 0;
      break;
    default:
      JUMPOUT(0x54AFF1);
  }
  return result;
}
