int *__thiscall sub_91F3A0(int ***this, const void **a2)
{
  int **v3; // ecx
  int *result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int i; // [esp+8h] [ebp-4h]

  sub_91F300(this);
  v3 = *this;
  result = (*this)[1];
  v5 = 0;
  for ( i = 0; v5 < (int)result; ++v5 )
  {
    v6 = (*v3)[v5];
    if ( v6 >= 0 )
    {
      (*v3)[v5] = (*v3)[v6];
    }
    else
    {
      v7 = -v6;
      if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
        sub_8A6EE0(a2, 4);
      *((_DWORD *)*a2 + (_DWORD)a2[1]) = v7;
      a2[1] = (char *)a2[1] + 1;
      (**this)[v5] = i++;
    }
    v3 = *this;
    result = (*this)[1];
  }
  return result;
}
