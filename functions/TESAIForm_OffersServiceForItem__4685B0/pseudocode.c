char __thiscall TESAIForm_OffersServiceForItem(_DWORD *this, int a2)
{
  char result; // al

  result = 0;
  switch ( *(_BYTE *)(a2 + 4) )
  {
    case 0x13:
      result = BYTE1(*(this + 2)) & 1;
      break;
    case 0x14:
      result = (*(_BYTE *)(this + 2) & 2) != 0;
      break;
    case 0x15:
      result = (*(_BYTE *)(this + 2) & 8) != 0;
      break;
    case 0x16:
      result = (*(_BYTE *)(this + 2) & 4) != 0;
      break;
    case 0x19:
      result = (*(_BYTE *)(this + 2) & 0x10) != 0;
      break;
    case 0x1A:
      result = *((_BYTE *)this + 8) >> 7;
      break;
    case 0x1B:
    case 0x26:
      result = (*(this + 2) & 0x400) != 0;
      break;
    case 0x21:
    case 0x22:
      result = *(_BYTE *)(this + 2) & 1;
      break;
    case 0x28:
      result = (*(this + 2) & 0x2000) != 0;
      break;
    default:
      return result;
  }
  return result;
}
