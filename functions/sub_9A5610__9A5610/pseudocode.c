signed int __cdecl sub_9A5610(int a1, _DWORD *a2, _DWORD *a3)
{
  signed int result; // eax

  *a2 = 1; /*0x9a5622*/
  *a3 = 4; /*0x9a5628*/
  switch ( a1 ) /*0x9a5637*/
  {
    case 1: /*0x9a5637*/
    case 0x16: /*0x9a5637*/
      *a3 = 1; /*0x9a563e*/
      result = 4; /*0x9a5644*/
      break; /*0x9a5649*/
    case 2: /*0x9a5637*/
    case 3: /*0x9a5637*/
    case 4: /*0x9a5637*/
    case 5: /*0x9a5637*/
    case 6: /*0x9a5637*/
    case 7: /*0x9a5637*/
    case 8: /*0x9a5637*/
    case 9: /*0x9a5637*/
    case 0xA: /*0x9a5637*/
    case 0xB: /*0x9a5637*/
    case 0xE: /*0x9a5637*/
    case 0xF: /*0x9a5637*/
    case 0x12: /*0x9a5637*/
    case 0x13: /*0x9a5637*/
    case 0x14: /*0x9a5637*/
    case 0x15: /*0x9a5637*/
      result = 7; /*0x9a564a*/
      break; /*0x9a564f*/
    case 0xC: /*0x9a5637*/
    case 0xD: /*0x9a5637*/
      *a2 = 4; /*0x9a5650*/
      *a3 = 0x10; /*0x9a5656*/
      result = 9; /*0x9a565c*/
      break; /*0x9a5661*/
    case 0x10: /*0x9a5637*/
    case 0x11: /*0x9a5637*/
      *a2 = 3; /*0x9a5662*/
      *a3 = 0xC; /*0x9a5668*/
      result = 8; /*0x9a566e*/
      break; /*0x9a5673*/
    default:
      JUMPOUT(0x9A5674); /*0x9a5674*/
  }
  return result; /*0x9a5649*/
}
