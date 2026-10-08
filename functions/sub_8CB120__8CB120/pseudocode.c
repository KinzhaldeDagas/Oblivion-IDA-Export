char *__thiscall sub_8CB120(_DWORD *this, int a2)
{
  const void **v2; // esi
  int v3; // ecx
  char *result; // eax
  _DWORD *v5; // edx

  v2 = (const void **)(this + 0x1A); /*0x8cb121*/
  v3 = *(this + 0x1B); /*0x8cb124*/
  result = 0; /*0x8cb127*/
  if ( v3 <= 0 ) /*0x8cb130*/
    goto LABEL_7; /*0x8cb130*/
  v5 = *v2; /*0x8cb132*/
  while ( *v5 != a2 ) /*0x8cb136*/
  {
    ++result; /*0x8cb138*/
    ++v5; /*0x8cb139*/
    if ( (int)result >= v3 ) /*0x8cb13e*/
      goto LABEL_7; /*0x8cb13e*/
  }
  if ( (int)result < 0 ) /*0x8cb144*/
  {
LABEL_7:
    result = (char *)((unsigned int)v2[2] & 0x3FFFFFFF); /*0x8cb146*/
    if ( v2[1] == result ) /*0x8cb153*/
      result = (char *)sub_8A6EE0(v2, 4); /*0x8cb158*/
    *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x8cb165*/
    v2[1] = (char *)v2[1] + 1; /*0x8cb168*/
  }
  return result; /*0x8cb16b*/
}
