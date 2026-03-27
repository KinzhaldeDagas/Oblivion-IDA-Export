const char *__stdcall sub_51F210(int a1, int a2)
{
  const char *result; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ecx

  result = "DUMMY";
  if ( a2 )
  {
    if ( !a1 )
      goto LABEL_9;
    if ( a1 != 1 )
      return result;
    LOWORD(v3) = *(_WORD *)(a2 + 0xC);
    v3 = (_WORD)v3 == 0xFFFF ? strlen(*(const char **)(a2 + 8)) : (unsigned __int16)v3;
    if ( v3 )
    {
      return *(const char **)(a2 + 8);
    }
    else
    {
LABEL_9:
      LOWORD(v4) = *(_WORD *)(a2 + 4);
      if ( (_WORD)v4 == 0xFFFF )
        v4 = strlen(*(const char **)a2);
      else
        v4 = (unsigned __int16)v4;
      if ( v4 )
        return *(const char **)a2;
    }
  }
  return result;
}
