int __thiscall sub_5BC5E0(_DWORD *this, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case 1:
      result = *(this + 0xA);
      break;
    case 2:
      result = *(this + 0xB);
      break;
    case 3:
      result = *(this + 0xC);
      break;
    case 4:
      result = *(this + 0xD);
      break;
    case 5:
      result = *(this + 0xE);
      break;
    case 6:
      result = *(this + 0xF);
      break;
    case 7:
      result = *(this + 0x10);
      break;
    case 8:
      result = *(this + 0x11);
      break;
    case 9:
      result = *(this + 0x12);
      break;
    case 0xA:
      result = *(this + 0x13);
      break;
    case 0xB:
      result = *(this + 0x14);
      break;
    case 0xC:
      result = *(this + 0x15);
      break;
    case 0xD:
      result = *(this + 0x16);
      break;
    default:
      JUMPOUT(0x5BC641);
  }
  return result;
}
