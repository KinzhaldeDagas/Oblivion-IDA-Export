void __thiscall sub_5A1600(int this)
{
  double Float; // st7
  int v3; // eax
  double v4; // st7
  int v5; // eax

  if ( *(_BYTE *)(this + 0x9C) )
  {
    Tile_SetString(*(_DWORD **)(this + 0x3C), (_DWORD *)0xFDE, EmptyString);
    *(_BYTE *)(this + 0x9C) = 0;
  }
  Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x3C), 0xFD3);
  v3 = Double_To_SInt32(Float);
  sub_57D2D0(*(_DWORD **)(this + 0x98), v3);
  v4 = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x3C), 0xFD4);
  v5 = Double_To_SInt32(v4);
  sub_583DD0(*(_DWORD **)(this + 0x98), v5);
  sub_57DD90(*(void **)(this + 0x98), 1);
}
