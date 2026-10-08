void __thiscall sub_4AF200(_BYTE *this, char a2)
{
  if ( a2 ) /*0x4af205*/
    *(this + 0x58) |= 4u; /*0x4af207*/
  else
    *(this + 0x58) &= ~4u; /*0x4af20e*/
}
