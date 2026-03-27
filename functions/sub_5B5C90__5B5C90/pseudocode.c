void sub_5B5C90()
{
  _DWORD *v0; // esi
  bool v1; // al
  char v2; // al
  float a2; // [esp+8h] [ebp-8h]

  Tile_SetFloat(*(Tile **)(dword_B3B40C + 4), (_DWORD *)0xFB1, flt_A40098);
  v0 = *(_DWORD **)(dword_B3B40C + 4);
  a2 = Tile_GetFloat(v0, 0xFB2);
  sub_589980(v0, 0xFB1, flt_A40098, 0.0, a2);
  if ( ObjectPtr )
  {
    v1 = *(_DWORD *)(ObjectPtr + 0x20) != 0;
    byte_B3B408 = v1;
    if ( v1 )
    {
LABEL_4:
      Tile_SetFloat(*(Tile **)(dword_B3B40C + 0x44), (_DWORD *)0xFA1, 1.0);
      return;
    }
  }
  else
  {
    byte_B3B408 = 0;
  }
  v2 = sub_410C40(off_B03094[0], 1);
  byte_B3B408 = v2;
  if ( v2 )
    goto LABEL_4;
  Tile_SetFloat(*(Tile **)(dword_B3B40C + 0x44), (_DWORD *)0xFA1, fConstant_2);
}
