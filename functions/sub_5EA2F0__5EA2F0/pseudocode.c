void __thiscall sub_5EA2F0(_DWORD *this, char a2)
{
  if ( a2 ) /*0x5ea2f5*/
    *(this + 0x7D) |= 0x40000u; /*0x5ea2f7*/
  else
    *(this + 0x7D) &= ~0x40000u; /*0x5ea304*/
}
