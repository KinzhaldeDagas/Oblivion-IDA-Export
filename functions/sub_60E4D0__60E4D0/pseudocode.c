void __thiscall sub_60E4D0(_DWORD *this, char a2)
{
  if ( a2 ) /*0x60e4d5*/
    *(this + 7) |= 0x100000u; /*0x60e4d7*/
  else
    *(this + 7) &= ~0x100000u; /*0x60e4e1*/
}
