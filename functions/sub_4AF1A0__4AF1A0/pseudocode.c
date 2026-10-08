void __thiscall sub_4AF1A0(_BYTE *this, char a2)
{
  if ( a2 ) /*0x4af1a5*/
    *(this + 0x58) |= 1u; /*0x4af1a7*/
  else
    *(this + 0x58) &= ~1u; /*0x4af1ae*/
}
