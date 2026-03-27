void __thiscall sub_4AF1A0(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0x58) |= 1u;
  else
    *(this + 0x58) &= ~1u;
}
