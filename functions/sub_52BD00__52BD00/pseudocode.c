unsigned int __thiscall sub_52BD00(int this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // eax

  if ( a2 > 8 )
    return 0;
  if ( a2 == 1 )
  {
    LOWORD(v2) = *(_WORD *)(this + 0x1CC);
    if ( (_WORD)v2 == 0xFFFF )
      v2 = strlen(*(const char **)(this + 0x1C8));
    else
      v2 = (unsigned __int16)v2;
    if ( !v2 )
      return this + 0x1D0;
  }
  else if ( a2 == 2 )
  {
    LOWORD(v4) = *(_WORD *)(this + 0x1D8);
    v4 = (_WORD)v4 == 0xFFFF ? strlen(*(const char **)(this + 0x1D4)) : (unsigned __int16)v4;
    if ( !v4 )
      return this + 0x1C4;
  }
  return this + 0xC * a2 + 0x1B8;
}
