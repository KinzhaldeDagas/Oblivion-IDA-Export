const void *__thiscall sub_8DA150(const void **this, int a2)
{
  const void **v2; // esi
  const void *result; // eax

  if ( a2 ) /*0x8da157*/
  {
    if ( *(_WORD *)(a2 + 4) ) /*0x8da159*/
      ++*(_WORD *)(a2 + 6); /*0x8da160*/
    v2 = this + 8; /*0x8da168*/
    result = (const void *)((unsigned int)*(this + 0xA) & 0x3FFFFFFF); /*0x8da16e*/
    if ( *(this + 9) == result ) /*0x8da175*/
      result = (const void *)sub_8A6EE0(v2, 4); /*0x8da17a*/
    *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x8da187*/
    v2[1] = (char *)v2[1] + 1; /*0x8da18a*/
  }
  return result; /*0x8da18e*/
}
