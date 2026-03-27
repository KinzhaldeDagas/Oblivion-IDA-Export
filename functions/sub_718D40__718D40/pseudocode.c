char *__cdecl sub_718D40(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x16;
  v3 = (char *)FormHeapAlloc(v2);
  switch ( a2 )
  {
    case 0:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_KEEP", v2), ArgList);
      result = v3;
      break;
    case 1:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_ZERO", v2), ArgList);
      result = v3;
      break;
    case 2:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_REPLACE", v2), ArgList);
      result = v3;
      break;
    case 3:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_INCREMENT", v2), ArgList);
      result = v3;
      break;
    case 4:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_DECREMENT", v2), ArgList);
      result = v3;
      break;
    case 5:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_INVERT", v2), ArgList);
      result = def_718D76();
      break;
    default:
      JUMPOUT(0x718DFB);
  }
  return result;
}
