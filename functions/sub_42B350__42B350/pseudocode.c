void __thiscall sub_42B350(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0xC) |= 2u;
  else
    *(this + 0xC) &= ~2u;
}
