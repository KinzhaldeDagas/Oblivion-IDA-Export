char *__cdecl sub_70FA00(char *ArgList, char a2)
{
  unsigned int v2; // kr00_4
  char *v3; // edi

  v2 = strlen(ArgList); /*0x70fa09*/
  v3 = (char *)FormHeapAlloc(v2 + 7); /*0x70fa24*/
  sub_6C5D40(v3, v3, __PAIR64__("%s = %u", v2 + 7), ArgList, (unsigned __int8)a2); /*0x70fa34*/
  return v3; /*0x70fa3e*/
}
