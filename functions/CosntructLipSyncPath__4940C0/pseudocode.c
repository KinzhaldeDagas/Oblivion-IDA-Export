char __cdecl CosntructLipSyncPath(BSStringT *a1)
{
  char *m_data; // eax
  int v2; // edx
  char v3; // cl
  char *v4; // eax
  char Str[260]; // [esp+4h] [ebp-108h] BYREF

  m_data = a1->m_data;
  v2 = Str - a1->m_data;
  do
  {
    v3 = *m_data;
    m_data[v2] = *m_data;
    ++m_data;
  }
  while ( v3 );
  v4 = strrchr(Str, 0x2E);
  if ( !v4 )
    return 0;
  *v4 = 0;
  BSStringT_Static_Format(a1, "%s.lip", Str);
  return 1;
}
