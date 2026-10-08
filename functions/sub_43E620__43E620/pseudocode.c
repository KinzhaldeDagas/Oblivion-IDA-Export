int __stdcall sub_43E620(const char *a1)
{
  const char *v1; // edi
  int v2; // ebx
  char v3; // al
  _BYTE *i; // esi

  v1 = a1; /*0x43e623*/
  v2 = FormHeapAlloc(strlen(a1) + 1); /*0x43e644*/
  v3 = *a1; /*0x43e646*/
  for ( i = (_BYTE *)v2; *v1; ++i ) /*0x43e646*/
  {
    ++v1; /*0x43e65a*/
    *i = tolower(v3); /*0x43e65d*/
    v3 = *v1; /*0x43e65f*/
  }
  *i = 0; /*0x43e66c*/
  return v2; /*0x43e66b*/
}
