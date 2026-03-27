const void *__thiscall sub_8DA100(const void **this, int a2)
{
  const void **v2; // esi
  const void *result; // eax

  if ( a2 )
  {
    if ( *(_WORD *)(a2 + 4) )
      ++*(_WORD *)(a2 + 6);
    v2 = this + 5;
    result = (const void *)((unsigned int)*(this + 7) & 0x3FFFFFFF);
    if ( *(this + 6) == result )
      result = (const void *)sub_8A6EE0(v2, 4);
    *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2;
    v2[1] = (char *)v2[1] + 1;
  }
  return result;
}
