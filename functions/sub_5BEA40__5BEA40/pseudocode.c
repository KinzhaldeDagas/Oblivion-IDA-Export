void __usercall sub_5BEA40(_DWORD *a1@<ecx>, double a2@<st0>)
{
  Tile_GetFloat((_DWORD *)a1[0x30], 0xFAF);
  if ( a2 == fConstant_2 )
  {
    sub_57DE50(8);
    sub_5BE5C0(a1, 1);
    Tile_SetFloat((Tile *)a1[0x30], (_DWORD *)0xFAF, 1.0);
  }
}
