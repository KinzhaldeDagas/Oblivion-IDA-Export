char *__cdecl _strdup(const char *Src)
{
  UInt32 v2; // esi
  char *v3; // eax
  char *v4; // edi
  size_t v5; // [esp-10h] [ebp-18h]

  if ( !Src )
    return 0;
  v2 = strlen(Src) + 1;
  LODWORD(v5) = v2;
  v3 = (char *)malloc(v5);
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( strcpy_s(v3, v2, Src) )
    _invoke_watson(0, 0, 0, 0, 0);
  return v4;
}
