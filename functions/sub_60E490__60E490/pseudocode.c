void __thiscall sub_60E490(_DWORD *this, char a2)
{
  if ( a2 ) /*0x60e495*/
    *(this + 7) |= (unsigned int)&loc_800000; /*0x60e497*/
  else
    *(this + 7) &= ~0x800000u; /*0x60e4a1*/
}
