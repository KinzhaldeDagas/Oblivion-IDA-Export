int __thiscall sub_592E80(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 2;
  switch ( a2 )
  {
    case 2:
      *(this + 0xA) = a3;
      result = a3;
      break;
    case 3:
      *(this + 0xB) = a3;
      break;
    case 4:
      *(this + 0xC) = a3;
      result = a3;
      break;
    case 5:
      *(this + 0xD) = a3;
      break;
    case 6:
      *(this + 0xE) = a3;
      result = a3;
      break;
    case 7:
      *(this + 0xF) = a3;
      break;
    case 8:
      *(this + 0x10) = a3;
      result = a3;
      break;
    case 9:
      *(this + 0x11) = a3;
      break;
    case 0xA:
      *(this + 0x12) = a3;
      result = a3;
      break;
    case 0xB:
      *(this + 0x13) = a3;
      break;
    case 0xC:
      *(this + 0x14) = a3;
      result = a3;
      break;
    case 0xD:
      *(this + 0x15) = a3;
      break;
    case 0xE:
      *(this + 0x16) = a3;
      result = a3;
      break;
    case 0xF:
      *(this + 0x17) = a3;
      break;
    case 0x10:
      *(this + 0x18) = a3;
      result = a3;
      break;
    case 0x11:
      *(this + 0x19) = a3;
      break;
    case 0x12:
      *(this + 0x1A) = a3;
      result = a3;
      break;
    case 0x13:
      *(this + 0x1B) = a3;
      break;
    case 0x14:
      *(this + 0x1C) = a3;
      result = a3;
      break;
    case 0x15:
      *(this + 0x1D) = a3;
      result = def_592E90(a2, a3);
      break;
    default:
      JUMPOUT(0x592F5C);
  }
  return result;
}
