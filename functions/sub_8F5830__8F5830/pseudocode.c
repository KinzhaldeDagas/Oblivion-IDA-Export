const void *__thiscall sub_8F5830(_DWORD *this, const void **a2)
{
  const void *result; // eax

  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
    sub_8A6EE0(a2, 4);
  *((_DWORD *)*a2 + (_DWORD)a2[1]) = *(this + 6);
  result = (char *)a2[1] + 1;
  a2[1] = result;
  return result;
}
