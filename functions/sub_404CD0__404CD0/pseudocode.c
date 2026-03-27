void __thiscall sub_404CD0(_WORD *this, char a2)
{
  if ( a2 )
    *(this + 0xC) |= 1u;
  else
    *(this + 0xC) &= ~1u;
}
