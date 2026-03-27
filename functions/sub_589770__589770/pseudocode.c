BOOL __thiscall sub_589770(int this)
{
  __int16 v1; // di
  unsigned int v2; // eax
  BOOL result; // eax

  v1 = *(_WORD *)(this + 0x18);
  result = 1;
  if ( v1 != 0xFDE )
  {
    LOWORD(v2) = *(_WORD *)(this + 0xC);
    v2 = (_WORD)v2 == 0xFFFF ? strlen(*(const char **)(this + 8)) : (unsigned __int16)v2;
    if ( !v2 && *(_BYTE *)(this + 0x1A) && v1 != 0xFE6 )
      return 0;
  }
  return result;
}
