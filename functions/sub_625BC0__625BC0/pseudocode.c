bool __thiscall sub_625BC0(_BYTE *this, int a2)
{
  bool result; // al

  switch ( a2 )
  {
    case 4:
      result = dword_B35768 != 0;
      break;
    case 8:
      result = dword_B35748 != 0;
      break;
    case 0x10:
      result = dword_B35750 != 0;
      break;
    case 0x20:
      result = dword_B35740 != 0;
      break;
    case 0x40:
      result = dword_B35758 != 0;
      break;
    case 0x80:
      result = dword_B35760 != 0;
      break;
    default:
      result = sub_4A98A0(this, a2);
      break;
  }
  return result;
}
