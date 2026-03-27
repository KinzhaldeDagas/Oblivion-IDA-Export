void __thiscall sub_51BED0(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0x60) |= 1u;
  else
    *(this + 0x60) &= ~1u;
}
