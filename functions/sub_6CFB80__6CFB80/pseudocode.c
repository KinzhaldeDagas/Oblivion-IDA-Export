unsigned __int16 __thiscall sub_6CFB80(int this, const char *a2)
{
  unsigned __int16 result; // ax
  unsigned __int16 v3; // si
  int v4; // edi

  if ( !a2 )
    return word_A7A160;
  v3 = *(_WORD *)(this + 0x44);
  result = 0;
  if ( !v3 )
    return word_A7A160;
  v4 = *(_DWORD *)(this + 0x40);
  while ( !*(_DWORD *)(v4 + 4 * result) || strcmp(*(const char **)(*(_DWORD *)(v4 + 4 * result) + 8), a2) )
  {
    if ( ++result >= v3 )
      return word_A7A160;
  }
  return result;
}
