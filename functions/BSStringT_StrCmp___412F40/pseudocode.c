int __thiscall BSStringT_StrCmp__(const char **this, char *Str2, char a3)
{
  const char *v3; // eax

  if ( !Str2 ) /*0x412f48*/
    return 2 * (Str2 == 0) - 1; /*0x412f48*/
  v3 = *this; /*0x412f4a*/
  if ( !*this ) /*0x412f4a*/
    return 2 * (Str2 == 0) - 1; /*0x412f94*/
  if ( a3 ) /*0x412f55*/
    return CRT_StricmpLocaleDispatch(v3, Str2); /*0x412f59*/
  return strcmp(v3, Str2); /*0x412f61*/
}
