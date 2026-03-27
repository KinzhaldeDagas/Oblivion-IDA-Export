signed int __cdecl sub_4A2A30(int a1)
{
  signed int result; // eax

  switch ( *(_BYTE *)(a1 + 4) )
  {
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x19:
    case 0x1B:
    case 0x21:
    case 0x22:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x2A:
      result = 2;
      break;
    case 0x23:
    case 0x24:
      result = 3;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}
