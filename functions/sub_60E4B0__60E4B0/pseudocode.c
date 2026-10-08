void __thiscall sub_60E4B0(_DWORD *this, char a2)
{
  if ( a2 ) /*0x60e4b5*/
    *(this + 7) |= 0x200000u; /*0x60e4b7*/
  else
    *(this + 7) &= ~0x200000u; /*0x60e4c1*/
}
