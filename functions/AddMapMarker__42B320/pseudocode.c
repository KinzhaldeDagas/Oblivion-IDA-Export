void __thiscall AddMapMarker(_BYTE *this, char a2)
{
  if ( a2 ) /*0x42b325*/
    *(this + 0xC) |= 1u; /*0x42b327*/
  else
    *(this + 0xC) &= ~1u; /*0x42b32e*/
}
