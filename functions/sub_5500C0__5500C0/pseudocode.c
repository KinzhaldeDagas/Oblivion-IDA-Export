char *__cdecl sub_5500C0(BSStringT *a1, char *arg4)
{
  char *v2; // eax
  char v4; // cl
  char *v5; // eax
  char Str[260]; // [esp+4h] [ebp-20Ch] BYREF
  char a2[260]; // [esp+108h] [ebp-108h] BYREF

  v2 = arg4; /*0x5500d4*/
  if ( !arg4 ) /*0x5500e5*/
    return 0; /*0x5500e5*/
  do /*0x55010f*/
  {
    v4 = *v2; /*0x550105*/
    v2[Str - arg4] = *v2; /*0x550107*/
    ++v2; /*0x55010a*/
  }
  while ( v4 ); /*0x55010f*/
  v5 = strrchr(Str, 0x2E); /*0x550118*/
  if ( !v5 ) /*0x550122*/
    return 0; /*0x5500e7*/
  *v5 = 0; /*0x550136*/
  _sprintf(a2, "%s.egt", Str); /*0x550139*/
  BSStringT_Set(a1, a2, 0); /*0x55014d*/
  return a1->m_data; /*0x5500e9*/
}
