int __thiscall sub_59FA20(_DWORD *this, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case 0xE:
      result = *(this + 0x11);
      break;
    case 0xF:
      result = *(this + 0x12);
      break;
    case 0x10:
      result = *(this + 0x14);
      break;
    case 0x11:
      result = *(this + 0x15);
      break;
    case 0x12:
      result = *(this + 0x16);
      break;
    case 0x13:
      result = *(this + 0x17);
      break;
    case 0x22:
      result = *(this + 0x10);
      break;
    case 0x24:
      result = *(this + 0x13);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
