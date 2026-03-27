char *__stdcall sub_96D930(char *ArgList, int a2)
{
  va_list v2; // edi
  char *v3; // esi
  char *result; // eax

  v2 = (va_list)(strlen(ArgList) + 0x11);
  v3 = (char *)FormHeapAlloc((unsigned int)v2);
  switch ( a2 )
  {
    case 0:
      sub_6C5D40(v2, v3, __PAIR64__("%s = USE_OBB", (unsigned int)v2), ArgList);
      result = v3;
      break;
    case 1:
      sub_6C5D40(v2, v3, __PAIR64__("%s = USE_TRI", (unsigned int)v2), ArgList);
      result = v3;
      break;
    case 2:
      sub_6C5D40(v2, v3, __PAIR64__("%s = USE_ABV", (unsigned int)v2), ArgList);
      result = v3;
      break;
    case 3:
      sub_6C5D40(v2, v3, __PAIR64__("%s = NOTEST", (unsigned int)v2), ArgList);
      result = v3;
      break;
    case 4:
      sub_6C5D40(v2, v3, __PAIR64__("%s = USE_NIBOUND", (unsigned int)v2), ArgList);
      result = v3;
      break;
    default:
      JUMPOUT(0x96D9E1);
  }
  return result;
}
