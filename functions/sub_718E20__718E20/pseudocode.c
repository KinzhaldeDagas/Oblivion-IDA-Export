char *__cdecl sub_718E20(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x16;
  v3 = (char *)FormHeapAlloc(v2);
  switch ( a2 )
  {
    case 0:
      sub_6C5D40(v3, v3, __PAIR64__("%s = DRAW_CCW_OR_BOTH", v2), ArgList);
      result = v3;
      break;
    case 1:
      sub_6C5D40(v3, v3, __PAIR64__("%s = DRAW_CCW", v2), ArgList);
      result = v3;
      break;
    case 2:
      sub_6C5D40(v3, v3, __PAIR64__("%s = DRAW_CW", v2), ArgList);
      result = v3;
      break;
    case 3:
      sub_6C5D40(v3, v3, __PAIR64__("%s = DRAW_BOTH", v2), ArgList);
      result = def_718E52();
      break;
    default:
      JUMPOUT(0x718EAB);
  }
  return result;
}
