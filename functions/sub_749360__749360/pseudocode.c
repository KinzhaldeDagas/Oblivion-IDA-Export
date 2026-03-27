int __thiscall sub_749360(_WORD *this, _BYTE *a2, int a3, _BYTE *a4)
{
  int v4; // eax
  int result; // eax

  *a2 = 1;
  *a4 = 0;
  if ( *a2 )
    *(this + 0xC) |= 2u;
  else
    *(this + 0xC) &= ~2u;
  *(this + 0xC) |= 0xCu;
  v4 = (unsigned __int16)*(this + 0xC);
  if ( *a4 )
    result = v4 | 0x10;
  else
    result = v4 & 0xFFEF;
  *(this + 0xC) = result;
  return result;
}
