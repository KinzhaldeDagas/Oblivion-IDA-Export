unsigned int __stdcall sub_9A3310(
        int a1,
        int a2,
        NiObjectNET *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edi

  v11 = *(_DWORD *)(a2 + 0x10);
  switch ( v11 )
  {
    case 1:
    case 2:
      JUMPOUT(0x9A353A);
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      if ( NiObjectNET_GetExtraData(a3, off_B329E4[0]) )
      {
        switch ( v11 )
        {
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            JUMPOUT(0x9A3526);
          default:
            JUMPOUT(0x9A3456);
        }
      }
      return 0x80000010;
    case 8:
      JUMPOUT(0x9A3460);
    case 9:
      JUMPOUT(0x9A348C);
    case 0xA:
      JUMPOUT(0x9A34B5);
    case 0xB:
      JUMPOUT(0x9A34DE);
    case 0xC:
      JUMPOUT(0x9A3503);
    default:
      JUMPOUT(0x9A3546);
  }
}
