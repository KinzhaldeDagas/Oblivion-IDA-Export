void __thiscall sub_5BD550(_DWORD *this)
{
  double Float; // st7
  int v3; // eax

  Float = Tile_GetFloat((_DWORD *)*(this + 0xC), 0xFB5);
  v3 = Double_To_SInt32(Float);
  if ( dword_B3B410 != v3 )
  {
    dword_B3B410 = v3;
    sub_5BCF20((int)this, Float);
  }
}
