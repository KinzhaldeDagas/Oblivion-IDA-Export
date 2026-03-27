char *__cdecl sub_718C30(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x16;
  v3 = (char *)FormHeapAlloc(v2);
  switch ( a2 )
  {
    case 0:
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_NEVER", v2), ArgList);
      result = v3;
      break;
    case 1:
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_LESS", v2), ArgList);
      result = v3;
      break;
    case 2:
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_EQUAL", v2), ArgList);
      result = v3;
      break;
    case 3:
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_LESSEQUAL", v2), ArgList);
      result = v3;
      break;
    case 4:
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_GREATER", v2), ArgList);
      result = v3;
      break;
    case 5:
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_NOTEQUAL", v2), ArgList);
      result = v3;
      break;
    case 6:
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_GREATEREQUAL", v2), ArgList);
      result = v3;
      break;
    case 7:
      sub_6C5D40(v3, v3, __PAIR64__("%s = TEST_ALWAYS", v2), ArgList);
      result = def_718C66();
      break;
    default:
      JUMPOUT(0x718D17);
  }
  return result;
}
