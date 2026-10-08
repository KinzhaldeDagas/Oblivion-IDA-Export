char *__stdcall sub_96DA10(char *ArgList, int a2)
{
  va_list v2; // edi
  char *v3; // esi
  char *result; // eax

  v2 = (va_list)(strlen(ArgList) + 0x20); /*0x96da2b*/
  v3 = (char *)FormHeapAlloc((unsigned int)v2); /*0x96da34*/
  switch ( a2 ) /*0x96da42*/
  {
    case 0: /*0x96da42*/
      sub_6C5D40(v2, v3, __PAIR64__("%s = PROPAGATE_ON_SUCCESS", (unsigned int)v2), ArgList); /*0x96da51*/
      result = v3; /*0x96da5a*/
      break; /*0x96da5e*/
    case 1: /*0x96da42*/
      sub_6C5D40(v2, v3, __PAIR64__("%s = PROPAGATE_ON_FAILURE", (unsigned int)v2), ArgList); /*0x96da69*/
      result = v3; /*0x96da72*/
      break; /*0x96da76*/
    case 2: /*0x96da42*/
      sub_6C5D40(v2, v3, __PAIR64__("%s = PROPAGATE_ALWAYS", (unsigned int)v2), ArgList); /*0x96da81*/
      result = v3; /*0x96da8a*/
      break; /*0x96da8e*/
    case 3: /*0x96da42*/
      sub_6C5D40(v2, v3, __PAIR64__("%s = PROPAGATE_NEVER", (unsigned int)v2), ArgList); /*0x96da99*/
      result = v3; /*0x96daa2*/
      break; /*0x96daa6*/
    default:
      JUMPOUT(0x96DAA9); /*0x96daa9*/
  }
  return result; /*0x96da59*/
}
