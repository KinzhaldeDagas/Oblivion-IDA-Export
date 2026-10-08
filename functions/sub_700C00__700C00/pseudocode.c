char __thiscall sub_700C00(_BYTE *this, int a2)
{
  char result; // al
  int v3; // esi
  _BYTE *i; // edx

  result = 0; /*0x700c06*/
  v3 = 0; /*0x700c08*/
  for ( i = this + 0x1C; *((_DWORD *)i + 0xFFFFFFFE) != a2; i += 0xC ) /*0x700c0a*/
  {
    result += *i; /*0x700c15*/
    if ( (unsigned int)++v3 >= 4 ) /*0x700c20*/
      return 0; /*0x700c22*/
  }
  if ( (*this & 1) == 0 ) /*0x700c2c*/
    return *(this + 1) - (result + *(this + 0xC * v3 + 0x1C)); /*0x700c3e*/
  return result; /*0x700c24*/
}
