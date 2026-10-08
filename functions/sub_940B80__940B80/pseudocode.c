int __thiscall sub_940B80(int this)
{
  int v1; // edx
  int result; // eax
  int v3; // ecx
  __int16 v4; // ax
  int v5; // edx
  __int16 v6; // ax
  int v7; // esi

  v1 = *(unsigned __int8 *)(this + 0xC); /*0x940b80*/
  result = 0xFFFFFFFF; /*0x940b88*/
  switch ( *(_BYTE *)(this + 0xC) ) /*0x940b97*/
  {
    case 1: /*0x940b97*/
    case 2: /*0x940b97*/
    case 3: /*0x940b97*/
    case 4: /*0x940b97*/
    case 5: /*0x940b97*/
    case 6: /*0x940b97*/
    case 7: /*0x940b97*/
    case 8: /*0x940b97*/
    case 9: /*0x940b97*/
    case 0xA: /*0x940b97*/
    case 0xB: /*0x940b97*/
    case 0xC: /*0x940b97*/
    case 0xD: /*0x940b97*/
    case 0xE: /*0x940b97*/
    case 0xF: /*0x940b97*/
    case 0x10: /*0x940b97*/
    case 0x11: /*0x940b97*/
    case 0x12: /*0x940b97*/
    case 0x14: /*0x940b97*/
    case 0x15: /*0x940b97*/
    case 0x16: /*0x940b97*/
    case 0x1A: /*0x940b97*/
    case 0x1B: /*0x940b97*/
    case 0x1C: /*0x940b97*/
      v3 = *(__int16 *)(this + 0xE); /*0x940ba5*/
      if ( !(_WORD)v3 ) /*0x940ba8*/
        v3 = 1; /*0x940baa*/
      result = v3 * *(__int16 *)(0xC * v1 + 0xAA1ED0); /*0x940bba*/
      break; /*0x940bbe*/
    case 0x13: /*0x940b97*/
      result = *(__int16 *)(0xC * *(unsigned __int8 *)(this + 0xD) + 0xAA1ED0); /*0x940bc6*/
      break; /*0x940bcf*/
    case 0x18: /*0x940b97*/
      v4 = *(_WORD *)(this + 0xE); /*0x940bd0*/
      v5 = v4; /*0x940bd7*/
      if ( !v4 ) /*0x940bda*/
        v5 = 1; /*0x940bdc*/
      result = v5 * *(unsigned __int16 *)(this + 0x10) / 8; /*0x940bee*/
      break; /*0x940bf2*/
    case 0x19: /*0x940b97*/
      v6 = *(_WORD *)(this + 0xE); /*0x940bf3*/
      v7 = v6; /*0x940bfa*/
      if ( !v6 ) /*0x940bfd*/
        v7 = 1; /*0x940bff*/
      result = v7 * sub_953130(*(_DWORD **)(this + 4)); /*0x940c0c*/
      break; /*0x940c0c*/
    default:
      return result;
  }
  return result; /*0x940bbd*/
}
