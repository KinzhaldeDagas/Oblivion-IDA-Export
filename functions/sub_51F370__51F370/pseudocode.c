CHAR *__thiscall sub_51F370(int *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  CHAR *result; // eax

  v2 = sub_51F1D0(this, a2);
  if ( !v2 )
    return 0;
  LOWORD(v3) = *(_WORD *)(v2 + 0x18);
  v3 = (_WORD)v3 == 0xFFFF ? strlen(*(const char **)(v2 + 0x14)) : (unsigned __int16)v3;
  if ( !v3 )
    return 0;
  result = *(CHAR **)(v2 + 0x14);
  if ( !result )
    return EmptyString;
  return result;
}
