void __userpurge sub_5C0440(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double Float@<st0>, int a5, int a6)
{
  if ( a1[0xA] == 2 && (Float = Tile_GetFloat((_DWORD *)a1[0x25], 0xFA7), Float != dbl_A3DDD8)
    || a5 == 0x1A
    || a5 == 9
    || a5 == 8 )
  {
    switch ( a5 )
    {
      case 0:
      case 1:
      case 0x1A:
        sub_5BFB90((int)a1, a3, Float);
        break;
      case 8:
        sub_5BF470((int)a1, a5, a2, a3);
        break;
      case 9:
        sub_5BEA10((int)a1, a3, Float);
        break;
      case 0x18:
        sub_5BEA40(a1, Float);
        break;
      default:
        return;
    }
  }
}
