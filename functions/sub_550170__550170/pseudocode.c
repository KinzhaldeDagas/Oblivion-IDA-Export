char *__cdecl sub_550170(BSStringT *a1, const char *arg4)
{
  char *v3; // eax
  char Str[260]; // [esp+8h] [ebp-20Ch] BYREF
  char a2[260]; // [esp+10Ch] [ebp-108h] BYREF

  if ( !arg4 ) /*0x550196*/
    return 0; /*0x550199*/
  strcpy(Str, arg4); /*0x5501b5*/
  v3 = strrchr(Str, 0x5F); /*0x5501d3*/
  if ( !v3 ) /*0x5501dd*/
    return (char *)arg4; /*0x5501e0*/
  *v3 = 0; /*0x55020a*/
  _sprintf(a2, "%s.nif", Str); /*0x55020d*/
  BSStringT_Set(a1, a2, 0); /*0x550221*/
  return a1->m_data; /*0x550198*/
}
