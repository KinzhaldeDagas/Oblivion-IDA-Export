char *__cdecl sub_703B20(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x1E; /*0x703b3b*/
  v3 = (char *)FormHeapAlloc(v2); /*0x703b44*/
  switch ( a2 ) /*0x703b56*/
  {
    case 0: /*0x703b56*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_NEAREST", v2), ArgList); /*0x703b65*/
      result = v3; /*0x703b6d*/
      break; /*0x703b72*/
    case 1: /*0x703b56*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_BILERP", v2), ArgList); /*0x703b7b*/
      result = v3; /*0x703b83*/
      break; /*0x703b88*/
    case 2: /*0x703b56*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_TRILERP", v2), ArgList); /*0x703b91*/
      result = v3; /*0x703b99*/
      break; /*0x703b9e*/
    case 3: /*0x703b56*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_NEAREST_MIPNEAREST", v2), ArgList); /*0x703ba7*/
      result = v3; /*0x703baf*/
      break; /*0x703bb4*/
    case 4: /*0x703b56*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_NEAREST_MIPLERP", v2), ArgList); /*0x703bbd*/
      result = v3; /*0x703bc5*/
      break; /*0x703bca*/
    case 5: /*0x703b56*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = FILTER_BILERP_MIPNEAREST", v2), ArgList); /*0x703bd3*/
      result = (char *)def_703B56((int)v3); /*0x703bd9*/
      break; /*0x703bd9*/
    default:
      JUMPOUT(0x703BDB); /*0x703bdb*/
  }
  return result; /*0x703b6f*/
}
