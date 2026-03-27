signed int __cdecl sub_9A5610(int a1, _DWORD *a2, _DWORD *a3)
{
  signed int result; // eax

  *a2 = 1;
  *a3 = 4;
  switch ( a1 )
  {
    case 1:
    case 0x16:
      *a3 = 1;
      result = 4;
      break;
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
    case 0xE:
    case 0xF:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      result = 7;
      break;
    case 0xC:
    case 0xD:
      *a2 = 4;
      *a3 = 0x10;
      result = 9;
      break;
    case 0x10:
    case 0x11:
      *a2 = 3;
      *a3 = 0xC;
      result = 8;
      break;
    default:
      JUMPOUT(0x9A5674);
  }
  return result;
}
