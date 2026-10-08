char *__cdecl sub_718C30(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x16; /*0x718c4b*/
  v3 = (char *)FormHeapAlloc(v2); /*0x718c54*/
  switch ( a2 ) /*0x718c66*/
  {
    case 0: /*0x718c66*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_NEVER", v2), ArgList); /*0x718c75*/
      result = v3; /*0x718c7d*/
      break; /*0x718c82*/
    case 1: /*0x718c66*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_LESS", v2), ArgList); /*0x718c8b*/
      result = v3; /*0x718c93*/
      break; /*0x718c98*/
    case 2: /*0x718c66*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_EQUAL", v2), ArgList); /*0x718ca1*/
      result = v3; /*0x718ca9*/
      break; /*0x718cae*/
    case 3: /*0x718c66*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_LESSEQUAL", v2), ArgList); /*0x718cb7*/
      result = v3; /*0x718cbf*/
      break; /*0x718cc4*/
    case 4: /*0x718c66*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_GREATER", v2), ArgList); /*0x718ccd*/
      result = v3; /*0x718cd5*/
      break; /*0x718cda*/
    case 5: /*0x718c66*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_NOTEQUAL", v2), ArgList); /*0x718ce3*/
      result = v3; /*0x718ceb*/
      break; /*0x718cf0*/
    case 6: /*0x718c66*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_GREATEREQUAL", v2), ArgList); /*0x718cf9*/
      result = v3; /*0x718d01*/
      break; /*0x718d06*/
    case 7: /*0x718c66*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_ALWAYS", v2), ArgList); /*0x718d0f*/
      result = (char *)def_718C66((int)v3); /*0x718d15*/
      break; /*0x718d15*/
    default:
      JUMPOUT(0x718D17); /*0x718d17*/
  }
  return result; /*0x718c7f*/
}
