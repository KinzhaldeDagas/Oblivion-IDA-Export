const char *__thiscall sub_6C6270(const char **this, const char *a2)
{
  const char *v2; // edi
  const char *result; // eax
  unsigned int v5; // kr00_4
  const char *v6; // edx
  const char *v7; // ecx
  int v8; // edx
  char v9; // bl

  v2 = a2; /*0x6c6272*/
  if ( sub_6C5E20(this, a2, &a2) ) /*0x6c627e*/
    return a2; /*0x6c6287*/
  v5 = strlen(v2); /*0x6c6292*/
  if ( &(*(this + 4))[v5 + 1] > *(this + 3) ) /*0x6c62ad*/
    sub_6C5EA0((unsigned int *)this); /*0x6c62b1*/
  result = *(this + 4); /*0x6c62b6*/
  v6 = &(*(this + 2))[(_DWORD)result]; /*0x6c62bc*/
  *v6 = 0; /*0x6c62be*/
  v7 = v2; /*0x6c62c1*/
  v8 = v6 - v2; /*0x6c62c3*/
  do /*0x6c62cf*/
  {
    v9 = *v7; /*0x6c62c5*/
    v7[v8] = *v7; /*0x6c62c7*/
    ++v7; /*0x6c62ca*/
  }
  while ( v9 ); /*0x6c62cf*/
  *(this + 4) += v5 + 1; /*0x6c62d1*/
  return result; /*0x6c628b*/
}
