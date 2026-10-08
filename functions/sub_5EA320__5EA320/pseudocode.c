void __thiscall sub_5EA320(_DWORD *this, char a2)
{
  if ( a2 ) /*0x5ea325*/
    *(this + 0x7D) |= 0x100000u; /*0x5ea327*/
  else
    *(this + 0x7D) &= ~0x100000u; /*0x5ea334*/
}
