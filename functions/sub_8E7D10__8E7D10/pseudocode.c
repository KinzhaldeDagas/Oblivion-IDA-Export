const void *__thiscall sub_8E7D10(_DWORD *this, const void **a2)
{
  int v3; // eax
  int v4; // ecx
  const void *result; // eax

  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
    sub_8A6EE0(a2, 4);
  *((_DWORD *)*a2 + (_DWORD)a2[1]) = *(this + 6);
  v3 = (int)a2[1] + 1;
  v4 = (unsigned int)a2[2] & 0x3FFFFFFF;
  a2[1] = (const void *)v3;
  if ( v3 == v4 )
    sub_8A6EE0(a2, 4);
  *((_DWORD *)*a2 + (_DWORD)a2[1]) = *(this + 7);
  result = (char *)a2[1] + 1;
  a2[1] = result;
  return result;
}
