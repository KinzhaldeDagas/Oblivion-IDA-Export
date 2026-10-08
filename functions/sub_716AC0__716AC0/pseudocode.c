const char *__thiscall sub_716AC0(char **this, unsigned int *a2, _DWORD **a3)
{
  const char *result; // eax
  unsigned int v5; // kr00_4
  char *v6; // eax

  sub_7214A0(this, a2, a3); /*0x716ace*/
  result = *(this + 3); /*0x716ad3*/
  if ( result ) /*0x716ad8*/
  {
    v5 = strlen(result); /*0x716ada*/
    v6 = (char *)FormHeapAlloc(v5 + 1); /*0x716af0*/
    a2[3] = (unsigned int)v6; /*0x716af5*/
    return (const char *)strcpy_s(v6, v5 + 1, *(this + 3)); /*0x716afe*/
  }
  else
  {
    a2[3] = 0; /*0x716b0d*/
  }
  return result; /*0x716b07*/
}
