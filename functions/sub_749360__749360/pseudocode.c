int __thiscall sub_749360(_WORD *this, _BYTE *a2, int a3, _BYTE *a4)
{
  int v4; // eax
  int result; // eax

  *a2 = 1; /*0x749368*/
  *a4 = 0; /*0x74936b*/
  if ( *a2 ) /*0x74936e*/
    *(this + 0xC) |= 2u; /*0x749373*/
  else
    *(this + 0xC) &= ~2u; /*0x74937a*/
  *(this + 0xC) |= 0xCu; /*0x749380*/
  v4 = (unsigned __int16)*(this + 0xC); /*0x749388*/
  if ( *a4 ) /*0x749385*/
    result = v4 | 0x10; /*0x74938e*/
  else
    result = v4 & 0xFFEF; /*0x749398*/
  *(this + 0xC) = result; /*0x749391*/
  return result; /*0x749395*/
}
