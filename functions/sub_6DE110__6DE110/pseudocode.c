bool __thiscall sub_6DE110(float **this, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // esi
  float *v4; // edx
  int v5; // edi
  char *v6; // eax

  v3 = 0; /*0x6de11e*/
  if ( a3 ) /*0x6de123*/
  {
    v4 = *this; /*0x6de125*/
    v5 = *a2 - (_DWORD)*this; /*0x6de12a*/
    while ( *(float *)((char *)v4 + v5) == *v4 /*0x6de18c*/
         && *(float *)((char *)v4 + v5 + 4) == v4[1]
         && *(float *)((char *)v4 + v5 + 8) == v4[2] )
    {
      ++v3; /*0x6de18e*/
      v4 += 3; /*0x6de191*/
      if ( v3 >= a3 ) /*0x6de196*/
        goto LABEL_7; /*0x6de196*/
    }
    return 0; /*0x6de18c*/
  }
LABEL_7:
  v6 = (char *)*(this + 1); /*0x6de198*/
  if ( v6 ) /*0x6de19d*/
  {
    if ( a2[1] ) /*0x6de1a8*/
      return j_CRT_strcmp(v6, (char *)a2[1]) == 0; /*0x6de1c7*/
  }
  else if ( !a2[1] ) /*0x6de19f*/
  {
    return j_CRT_strcmp(v6, (char *)a2[1]) == 0; /*0x6de1a2*/
  }
  return 0; /*0x6de1bb*/
}
