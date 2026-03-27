signed int __stdcall sub_573760(char a1)
{
  signed int result; // eax

  switch ( a1 )
  {
    case 0:
      result = 0x20;
      break;
    case 0x22:
    case 0x27:
      result = 8;
      break;
    case 0x3C:
    case 0x7B:
      result = 1;
      break;
    case 0x3D:
      result = 0x10;
      break;
    case 0x3E:
    case 0x7D:
      result = 2;
      break;
    default:
      result = a1 > 0x20 ? 0 : 4;
      break;
  }
  return result;
}
