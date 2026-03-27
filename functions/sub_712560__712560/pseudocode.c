unsigned int __thiscall sub_712560(int this, int a2)
{
  unsigned int v2; // edx
  unsigned int result; // eax
  _DWORD *i; // ecx

  v2 = *(unsigned __int16 *)(this + 0xD2);
  result = 0;
  if ( !*(_WORD *)(this + 0xD2) )
    return 0;
  for ( i = *(_DWORD **)(this + 0xCC); a2 != *i; ++i )
  {
    if ( ++result >= v2 )
      return 0;
  }
  return result;
}
