unsigned __int16 __thiscall sub_6C5F80(int this, int a2)
{
  unsigned __int16 v2; // dx
  unsigned __int16 result; // ax
  int v4; // ecx

  v2 = *(_WORD *)(this + 0x44);
  result = 0;
  if ( !v2 )
    return word_A7A160;
  v4 = *(_DWORD *)(this + 0x40);
  while ( *(_DWORD *)(v4 + 4 * result) )
  {
    if ( ++result >= v2 )
      return word_A7A160;
  }
  *(_DWORD *)(v4 + 4 * result) = a2;
  return result;
}
