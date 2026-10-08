void __thiscall sub_5C2730(void **this)
{
  double Float; // st7
  int v3; // eax
  double v4; // st7
  int v5; // eax

  sub_57FF20((BSStringT *)*(this + 0x23B), EmptyString); /*0x5c273e*/
  Float = Tile_GetFloat(*(this + 0xC), 0xFD3); /*0x5c274b*/
  v3 = Double_To_SInt32(Float); /*0x5c2750*/
  sub_57D2D0(*(this + 0x23B), v3); /*0x5c275c*/
  v4 = Tile_GetFloat(*(this + 0xC), 0xFD4); /*0x5c2769*/
  v5 = Double_To_SInt32(v4); /*0x5c276e*/
  sub_583DD0(*(this + 0x23B), v5); /*0x5c277a*/
  sub_57DD90(*(this + 0x23B), 1); /*0x5c2787*/
}
