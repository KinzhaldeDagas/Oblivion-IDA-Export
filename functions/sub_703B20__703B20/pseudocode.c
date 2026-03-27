char *__cdecl sub_703B20(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x1E;
  v3 = (char *)FormHeapAlloc(v2);
  switch ( a2 )
  {
    case 0:
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_NEAREST", v2), ArgList);
      result = v3;
      break;
    case 1:
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_BILERP", v2), ArgList);
      result = v3;
      break;
    case 2:
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_TRILERP", v2), ArgList);
      result = v3;
      break;
    case 3:
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_NEAREST_MIPNEAREST", v2), ArgList);
      result = v3;
      break;
    case 4:
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_NEAREST_MIPLERP", v2), ArgList);
      result = v3;
      break;
    case 5:
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_BILERP_MIPNEAREST", v2), ArgList);
      result = def_703B56();
      break;
    default:
      JUMPOUT(0x703BDB);
  }
  return result;
}
