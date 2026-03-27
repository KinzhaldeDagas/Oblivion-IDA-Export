char *__stdcall sub_96DA10(char *ArgList, int a2)
{
  va_list v2; // edi
  char *v3; // esi
  char *result; // eax

  v2 = (va_list)(strlen(ArgList) + 0x20);
  v3 = (char *)FormHeapAlloc((unsigned int)v2);
  switch ( a2 )
  {
    case 0:
      sub_6C5D40(v2, v3, __PAIR64__("%s = PROPAGATE_ON_SUCCESS", (unsigned int)v2), ArgList);
      result = v3;
      break;
    case 1:
      sub_6C5D40(v2, v3, __PAIR64__("%s = PROPAGATE_ON_FAILURE", (unsigned int)v2), ArgList);
      result = v3;
      break;
    case 2:
      sub_6C5D40(v2, v3, __PAIR64__("%s = PROPAGATE_ALWAYS", (unsigned int)v2), ArgList);
      result = v3;
      break;
    case 3:
      sub_6C5D40(v2, v3, __PAIR64__("%s = PROPAGATE_NEVER", (unsigned int)v2), ArgList);
      result = v3;
      break;
    default:
      JUMPOUT(0x96DAA9);
  }
  return result;
}
