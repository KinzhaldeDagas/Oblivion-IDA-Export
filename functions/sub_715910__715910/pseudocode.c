// Formats NiTimeController cycle type: 0 LOOP, 1 REVERSE, 2 CLAMP.
char *__cdecl NiTimeController_FormatCycleType(char *ArgList, int a2)
{
  va_list v2; // edi
  char *v3; // esi

  v2 = (va_list)(strlen(ArgList) + 0xB); /*0x71592b*/
  v3 = (char *)FormHeapAlloc((unsigned int)v2); /*0x715934*/
  if ( a2 ) /*0x715940*/
  {
    if ( a2 == 1 ) /*0x715945*/
    {
      sub_6C5D40(v2, v3, __PAIR64__("%s = REVERSE", (unsigned int)v2), ArgList); /*0x71596a*/
      return v3; /*0x715977*/
    }
    if ( a2 == 2 ) /*0x71594a*/
    {
      sub_6C5D40(v2, v3, __PAIR64__("%s = CLAMP", (unsigned int)v2), ArgList); /*0x715954*/
      return v3; /*0x715961*/
    }
  }
  else
  {
    sub_6C5D40(v2, v3, __PAIR64__("%s = LOOP", (unsigned int)v2), ArgList); /*0x715980*/
  }
  return v3; /*0x71595c*/
}
