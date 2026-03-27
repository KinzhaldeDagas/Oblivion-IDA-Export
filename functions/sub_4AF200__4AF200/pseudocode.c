void __thiscall sub_4AF200(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0x58) |= 4u;
  else
    *(this + 0x58) &= ~4u;
}
