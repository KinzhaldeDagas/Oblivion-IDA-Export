char __thiscall TESAIForm_OffersServiceForItem(_DWORD *this, int a2)
{
  char result; // al

  result = 0; /*0x4685bb*/
  switch ( *(_BYTE *)(a2 + 4) ) /*0x4685c9*/
  {
    case 0x13: /*0x4685c9*/
      result = BYTE1(*(this + 2)) & 1; /*0x468612*/
      break; /*0x468614*/
    case 0x14: /*0x4685c9*/
      result = (*(_BYTE *)(this + 2) & 2) != 0; /*0x4685dd*/
      break; /*0x4685df*/
    case 0x15: /*0x4685c9*/
      result = (*(_BYTE *)(this + 2) & 8) != 0; /*0x4685f3*/
      break; /*0x4685f5*/
    case 0x16: /*0x4685c9*/
      result = (*(_BYTE *)(this + 2) & 4) != 0; /*0x4685e8*/
      break; /*0x4685ea*/
    case 0x19: /*0x4685c9*/
      result = (*(_BYTE *)(this + 2) & 0x10) != 0; /*0x4685fe*/
      break; /*0x468600*/
    case 0x1A: /*0x4685c9*/
      result = *((_BYTE *)this + 8) >> 7; /*0x468606*/
      break; /*0x468609*/
    case 0x1B: /*0x4685c9*/
    case 0x26: /*0x4685c9*/
      result = (*(this + 2) & 0x400) != 0; /*0x46861d*/
      break; /*0x46861f*/
    case 0x21: /*0x4685c9*/
    case 0x22: /*0x4685c9*/
      result = *(_BYTE *)(this + 2) & 1; /*0x4685d3*/
      break; /*0x4685d5*/
    case 0x28: /*0x4685c9*/
      result = (*(this + 2) & 0x2000) != 0; /*0x468628*/
      break; /*0x468628*/
    default:
      return result;
  }
  return result; /*0x4685d5*/
}
