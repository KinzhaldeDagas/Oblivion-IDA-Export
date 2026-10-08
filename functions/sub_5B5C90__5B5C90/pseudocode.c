void sub_5B5C90()
{
  _DWORD *v0; // esi
  bool v1; // al
  char v2; // al
  float a2; // [esp+8h] [ebp-8h]

  Tile_SetFloat(*(Tile **)(unk_B3B40C + 4), 0xFB1u, flt_A40098); /*0x5b5ca8*/
  v0 = *(_DWORD **)(unk_B3B40C + 4); /*0x5b5cb3*/
  a2 = Tile_GetFloat(v0, 0xFB2); /*0x5b5cc5*/
  sub_589980(v0, 0xFB1, flt_A40098, 0.0, a2); /*0x5b5cdf*/
  if ( MEMORY[0xB33428] ) /*0x5b5ce4*/
  {
    v1 = *(_DWORD *)(MEMORY[0xB33428] + 0x20) != 0; /*0x5b5cf2*/
    unk_B3B408 = v1; /*0x5b5cf7*/
    if ( v1 ) /*0x5b5cfc*/
    {
LABEL_4:
      Tile_SetFloat(*(Tile **)(unk_B3B40C + 0x44), 0xFA1u, 1.0); /*0x5b5d18*/
      return; /*0x5b5d30*/
    }
  }
  else
  {
    unk_B3B408 = 0; /*0x5b5d31*/
  }
  v2 = sub_410C40(off_B03094[0], 1);            // MenuPlease: patched call to sub_410C40 so main-menu refresh does not restart Map loop.bik. /*0x5b5d07*/
  unk_B3B408 = v2; /*0x5b5d11*/
  if ( v2 ) /*0x5b5d16*/
    goto LABEL_4; /*0x5b5d16*/
  Tile_SetFloat(*(Tile **)(unk_B3B40C + 0x44), 0xFA1u, fConstant_2); /*0x5b5d52*/
}
