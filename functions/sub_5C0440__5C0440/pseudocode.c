void __userpurge sub_5C0440(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double Float@<st0>,
        int a5@<ebx>,
        int a6,
        int a7)
{
  if ( a1[0xA] == 2 && Tile_GetFloat((_DWORD *)a1[0x25], 0xFA7) != dbl_A3DDD8 || a6 == 0x1A || a6 == 9 || a6 == 8 ) /*0x5c0478*/
  {
    switch ( a6 ) /*0x5c0486*/
    {
      case 0: /*0x5c0486*/
      case 1: /*0x5c0486*/
      case 0x1A: /*0x5c0486*/
        sub_5BFB90((int)a1, a3, Float); /*0x5c04b3*/
        break; /*0x5c04b3*/
      case 8: /*0x5c0486*/
        sub_5BF470((int)a1, a6, a2, a3, a5); /*0x5c04a7*/
        break; /*0x5c04ae*/
      case 9: /*0x5c0486*/
        sub_5BEA10((int)a1, a3, Float); /*0x5c048f*/
        break; /*0x5c0496*/
      case 0x18: /*0x5c0486*/
        sub_5BEA40(a1, Float); /*0x5c049b*/
        break; /*0x5c04a2*/
      default:
        return;
    }
  }
}
