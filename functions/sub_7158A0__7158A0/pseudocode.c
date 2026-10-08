// Formats NiTimeController animation time source: 0 APP_TIME, 1 APP_INIT.
char *__cdecl NiTimeController_FormatAnimType(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi

  v2 = strlen(ArgList) + 0xC; /*0x7158bb*/
  v3 = (char *)FormHeapAlloc(v2); /*0x7158c4*/
  if ( a2 ) /*0x7158d0*/
  {
    if ( a2 == 1 ) /*0x7158d5*/
    {
      sub_6C5D40(v3, v3, __PAIR64__("%s = APP_INIT", v2), ArgList); /*0x7158df*/
      return v3; /*0x7158ec*/
    }
  }
  else
  {
    sub_6C5D40(v3, v3, __PAIR64__("%s = APP_TIME", v2), ArgList); /*0x7158f5*/
  }
  return v3; /*0x7158e9*/
}
