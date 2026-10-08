void __thiscall sub_60E470(_DWORD *this, char a2)
{
  if ( a2 ) /*0x60e475*/
    *(this + 7) |= 0x1000u; /*0x60e477*/
  else
    *(this + 7) &= ~0x1000u; /*0x60e481*/
}
