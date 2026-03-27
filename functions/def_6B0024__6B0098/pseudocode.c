int __cdecl def_6B0024(
        int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        int a8,
        int a9,
        int a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16)
{
  int *v16; // ecx

  switch ( a10 )
  {
    case 0xFFFFFFFF:
      PlaySound___(v16, "WPNBlockHand", 0x4102, 1);
      break;
    case 0:
    case 1:
      PlaySound___(v16, "WPNBlockBlade", 0x4102, 1);
      break;
    case 2:
    case 3:
      PlaySound___(v16, "WPNBlockBlunt", 0x4102, 1);
      break;
    case 4:
      PlaySound___(v16, "WPNBlockStaff", 0x4102, 1);
      break;
    case 5:
      PlaySound___(v16, "WPNBlockBow", 0x4102, 1);
      break;
    default:
      JUMPOUT(0x6B00F6);
  }
  return def_6B00A4(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}
