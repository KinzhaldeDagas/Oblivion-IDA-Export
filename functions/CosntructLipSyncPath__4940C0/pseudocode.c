char __cdecl CosntructLipSyncPath(BSStringT *a1)
{
  char *m_data; // eax
  int v2; // edx
  char v3; // cl
  char *v4; // eax
  char Str[260]; // [esp+4h] [ebp-108h] BYREF

  m_data = a1->m_data; /*0x4940dc*/
  v2 = Str - a1->m_data; /*0x4940e2*/
  do /*0x4940ee*/
  {
    v3 = *m_data; /*0x4940e4*/
    m_data[v2] = *m_data; /*0x4940e6*/
    ++m_data; /*0x4940e9*/
  }
  while ( v3 ); /*0x4940ee*/
  v4 = strrchr(Str, 0x2E); /*0x4940f7*/
  if ( !v4 ) /*0x494101*/
    return 0; /*0x494103*/
  *v4 = 0; /*0x494126*/
  BSStringT_Static_Format(a1, "%s.lip", Str); /*0x494129*/
  return 1; /*0x494105*/
}
