const char *__stdcall sub_51F210(int a1, int a2)
{
  const char *result; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ecx

  result = "DUMMY"; /*0x51f217*/
  if ( a2 )
  {
    if ( !a1 ) /*0x51f226*/
      goto LABEL_9; /*0x51f226*/
    if ( a1 != 1 ) /*0x51f22b*/
      return result; /*0x51f22b*/
    LOWORD(v3) = *(_WORD *)(a2 + 0xC); /*0x51f22d*/
    v3 = (_WORD)v3 == 0xFFFF ? strlen(*(const char **)(a2 + 8)) : (unsigned __int16)v3;
    if ( v3 ) /*0x51f252*/
    {
      return *(const char **)(a2 + 8); /*0x51f254*/
    }
    else
    {
LABEL_9:
      LOWORD(v4) = *(_WORD *)(a2 + 4); /*0x51f25c*/
      if ( (_WORD)v4 == 0xFFFF ) /*0x51f265*/
        v4 = strlen(*(const char **)a2); /*0x51f279*/
      else
        v4 = (unsigned __int16)v4; /*0x51f27d*/
      if ( v4 ) /*0x51f282*/
        return *(const char **)a2; /*0x51f284*/
    }
  }
  return result; /*0x51f258*/
}
