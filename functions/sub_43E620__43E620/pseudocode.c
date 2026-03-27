int __stdcall sub_43E620(const char *a1)
{
  const char *v1; // edi
  int v2; // ebx
  char v3; // al
  _BYTE *i; // esi

  v1 = a1;
  v2 = FormHeapAlloc(strlen(a1) + 1);
  v3 = *a1;
  for ( i = (_BYTE *)v2; *v1; ++i )
  {
    ++v1;
    *i = tolower(v3);
    v3 = *v1;
  }
  *i = 0;
  return v2;
}
