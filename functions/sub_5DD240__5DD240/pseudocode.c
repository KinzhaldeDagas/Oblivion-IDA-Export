int __thiscall sub_5DD240(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 1; /*0x5dd244*/
  switch ( a2 ) /*0x5dd24c*/
  {
    case 1: /*0x5dd24c*/
      *(this + 0xA) = a3; /*0x5dd257*/
      result = a3; /*0x5dd253*/
      break; /*0x5dd25a*/
    case 2: /*0x5dd24c*/
      *(this + 0xB) = a3; /*0x5dd261*/
      break; /*0x5dd264*/
    case 3: /*0x5dd24c*/
      *(this + 0xC) = a3; /*0x5dd26b*/
      result = a3; /*0x5dd267*/
      break; /*0x5dd26e*/
    case 4: /*0x5dd24c*/
      *(this + 0xD) = a3; /*0x5dd275*/
      break; /*0x5dd278*/
    case 6: /*0x5dd24c*/
      *(this + 0xE) = a3; /*0x5dd289*/
      break; /*0x5dd28c*/
    case 7: /*0x5dd24c*/
      *(this + 0xF) = a3; /*0x5dd293*/
      result = a3; /*0x5dd28f*/
      break; /*0x5dd296*/
    case 8: /*0x5dd24c*/
      *(this + 0x10) = a3; /*0x5dd29d*/
      break; /*0x5dd2a0*/
    case 9: /*0x5dd24c*/
      *(this + 0x11) = a3; /*0x5dd27f*/
      result = a3; /*0x5dd27b*/
      break; /*0x5dd282*/
    case 0xA: /*0x5dd24c*/
      *(this + 0x12) = a3; /*0x5dd2a7*/
      result = a3; /*0x5dd2a3*/
      break; /*0x5dd2aa*/
    case 0xB: /*0x5dd24c*/
      *(this + 0x13) = a3; /*0x5dd2b1*/
      break; /*0x5dd2b4*/
    case 0xC: /*0x5dd24c*/
      *(this + 0x14) = a3; /*0x5dd2bb*/
      result = a3; /*0x5dd2b7*/
      break; /*0x5dd2b7*/
    default:
      return result;
  }
  return result; /*0x5dd25a*/
}
