char *__cdecl strrchr(const char *Str, int Ch)
{
  unsigned int v2; // ecx
  const char *v3; // edi
  bool v4; // zf
  char *result; // eax

  v2 = strlen(Str) + 1; /*0x983fe1*/
  v3 = &Str[v2 - 1]; /*0x983fe3*/
  do /*0x983fea*/
  {
    if ( !v2 ) /*0x983fea*/
      break; /*0x983fea*/
    v4 = *v3-- == (unsigned __int8)Ch; /*0x983fea*/
    --v2; /*0x983fea*/
  }
  while ( !v4 ); /*0x983fea*/
  if ( v3[1] == (_BYTE)Ch ) /*0x983ff1*/
    return (char *)strrchr_::returndi(); /*0x983ff1*/
  strrchr_::toend(); /*0x983ff5*/
  return result;
}
