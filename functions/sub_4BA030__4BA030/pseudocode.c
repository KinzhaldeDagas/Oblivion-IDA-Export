unsigned __int8 __thiscall sub_4BA030(int this, int a2)
{
  unsigned int v2; // esi
  unsigned __int8 result; // al
  int v4; // edx
  _DWORD *i; // ecx

  v2 = *(unsigned __int16 *)(this + 0x52);
  result = 0xFF;
  v4 = 0;
  if ( *(_WORD *)(this + 0x52) )
  {
    for ( i = *(_DWORD **)(this + 0x4C); *i != a2; ++i )
    {
      if ( ++v4 >= v2 )
        return result;
    }
    return v4;
  }
  return result;
}
