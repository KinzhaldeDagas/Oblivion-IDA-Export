char *__cdecl sub_703A70(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x14; /*0x703a8b*/
  v3 = (char *)FormHeapAlloc(v2); /*0x703a94*/
  switch ( a2 ) /*0x703aa2*/
  {
    case 0: /*0x703aa2*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = CLAMP_S_CLAMP_T", v2), ArgList); /*0x703ab1*/
      result = v3; /*0x703ab9*/
      break; /*0x703abe*/
    case 1: /*0x703aa2*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = CLAMP_S_WRAP_T", v2), ArgList); /*0x703ac7*/
      result = v3; /*0x703acf*/
      break; /*0x703ad4*/
    case 2: /*0x703aa2*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = WRAP_S_CLAMP_T", v2), ArgList); /*0x703add*/
      result = v3; /*0x703ae5*/
      break; /*0x703aea*/
    case 3: /*0x703aa2*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = WRAP_S_WRAP_T", v2), ArgList); /*0x703af3*/
      result = (char *)def_703AA2((int)v3); /*0x703af9*/
      break; /*0x703af9*/
    default:
      JUMPOUT(0x703AFB); /*0x703afb*/
  }
  return result; /*0x703abb*/
}
