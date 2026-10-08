char *__cdecl sub_718E20(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x16; /*0x718e3b*/
  v3 = (char *)FormHeapAlloc(v2); /*0x718e44*/
  switch ( a2 ) /*0x718e52*/
  {
    case 0: /*0x718e52*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = DRAW_CCW_OR_BOTH", v2), ArgList); /*0x718e61*/
      result = v3; /*0x718e69*/
      break; /*0x718e6e*/
    case 1: /*0x718e52*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = DRAW_CCW", v2), ArgList); /*0x718e77*/
      result = v3; /*0x718e7f*/
      break; /*0x718e84*/
    case 2: /*0x718e52*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = DRAW_CW", v2), ArgList); /*0x718e8d*/
      result = v3; /*0x718e95*/
      break; /*0x718e9a*/
    case 3: /*0x718e52*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = DRAW_BOTH", v2), ArgList); /*0x718ea3*/
      result = (char *)def_718E52((int)v3); /*0x718ea9*/
      break; /*0x718ea9*/
    default:
      JUMPOUT(0x718EAB); /*0x718eab*/
  }
  return result; /*0x718e6b*/
}
