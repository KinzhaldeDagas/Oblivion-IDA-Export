void __thiscall sub_5BD550(_DWORD *this)
{
  double Float; // st7
  int v3; // eax

  Float = Tile_GetFloat((_DWORD *)*(this + 0xC), 0xFB5); /*0x5bd55b*/
  v3 = Double_To_SInt32(Float); /*0x5bd560*/
  if ( unk_B3B410 != v3 ) /*0x5bd56b*/
  {
    unk_B3B410 = v3; /*0x5bd56f*/
    sub_5BCF20((int)this, Float); /*0x5bd575*/
  }
}
