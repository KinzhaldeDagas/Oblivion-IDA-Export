bool __thiscall sub_6DE110(float **this, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // esi
  float *v4; // edx
  int v5; // edi
  int v6; // eax

  v3 = 0;
  if ( a3 )
  {
    v4 = *this;
    v5 = *a2 - (_DWORD)*this;
    while ( *(float *)((char *)v4 + v5) == *v4
         && *(float *)((char *)v4 + v5 + 4) == v4[1]
         && *(float *)((char *)v4 + v5 + 8) == v4[2] )
    {
      ++v3;
      v4 += 3;
      if ( v3 >= a3 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v6 = (int)*(this + 1);
  if ( v6 )
  {
    if ( a2[1] )
      return j_CRT_strcmp(v6, a2[1]) == 0;
  }
  else if ( !a2[1] )
  {
    return j_CRT_strcmp(v6, a2[1]) == 0;
  }
  return 0;
}
