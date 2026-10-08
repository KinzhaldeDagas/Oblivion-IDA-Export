void __thiscall sub_5D7590(int this)
{
  double Float; // st7
  int v3; // eax
  double v4; // st7
  int v5; // eax

  if ( !*(_BYTE *)(this + 0x6C) ) /*0x5d7593*/
  {
    Tile_SetString(*(_DWORD **)(this + 0x54), (_DWORD *)0xFDE, EmptyString); /*0x5d75a6*/
    *(_BYTE *)(this + 0x6C) = 1; /*0x5d75ab*/
  }
  Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x54), 0xFD3); /*0x5d75b7*/
  v3 = Double_To_SInt32(Float); /*0x5d75bc*/
  sub_57D2D0(*(_DWORD **)(this + 0x70), v3); /*0x5d75c5*/
  v4 = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x54), 0xFD4); /*0x5d75d2*/
  v5 = Double_To_SInt32(v4); /*0x5d75d7*/
  sub_583DD0(*(_DWORD **)(this + 0x70), v5); /*0x5d75e0*/
  sub_57DD90(*(void **)(this + 0x70), 1); /*0x5d75ea*/
}
