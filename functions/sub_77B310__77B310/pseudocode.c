// DX10OBSE runtime log pass 2026-05-24: internal render-state byte flag setter is hot and often writes the existing value. Plugin now keeps the call counter but only marks DX10 constants dirty and logs when the byte value actually changes.
char __thiscall sub_77B310(_BYTE *this, char a2)
{
  *(this + 0xFF4) = a2; /*0x77b314*/
  return a2; /*0x77b31a*/
}
