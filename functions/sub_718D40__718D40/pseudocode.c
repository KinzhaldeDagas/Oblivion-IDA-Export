char *__cdecl sub_718D40(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x16; /*0x718d5b*/
  v3 = (char *)FormHeapAlloc(v2); /*0x718d64*/
  switch ( a2 ) /*0x718d76*/
  {
    case 0: /*0x718d76*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_KEEP", v2), ArgList); /*0x718d85*/
      result = v3; /*0x718d8d*/
      break; /*0x718d92*/
    case 1: /*0x718d76*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_ZERO", v2), ArgList); /*0x718d9b*/
      result = v3; /*0x718da3*/
      break; /*0x718da8*/
    case 2: /*0x718d76*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_REPLACE", v2), ArgList); /*0x718db1*/
      result = v3; /*0x718db9*/
      break; /*0x718dbe*/
    case 3: /*0x718d76*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_INCREMENT", v2), ArgList); /*0x718dc7*/
      result = v3; /*0x718dcf*/
      break; /*0x718dd4*/
    case 4: /*0x718d76*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_DECREMENT", v2), ArgList); /*0x718ddd*/
      result = v3; /*0x718de5*/
      break; /*0x718dea*/
    case 5: /*0x718d76*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ACTION_INVERT", v2), ArgList); /*0x718df3*/
      result = (char *)def_718D76((int)v3); /*0x718df9*/
      break; /*0x718df9*/
    default:
      JUMPOUT(0x718DFB); /*0x718dfb*/
  }
  return result; /*0x718d8f*/
}
