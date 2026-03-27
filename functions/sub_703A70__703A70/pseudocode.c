char *__cdecl sub_703A70(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x14;
  v3 = (char *)FormHeapAlloc(v2);
  switch ( a2 )
  {
    case 0:
      sub_6C5D40(v3, v3, __PAIR64__("%s = CLAMP_S_CLAMP_T", v2), ArgList);
      result = v3;
      break;
    case 1:
      sub_6C5D40(v3, v3, __PAIR64__("%s = CLAMP_S_WRAP_T", v2), ArgList);
      result = v3;
      break;
    case 2:
      sub_6C5D40(v3, v3, __PAIR64__("%s = WRAP_S_CLAMP_T", v2), ArgList);
      result = v3;
      break;
    case 3:
      sub_6C5D40(v3, v3, __PAIR64__("%s = WRAP_S_WRAP_T", v2), ArgList);
      result = def_703AA2();
      break;
    default:
      JUMPOUT(0x703AFB);
  }
  return result;
}
