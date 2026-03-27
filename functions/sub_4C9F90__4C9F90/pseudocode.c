void __thiscall sub_4C9F90(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0x24) |= 0x10u;
  else
    *(this + 0x24) &= ~0x10u;
}
