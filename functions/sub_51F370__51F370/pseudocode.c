CHAR *__thiscall sub_51F370(int *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  CHAR *result; // eax

  v2 = sub_51F1D0(this, a2); /*0x51f375*/
  if ( !v2 ) /*0x51f37c*/
    return 0; /*0x51f37c*/
  LOWORD(v3) = *(_WORD *)(v2 + 0x18); /*0x51f37e*/
  v3 = (_WORD)v3 == 0xFFFF ? strlen(*(const char **)(v2 + 0x14)) : (unsigned __int16)v3;
  if ( !v3 ) /*0x51f3a3*/
    return 0; /*0x51f3b4*/
  result = *(CHAR **)(v2 + 0x14); /*0x51f3a5*/
  if ( !result ) /*0x51f3aa*/
    return EmptyString; /*0x51f3ac*/
  return result; /*0x51f3b1*/
}
