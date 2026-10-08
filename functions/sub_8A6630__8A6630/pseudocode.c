char *__thiscall sub_8A6630(_DWORD *this, int a2)
{
  const void **v2; // esi
  int v3; // ecx
  char *result; // eax
  _DWORD *v5; // edx

  v2 = (const void **)(this + 0x25); /*0x8a6631*/
  v3 = *(this + 0x26); /*0x8a6637*/
  result = 0; /*0x8a663a*/
  if ( v3 <= 0 ) /*0x8a663e*/
    goto LABEL_5; /*0x8a663e*/
  v5 = *v2; /*0x8a6640*/
  while ( *v5 ) /*0x8a6645*/
  {
    ++result; /*0x8a6647*/
    ++v5; /*0x8a6648*/
    if ( (int)result >= v3 ) /*0x8a664d*/
      goto LABEL_5; /*0x8a664d*/
  }
  if ( (int)result < 0 ) /*0x8a6682*/
  {
LABEL_5:
    if ( v2[1] == (const void *)((unsigned int)v2[2] & 0x3FFFFFFF) ) /*0x8a665c*/
      sub_8A6EE0(v2, 4); /*0x8a6661*/
    *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x8a6672*/
    result = (char *)v2[1] + 1; /*0x8a6678*/
    v2[1] = result; /*0x8a6679*/
  }
  else
  {
    *((_DWORD *)*v2 + (_DWORD)result) = a2; /*0x8a668a*/
  }
  return result; /*0x8a667c*/
}
