char *__cdecl sub_718400(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x16; /*0x71841b*/
  v3 = (char *)FormHeapAlloc(v2); /*0x718424*/
  switch ( a2 ) /*0x718436*/
  {
    case 0: /*0x718436*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_ALWAYS", v2), ArgList); /*0x718445*/
      result = v3; /*0x71844d*/
      break; /*0x718452*/
    case 1: /*0x718436*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_LESS", v2), ArgList); /*0x71845b*/
      result = v3; /*0x718463*/
      break; /*0x718468*/
    case 2: /*0x718436*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_EQUAL", v2), ArgList); /*0x718471*/
      result = v3; /*0x718479*/
      break; /*0x71847e*/
    case 3: /*0x718436*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_LESSEQUAL", v2), ArgList); /*0x718487*/
      result = v3; /*0x71848f*/
      break; /*0x718494*/
    case 4: /*0x718436*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_GREATER", v2), ArgList); /*0x71849d*/
      result = v3; /*0x7184a5*/
      break; /*0x7184aa*/
    case 5: /*0x718436*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_NOTEQUAL", v2), ArgList); /*0x7184b3*/
      result = v3; /*0x7184bb*/
      break; /*0x7184c0*/
    case 6: /*0x718436*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_GREATEREQUAL", v2), ArgList); /*0x7184c9*/
      result = v3; /*0x7184d1*/
      break; /*0x7184d6*/
    case 7: /*0x718436*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_NEVER", v2), ArgList); /*0x7184df*/
      result = (char *)def_718436((int)v3); /*0x7184e5*/
      break; /*0x7184e5*/
    default:
      JUMPOUT(0x7184E7); /*0x7184e7*/
  }
  return result; /*0x71844f*/
}
