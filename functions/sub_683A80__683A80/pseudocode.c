void __thiscall sub_683A80(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0x2C) |= 0x80u;
  else
    *(this + 0x2C) &= ~0x80u;
}
