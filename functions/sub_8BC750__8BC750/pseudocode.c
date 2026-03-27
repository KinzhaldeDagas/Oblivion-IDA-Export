_DWORD *__thiscall sub_8BC750(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // edx
  _DWORD *result; // eax
  _DWORD *v6; // esi
  const void **v7; // esi

  v4 = *(this + 0x12);
  result = 0;
  if ( v4 <= 0 )
  {
LABEL_5:
    v7 = (const void **)(this + 0x11);
    if ( *(this + 0x12) == (*(this + 0x13) & 0x3FFFFFFF) )
      sub_8A6EE0(v7, 0x10);
    result = (char *)*v7 + 0x10 * (_DWORD)v7[1];
    v7[1] = (char *)v7[1] + 1;
    result[2] = a3;
    result[3] = a4;
    *result = a2;
  }
  else
  {
    v6 = (_DWORD *)*(this + 0x11);
    while ( *v6 != a2 )
    {
      result = (_DWORD *)((char *)result + 1);
      v6 += 4;
      if ( (int)result >= v4 )
        goto LABEL_5;
    }
  }
  return result;
}
