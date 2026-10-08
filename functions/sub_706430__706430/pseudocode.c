char *__cdecl sub_706430(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi

  v2 = strlen(ArgList) + 0x1A; /*0x70644b*/
  v3 = (char *)FormHeapAlloc(v2); /*0x706454*/
  if ( a2 ) /*0x706460*/
  {
    if ( a2 == 1 ) /*0x706465*/
    {
      sub_6C5D40(v3, v3, __PAIR64__("%s = LIGHTING_E_A_D", v2), ArgList); /*0x70646f*/
      return v3; /*0x70647c*/
    }
  }
  else
  {
    sub_6C5D40(v3, v3, __PAIR64__("%s = LIGHTING_E", v2), ArgList); /*0x706485*/
  }
  return v3; /*0x706479*/
}
