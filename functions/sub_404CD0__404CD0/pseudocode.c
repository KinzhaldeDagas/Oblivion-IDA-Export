void __thiscall sub_404CD0(_WORD *this, char a2)
{
  if ( a2 ) /*0x404cd5*/
    *(this + 0xC) |= 1u; /*0x404cd7*/
  else
    *(this + 0xC) &= ~1u; /*0x404cdf*/
}
