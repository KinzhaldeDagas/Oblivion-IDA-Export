const char *__thiscall sub_6C6270(const char **this, const char *a2)
{
  const char *v2; // edi
  const char *result; // eax
  unsigned int v5; // kr00_4
  const char *v6; // edx
  const char *v7; // ecx
  int v8; // edx
  char v9; // bl

  v2 = a2;
  if ( sub_6C5E20(this, a2, &a2) )
    return a2;
  v5 = strlen(v2);
  if ( &(*(this + 4))[v5 + 1] > *(this + 3) )
    sub_6C5EA0((unsigned int *)this);
  result = *(this + 4);
  v6 = &(*(this + 2))[(_DWORD)result];
  *v6 = 0;
  v7 = v2;
  v8 = v6 - v2;
  do
  {
    v9 = *v7;
    v7[v8] = *v7;
    ++v7;
  }
  while ( v9 );
  *(this + 4) += v5 + 1;
  return result;
}
