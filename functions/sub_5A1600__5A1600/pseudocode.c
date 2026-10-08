void __thiscall sub_5A1600(int this)
{
  double Float; // st7
  int v3; // eax
  double v4; // st7
  int v5; // eax

  if ( *(_BYTE *)(this + 0x9C) ) /*0x5a1603*/
  {
    Tile_SetString(*(_DWORD **)(this + 0x3C), (_DWORD *)0xFDE, EmptyString); /*0x5a1619*/
    *(_BYTE *)(this + 0x9C) = 0; /*0x5a161e*/
  }
  Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x3C), 0xFD3); /*0x5a162d*/
  v3 = Double_To_SInt32(Float); /*0x5a1632*/
  sub_57D2D0(*(_DWORD **)(this + 0x98), v3); /*0x5a163e*/
  v4 = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x3C), 0xFD4); /*0x5a164b*/
  v5 = Double_To_SInt32(v4); /*0x5a1650*/
  sub_583DD0(*(_DWORD **)(this + 0x98), v5); /*0x5a165c*/
  sub_57DD90(*(void **)(this + 0x98), 1); /*0x5a1669*/
}
