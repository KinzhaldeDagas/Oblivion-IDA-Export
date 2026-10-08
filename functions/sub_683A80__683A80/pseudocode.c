void __thiscall sub_683A80(_BYTE *this, char a2)
{
  if ( a2 ) /*0x683a85*/
    *(this + 0x2C) |= 0x80u; /*0x683a87*/
  else
    *(this + 0x2C) &= ~0x80u; /*0x683a8e*/
}
