int __thiscall sub_5D74B0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 1; /*0x5d74b4*/
  switch ( a2 ) /*0x5d74bc*/
  {
    case 1: /*0x5d74bc*/
      *(this + 0xA) = a3; /*0x5d74c7*/
      result = a3; /*0x5d74c3*/
      break; /*0x5d74ca*/
    case 2: /*0x5d74bc*/
      *(this + 0x14) = a3; /*0x5d752b*/
      result = a3; /*0x5d7527*/
      break; /*0x5d752e*/
    case 6: /*0x5d74bc*/
      *(this + 0xB) = a3; /*0x5d74d1*/
      break; /*0x5d74d4*/
    case 7: /*0x5d74bc*/
      *(this + 0xC) = a3; /*0x5d74db*/
      result = a3; /*0x5d74d7*/
      break; /*0x5d74de*/
    case 8: /*0x5d74bc*/
      *(this + 0xD) = a3; /*0x5d74e5*/
      break; /*0x5d74e8*/
    case 9: /*0x5d74bc*/
      *(this + 0xE) = a3; /*0x5d74ef*/
      result = a3; /*0x5d74eb*/
      break; /*0x5d74f2*/
    case 0xA: /*0x5d74bc*/
      *(this + 0xF) = a3; /*0x5d74f9*/
      break; /*0x5d74fc*/
    case 0xB: /*0x5d74bc*/
      *(this + 0x10) = a3; /*0x5d7503*/
      result = a3; /*0x5d74ff*/
      break; /*0x5d7506*/
    case 0xC: /*0x5d74bc*/
      *(this + 0x11) = a3; /*0x5d750d*/
      break; /*0x5d7510*/
    case 0xE: /*0x5d74bc*/
      *(this + 0x12) = a3; /*0x5d7517*/
      result = a3; /*0x5d7513*/
      break; /*0x5d751a*/
    case 0xF: /*0x5d74bc*/
      *(this + 0x13) = a3; /*0x5d7521*/
      break; /*0x5d7524*/
    case 0x14: /*0x5d74bc*/
      *(this + 0x15) = a3; /*0x5d7535*/
      break; /*0x5d7535*/
    default:
      return result;
  }
  return result; /*0x5d74ca*/
}
