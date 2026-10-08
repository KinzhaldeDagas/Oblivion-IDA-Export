int __thiscall sub_5BCE80(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x5bce80*/
  switch ( a2 ) /*0x5bce87*/
  {
    case 1: /*0x5bce87*/
      *(this + 0xA) = a3; /*0x5bce8d*/
      return a3; /*0x5bce89*/
    case 2: /*0x5bce87*/
      *(this + 0xB) = a3; /*0x5bce9c*/
      break;
    case 3: /*0x5bce87*/
      *(this + 0xC) = a3; /*0x5bceab*/
      return a3; /*0x5bcea7*/
    case 4: /*0x5bce87*/
      *(this + 0xD) = a3; /*0x5bceba*/
      break;
    case 6: /*0x5bce87*/
      *(this + 0xE) = a3; /*0x5bcec9*/
      return a3; /*0x5bcec5*/
    case 7: /*0x5bce87*/
      *(this + 0xF) = a3; /*0x5bced8*/
      break;
    case 9: /*0x5bce87*/
      *(this + 0x10) = a3; /*0x5bcee7*/
      return a3; /*0x5bcee3*/
    case 0xA: /*0x5bce87*/
      *(this + 0x11) = a3; /*0x5bcef6*/
      break;
    case 0xB: /*0x5bce87*/
      *(this + 0x12) = a3; /*0x5bcf05*/
      return a3; /*0x5bcf01*/
    case 0xC: /*0x5bce87*/
      *(this + 0x13) = a3; /*0x5bcf14*/
      break;
  }
  return result; /*0x5bce90*/
}
