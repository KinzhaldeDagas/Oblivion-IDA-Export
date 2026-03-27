int __thiscall sub_940B80(int this)
{
  int v1; // edx
  int result; // eax
  int v3; // ecx
  __int16 v4; // ax
  int v5; // edx
  __int16 v6; // ax
  int v7; // esi

  v1 = *(unsigned __int8 *)(this + 0xC);
  result = 0xFFFFFFFF;
  switch ( *(_BYTE *)(this + 0xC) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x1A:
    case 0x1B:
    case 0x1C:
      v3 = *(__int16 *)(this + 0xE);
      if ( !(_WORD)v3 )
        v3 = 1;
      result = v3 * *(__int16 *)(0xC * v1 + 0xAA1ED0);
      break;
    case 0x13:
      result = *(__int16 *)(0xC * *(unsigned __int8 *)(this + 0xD) + 0xAA1ED0);
      break;
    case 0x18:
      v4 = *(_WORD *)(this + 0xE);
      v5 = v4;
      if ( !v4 )
        v5 = 1;
      result = v5 * *(unsigned __int16 *)(this + 0x10) / 8;
      break;
    case 0x19:
      v6 = *(_WORD *)(this + 0xE);
      v7 = v6;
      if ( !v6 )
        v7 = 1;
      result = v7 * sub_953130(*(_DWORD **)(this + 4));
      break;
    default:
      return result;
  }
  return result;
}
