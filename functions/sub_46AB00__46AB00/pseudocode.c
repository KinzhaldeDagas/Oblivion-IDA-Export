void __thiscall sub_46AB00(_DWORD *this, char a2)
{
  if ( a2 ) /*0x46ab05*/
    *(this + 2) |= 0x20000u; /*0x46ab07*/
  else
    *(this + 2) &= ~0x20000u; /*0x46ab11*/
}
