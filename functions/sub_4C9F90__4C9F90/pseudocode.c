void __thiscall sub_4C9F90(_BYTE *this, char a2)
{
  if ( a2 ) /*0x4c9f95*/
    *(this + 0x24) |= 0x10u; /*0x4c9f97*/
  else
    *(this + 0x24) &= ~0x10u; /*0x4c9f9e*/
}
