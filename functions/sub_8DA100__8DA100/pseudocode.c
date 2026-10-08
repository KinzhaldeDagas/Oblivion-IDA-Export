const void *__thiscall sub_8DA100(const void **this, int a2)
{
  const void **v2; // esi
  const void *result; // eax

  if ( a2 ) /*0x8da107*/
  {
    if ( *(_WORD *)(a2 + 4) ) /*0x8da109*/
      ++*(_WORD *)(a2 + 6); /*0x8da110*/
    v2 = this + 5; /*0x8da118*/
    result = (const void *)((unsigned int)*(this + 7) & 0x3FFFFFFF); /*0x8da11e*/
    if ( *(this + 6) == result ) /*0x8da125*/
      result = (const void *)sub_8A6EE0(v2, 4); /*0x8da12a*/
    *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x8da137*/
    v2[1] = (char *)v2[1] + 1; /*0x8da13a*/
  }
  return result; /*0x8da13e*/
}
