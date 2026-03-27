double __cdecl TESWeightForm_GetWeightForForm_Fast(int a1)
{
  int v1; // eax

  if ( !a1 )
    return flt_A30634;
  switch ( *(_BYTE *)(a1 + 4) )
  {
    case 0x13:
    case 0x1B:
    case 0x26:
    case 0x27:
    case 0x2A:
      v1 = a1 + 0x68;
      break;
    case 0x14:
    case 0x16:
      v1 = a1 + 0x54;
      break;
    case 0x15:
    case 0x21:
      v1 = a1 + 0x78;
      break;
    case 0x17:
      v1 = a1 + 0x64;
      break;
    case 0x19:
    case 0x28:
      v1 = a1 + 0x70;
      break;
    case 0x1A:
      v1 = a1 + 0x60;
      break;
    case 0x22:
      v1 = a1 + 0x6C;
      break;
    default:
      return flt_A30634;
  }
  if ( v1 )
    return *(float *)(v1 + 4);
  else
    return flt_A30634;
}
