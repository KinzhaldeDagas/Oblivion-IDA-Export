int *__thiscall sub_91F3A0(int ***this, const void **a2)
{
  int **v3; // ecx
  int *result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int i; // [esp+8h] [ebp-4h]

  sub_91F300(this); /*0x91f3a5*/
  v3 = *this; /*0x91f3aa*/
  result = (*this)[1]; /*0x91f3ad*/
  v5 = 0; /*0x91f3b0*/
  for ( i = 0; v5 < (int)result; ++v5 ) /*0x91f3b8*/
  {
    v6 = (*v3)[v5]; /*0x91f3c2*/
    if ( v6 >= 0 ) /*0x91f3c7*/
    {
      (*v3)[v5] = (*v3)[v6]; /*0x91f40f*/
    }
    else
    {
      v7 = -v6; /*0x91f3ce*/
      if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x91f3db*/
        sub_8A6EE0(a2, 4); /*0x91f3e0*/
      *((_DWORD *)*a2 + (_DWORD)a2[1]) = v7; /*0x91f3ed*/
      a2[1] = (char *)a2[1] + 1; /*0x91f3f8*/
      (**this)[v5] = i++; /*0x91f400*/
    }
    v3 = *this; /*0x91f412*/
    result = (*this)[1]; /*0x91f415*/
  }
  return result; /*0x91f41f*/
}
