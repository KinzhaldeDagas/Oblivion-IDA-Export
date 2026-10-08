char *__stdcall sub_6FE340(const char *a1, int a2)
{
  char *v2; // esi

  v2 = (char *)FormHeapAlloc(strlen(a1) + 0x10); /*0x6fe364*/
  if ( a2 ) /*0x6fe370*/
  {
    if ( a2 == 1 ) /*0x6fe375*/
    {
      _sprintf(v2, "%s = AT_SPECIFICOBJS", a1); /*0x6fe399*/
      return v2; /*0x6fe3a5*/
    }
    if ( a2 == 2 ) /*0x6fe37a*/
    {
      _sprintf(v2, "%s = AT_NODES", a1); /*0x6fe383*/
      return v2; /*0x6fe38f*/
    }
  }
  else
  {
    _sprintf(v2, "%s = AT_VERTICES", a1); /*0x6fe3af*/
  }
  return v2; /*0x6fe38b*/
}
