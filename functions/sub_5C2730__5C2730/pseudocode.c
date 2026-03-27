void __thiscall sub_5C2730(void **this)
{
  double Float; // st7
  int v3; // eax
  double v4; // st7
  int v5; // eax

  sub_57FF20((BSStringT *)*(this + 0x23B), EmptyString);
  Float = Tile_GetFloat(*(this + 0xC), 0xFD3);
  v3 = Double_To_SInt32(Float);
  sub_57D2D0(*(this + 0x23B), v3);
  v4 = Tile_GetFloat(*(this + 0xC), 0xFD4);
  v5 = Double_To_SInt32(v4);
  sub_583DD0(*(this + 0x23B), v5);
  sub_57DD90(*(this + 0x23B), 1);
}
