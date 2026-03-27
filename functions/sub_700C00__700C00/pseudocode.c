char __thiscall sub_700C00(_BYTE *this, int a2)
{
  char result; // al
  int v3; // esi
  _BYTE *i; // edx

  result = 0;
  v3 = 0;
  for ( i = this + 0x1C; *((_DWORD *)i + 0xFFFFFFFE) != a2; i += 0xC )
  {
    result += *i;
    if ( (unsigned int)++v3 >= 4 )
      return 0;
  }
  if ( (*this & 1) == 0 )
    return *(this + 1) - (result + *(this + 0xC * v3 + 0x1C));
  return result;
}
