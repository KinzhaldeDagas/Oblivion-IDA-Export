const void *__thiscall sub_8DA150(const void **this, int a2)
{
  const void **v2; // esi
  const void *result; // eax

  if ( a2 )
  {
    if ( *(_WORD *)(a2 + 4) )
      ++*(_WORD *)(a2 + 6);
    v2 = this + 8;
    result = (const void *)((unsigned int)*(this + 0xA) & 0x3FFFFFFF);
    if ( *(this + 9) == result )
      result = (const void *)sub_8A6EE0(v2, 4);
    *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2;
    v2[1] = (char *)v2[1] + 1;
  }
  return result;
}
