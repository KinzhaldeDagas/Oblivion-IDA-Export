// Verified 2026-09-30: automatic pixel dispatch is NOT a no-op. It switches on entry semantic at+10, includes geometry extra-data lookup paths and semantic cases1..12. Numeric float-routing profiles that have not reconstructed those producers must reject these entries rather than silently treating them as writes of zero or no writes.
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

  v11 = *(_DWORD *)(a2 + 0x10); /*0x9a331a*/
  switch ( v11 ) /*0x9a332b*/
  {
    case 1: /*0x9a332b*/
    case 2: /*0x9a332b*/
      JUMPOUT(0x9A353A); /*0x9a353a*/
    case 3: /*0x9a332b*/
    case 4: /*0x9a332b*/
    case 5: /*0x9a332b*/
    case 6: /*0x9a332b*/
    case 7: /*0x9a332b*/
      if ( NiObjectNET_GetExtraData(a3, off_B329E4[0]) ) /*0x9a334e*/
      {
        switch ( v11 ) /*0x9a3378*/
        {
          case 3: /*0x9a3378*/
          case 4: /*0x9a3378*/
          case 5: /*0x9a3378*/
          case 6: /*0x9a3378*/
          case 7: /*0x9a3378*/
            JUMPOUT(0x9A3526); /*0x9a3526*/
          default:
            JUMPOUT(0x9A3456); /*0x9a3456*/
        }
      }
      return 0x80000010;
    case 8: /*0x9a332b*/
      JUMPOUT(0x9A3460); /*0x9a3460*/
    case 9: /*0x9a332b*/
      JUMPOUT(0x9A348C); /*0x9a348c*/
    case 0xA: /*0x9a332b*/
      JUMPOUT(0x9A34B5); /*0x9a34b5*/
    case 0xB: /*0x9a332b*/
      JUMPOUT(0x9A34DE); /*0x9a34de*/
    case 0xC: /*0x9a332b*/
      JUMPOUT(0x9A3503); /*0x9a3503*/
    default:
      JUMPOUT(0x9A3546); /*0x9a3546*/
  }
}
