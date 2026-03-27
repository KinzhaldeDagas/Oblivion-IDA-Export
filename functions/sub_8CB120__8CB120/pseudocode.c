char *__thiscall sub_8CB120(_DWORD *this, int a2)
{
  const void **v2; // esi
  int v3; // ecx
  char *result; // eax
  _DWORD *v5; // edx

  v2 = (const void **)(this + 0x1A);
  v3 = *(this + 0x1B);
  result = 0;
  if ( v3 <= 0 )
    goto LABEL_7;
  v5 = *v2;
  while ( *v5 != a2 )
  {
    ++result;
    ++v5;
    if ( (int)result >= v3 )
      goto LABEL_7;
  }
  if ( (int)result < 0 )
  {
LABEL_7:
    result = (char *)((unsigned int)v2[2] & 0x3FFFFFFF);
    if ( v2[1] == result )
      result = (char *)sub_8A6EE0(v2, 4);
    *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2;
    v2[1] = (char *)v2[1] + 1;
  }
  return result;
}
