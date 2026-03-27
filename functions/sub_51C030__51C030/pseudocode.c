bool __thiscall sub_51C030(unsigned int *this)
{
  unsigned int v1; // edx
  unsigned int v2; // esi
  bool result; // al
  int v4; // esi
  _DWORD *v5; // edi
  int v6; // ecx
  _DWORD *v7; // edx

  v1 = *(this + 0xE);
  v2 = *(this + 0xF);
  result = v1 != v2;
  if ( v1 > 7 || v2 > 7 )
    result = 0;
  v4 = 1;
  v5 = this + 0x11;
  do
  {
    if ( !result )
      break;
    v6 = v4;
    if ( v4 < 7 )
    {
      v7 = v5 + 1;
      do
      {
        if ( !result )
          break;
        if ( *v7 == *v5 )
          result = 0;
        ++v6;
        ++v7;
      }
      while ( v6 < 7 );
    }
    ++v4;
    ++v5;
  }
  while ( v4 - 1 < 7 );
  return result;
}
