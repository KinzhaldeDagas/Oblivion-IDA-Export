int __cdecl sub_673980(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
    case 7:
    case 0xC:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x13:
    case 0x15:
    case 0x18:
    case 0x19:
    case 0x1D:
    case 0x1F:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      result = def_67398C(a1);
      break;
    case 1:
    case 2:
    case 3:
    case 6:
    case 9:
    case 0xD:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x17:
      result = 3;
      break;
    case 4:
    case 5:
    case 0xA:
    case 0x16:
    case 0x1A:
    case 0x1C:
    case 0x1E:
    case 0x20:
      result = 4;
      break;
    case 8:
    case 0xB:
    case 0x1B:
    case 0x21:
      result = 5;
      break;
    default:
      JUMPOUT(0x6739AA);
  }
  return result;
}
