char *__cdecl _strdup(const char *Src)
{
  UInt32 v2; // esi
  char *v3; // eax
  char *v4; // edi
  errno_t v5; // eax
  int v6; // edx
  int v7; // ecx
  size_t v8; // [esp-10h] [ebp-18h]

  if ( !Src ) /*0x983c15*/
    return 0; /*0x983c17*/
  v2 = strlen(Src) + 1; /*0x983c25*/
  LODWORD(v8) = v2; /*0x983c26*/
  v3 = (char *)malloc(v8); /*0x983c27*/
  v4 = v3; /*0x983c2c*/
  if ( !v3 ) /*0x983c32*/
    return 0; /*0x983c54*/
  v5 = strcpy_s(v3, v2, Src); /*0x983c37*/
  if ( v5 ) /*0x983c41*/
    _invoke_watson(v5, v6, v7, (int)Src, (int)v4, v2); /*0x983c48*/
  return v4; /*0x983c58*/
}
