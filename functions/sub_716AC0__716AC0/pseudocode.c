const char *__thiscall sub_716AC0(char **this, unsigned int *a2, _DWORD **a3)
{
  const char *result; // eax
  unsigned int v5; // kr00_4
  char *v6; // eax

  sub_7214A0(this, a2, a3);
  result = *(this + 3);
  if ( result )
  {
    v5 = strlen(result);
    v6 = (char *)FormHeapAlloc(v5 + 1);
    a2[3] = (unsigned int)v6;
    return (const char *)strcpy_s(v6, v5 + 1, *(this + 3));
  }
  else
  {
    a2[3] = 0;
  }
  return result;
}
