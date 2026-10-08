int __thiscall sub_5D02A0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 1; /*0x5d02a4*/
  switch ( a2 ) /*0x5d02ac*/
  {
    case 1: /*0x5d02ac*/
      *(this + 0xA) = a3; /*0x5d02b7*/
      result = a3; /*0x5d02b3*/
      break; /*0x5d02ba*/
    case 2: /*0x5d02ac*/
      *(this + 0xB) = a3; /*0x5d02c1*/
      break; /*0x5d02c4*/
    case 3: /*0x5d02ac*/
      *(this + 0xD) = a3; /*0x5d02df*/
      result = a3; /*0x5d02db*/
      break; /*0x5d02e2*/
    case 5: /*0x5d02ac*/
      *(this + 0xE) = a3; /*0x5d02e9*/
      break; /*0x5d02ec*/
    case 6: /*0x5d02ac*/
      *(this + 0x10) = a3; /*0x5d02f3*/
      result = a3; /*0x5d02ef*/
      break; /*0x5d02f6*/
    case 7: /*0x5d02ac*/
      *(this + 0xF) = a3; /*0x5d0307*/
      result = a3; /*0x5d0303*/
      break; /*0x5d030a*/
    case 8: /*0x5d02ac*/
      *(this + 0x11) = a3; /*0x5d02fd*/
      break; /*0x5d0300*/
    case 0xB: /*0x5d02ac*/
      *(this + 0x12) = a3; /*0x5d0311*/
      break; /*0x5d0314*/
    case 0xF: /*0x5d02ac*/
      *(this + 0x13) = a3; /*0x5d031b*/
      result = a3; /*0x5d0317*/
      break; /*0x5d0317*/
    case 0x10: /*0x5d02ac*/
      *(this + 0xC) = a3; /*0x5d02cb*/
      result = a3; /*0x5d02c7*/
      break; /*0x5d02ce*/
    case 0x11: /*0x5d02ac*/
      *(this + 0x14) = a3; /*0x5d02d5*/
      break; /*0x5d02d8*/
    default:
      return result;
  }
  return result; /*0x5d02ba*/
}
