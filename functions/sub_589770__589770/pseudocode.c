BOOL __thiscall sub_589770(int this)
{
  __int16 v1; // di
  unsigned int v2; // eax
  BOOL result; // eax

  v1 = *(_WORD *)(this + 0x18); /*0x589771*/
  result = 1; /*0x5897b6*/
  if ( v1 != 0xFDE )
  {
    LOWORD(v2) = *(_WORD *)(this + 0xC); /*0x58977c*/
    v2 = (_WORD)v2 == 0xFFFF ? strlen(*(const char **)(this + 8)) : (unsigned __int16)v2;
    if ( !v2 && *(_BYTE *)(this + 0x1A) && v1 != 0xFE6 ) /*0x5897b0*/
      return 0; /*0x58977a*/
  }
  return result; /*0x5897b4*/
}
