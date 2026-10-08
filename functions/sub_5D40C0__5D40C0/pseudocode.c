void __thiscall sub_5D40C0(int this)
{
  double Float; // st7
  int v3; // eax
  double v4; // st7
  int v5; // eax

  if ( *(_BYTE *)(this + 0x78) ) /*0x5d40c3*/
  {
    Tile_SetString(*(_DWORD **)(this + 0x30), (_DWORD *)0xFDE, EmptyString); /*0x5d40d6*/
    *(_BYTE *)(this + 0x78) = 0; /*0x5d40db*/
  }
  Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x30), 0xFD3); /*0x5d40e7*/
  v3 = Double_To_SInt32(Float); /*0x5d40ec*/
  sub_57D2D0(*(_DWORD **)(this + 0x74), v3); /*0x5d40f5*/
  v4 = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x30), 0xFD4); /*0x5d4102*/
  v5 = Double_To_SInt32(v4); /*0x5d4107*/
  sub_583DD0(*(_DWORD **)(this + 0x74), v5); /*0x5d4110*/
  sub_57DD90(*(void **)(this + 0x74), 1); /*0x5d411a*/
}
