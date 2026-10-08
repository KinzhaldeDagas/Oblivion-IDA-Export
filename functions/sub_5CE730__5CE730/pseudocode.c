int __thiscall sub_5CE730(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 1; /*0x5ce734*/
  switch ( a2 ) /*0x5ce73c*/
  {
    case 1: /*0x5ce73c*/
      *(this + 0xA) = a3; /*0x5ce76f*/
      result = a3; /*0x5ce76b*/
      break; /*0x5ce76b*/
    case 3: /*0x5ce73c*/
      *(this + 0xB) = a3; /*0x5ce747*/
      result = a3; /*0x5ce743*/
      break; /*0x5ce74a*/
    case 4: /*0x5ce73c*/
      *(this + 0xC) = a3; /*0x5ce751*/
      break; /*0x5ce754*/
    case 5: /*0x5ce73c*/
      *(this + 0xD) = a3; /*0x5ce75b*/
      result = a3; /*0x5ce757*/
      break; /*0x5ce75e*/
    case 6: /*0x5ce73c*/
      *(this + 0xE) = a3; /*0x5ce765*/
      break; /*0x5ce768*/
    default:
      return result;
  }
  return result; /*0x5ce74a*/
}
