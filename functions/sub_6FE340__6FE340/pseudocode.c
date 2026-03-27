char *__stdcall sub_6FE340(const char *a1, int a2)
{
  char *v2; // esi

  v2 = (char *)FormHeapAlloc(strlen(a1) + 0x10);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      _sprintf(v2, "%s = AT_SPECIFICOBJS", a1);
      return v2;
    }
    if ( a2 == 2 )
    {
      _sprintf(v2, "%s = AT_NODES", a1);
      return v2;
    }
  }
  else
  {
    _sprintf(v2, "%s = AT_VERTICES", a1);
  }
  return v2;
}
