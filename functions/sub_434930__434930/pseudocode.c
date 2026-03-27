errno_t __thiscall sub_434930(unsigned int *this, const char *a2)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  FormHeapFree(*(this + 2));
  v3 = strlen(a2);
  v4 = (char *)FormHeapAlloc(v3 + 1);
  *(this + 2) = (unsigned int)v4;
  return strcpy_s(v4, v3 + 1, a2);
}
