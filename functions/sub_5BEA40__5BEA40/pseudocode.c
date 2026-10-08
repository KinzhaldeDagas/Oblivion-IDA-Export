void __usercall sub_5BEA40(_DWORD *a1@<ecx>, double a2@<st0>)
{
  Tile_GetFloat((_DWORD *)a1[0x30], 0xFAF); /*0x5bea4e*/
  if ( a2 == fConstant_2 ) /*0x5bea5e*/
  {
    sub_57DE50(8); /*0x5bea62*/
    sub_5BE5C0(a1, 1); /*0x5bea6e*/
    Tile_SetFloat((Tile *)a1[0x30], 0xFAFu, 1.0); /*0x5bea84*/
  }
}
