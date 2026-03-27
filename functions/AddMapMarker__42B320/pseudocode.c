void __thiscall AddMapMarker(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0xC) |= 1u;
  else
    *(this + 0xC) &= ~1u;
}
