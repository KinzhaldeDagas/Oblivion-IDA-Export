errno_t __thiscall sub_434930(unsigned int *this, const char *a2)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  FormHeapFree(*(this + 2)); /*0x434939*/
  v3 = strlen(a2); /*0x434947*/
  v4 = (char *)FormHeapAlloc(v3 + 1); /*0x43495f*/
  *(this + 2) = (unsigned int)v4; /*0x434967*/
  return strcpy_s(v4, v3 + 1, a2); /*0x434972*/
}
