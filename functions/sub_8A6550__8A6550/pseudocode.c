char *__thiscall sub_8A6550(_DWORD *this, int a2)
{
  const void **v2; // esi
  int v3; // ecx
  char *result; // eax
  _DWORD *v5; // edx

  v2 = (const void **)(this + 0x2B); /*0x8a6551*/
  v3 = *(this + 0x2C); /*0x8a6557*/
  result = 0; /*0x8a655a*/
  if ( v3 <= 0 ) /*0x8a655e*/
    goto LABEL_5; /*0x8a655e*/
  v5 = *v2; /*0x8a6560*/
  while ( *v5 ) /*0x8a6565*/
  {
    ++result; /*0x8a6567*/
    ++v5; /*0x8a6568*/
    if ( (int)result >= v3 ) /*0x8a656d*/
      goto LABEL_5; /*0x8a656d*/
  }
  if ( (int)result < 0 ) /*0x8a65a2*/
  {
LABEL_5:
    if ( v2[1] == (const void *)((unsigned int)v2[2] & 0x3FFFFFFF) ) /*0x8a657c*/
      sub_8A6EE0(v2, 4); /*0x8a6581*/
    *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x8a6592*/
    result = (char *)v2[1] + 1; /*0x8a6598*/
    v2[1] = result; /*0x8a6599*/
  }
  else
  {
    *((_DWORD *)*v2 + (_DWORD)result) = a2; /*0x8a65aa*/
  }
  return result; /*0x8a659c*/
}
