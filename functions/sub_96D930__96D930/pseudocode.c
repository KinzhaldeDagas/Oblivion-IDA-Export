char *__stdcall sub_96D930(char *ArgList, int a2)
{
  va_list v2; // edi
  char *v3; // esi
  char *result; // eax

  v2 = (va_list)(strlen(ArgList) + 0x11); /*0x96d94b*/
  v3 = (char *)FormHeapAlloc((unsigned int)v2); /*0x96d954*/
  switch ( a2 ) /*0x96d962*/
  {
    case 0: /*0x96d962*/
      sub_6C5D40(v2, v3, __PAIR64__("%s = USE_OBB", (unsigned int)v2), ArgList); /*0x96d971*/
      result = v3; /*0x96d97a*/
      break; /*0x96d97e*/
    case 1: /*0x96d962*/
      sub_6C5D40(v2, v3, __PAIR64__("%s = USE_TRI", (unsigned int)v2), ArgList); /*0x96d989*/
      result = v3; /*0x96d992*/
      break; /*0x96d996*/
    case 2: /*0x96d962*/
      sub_6C5D40(v2, v3, __PAIR64__("%s = USE_ABV", (unsigned int)v2), ArgList); /*0x96d9a1*/
      result = v3; /*0x96d9aa*/
      break; /*0x96d9ae*/
    case 3: /*0x96d962*/
      sub_6C5D40(v2, v3, __PAIR64__("%s = NOTEST", (unsigned int)v2), ArgList); /*0x96d9b9*/
      result = v3; /*0x96d9c2*/
      break; /*0x96d9c6*/
    case 4: /*0x96d962*/
      sub_6C5D40(v2, v3, __PAIR64__("%s = USE_NIBOUND", (unsigned int)v2), ArgList); /*0x96d9d1*/
      result = v3; /*0x96d9da*/
      break; /*0x96d9de*/
    default:
      JUMPOUT(0x96D9E1); /*0x96d9e1*/
  }
  return result; /*0x96d979*/
}
