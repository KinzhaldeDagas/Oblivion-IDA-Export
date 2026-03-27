char *__cdecl sub_551A00(BSStringT *a1, signed int a2, unsigned __int8 a3, char *a4)
{
  char *v4; // eax
  char v5; // bl
  char v6; // cl
  char *v7; // eax
  int v9; // edi
  char Str[260]; // [esp+10h] [ebp-108h] BYREF

  v4 = a4;
  v5 = 0x4D;
  if ( !a4 )
    return 0;
  if ( a3 > 0x64u )
    return 0;
  if ( a2 >= 2 )
    return 0;
  do
  {
    v6 = *v4;
    v4[Str - a4] = *v4;
    ++v4;
  }
  while ( v6 );
  v7 = strrchr(Str, 0x2E);
  if ( !v7 )
    return 0;
  *v7 = 0;
  if ( a2 == 1 )
    v5 = 0x46;
  BSStringT_Static_Format(a1, "Textures\\%s%c%d.dds", Str, v5, a3);
  if ( !OBSE_g_FileFinder || !OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, a1->m_data, 0, 0, 0xFFFFFFFF) )
  {
    v9 = 0xA * (a3 / 0xA);
    while ( 1 )
    {
      BSStringT_Static_Format(a1, "Textures\\%s%c%d.dds", Str, v5, v9);
      if ( OBSE_g_FileFinder )
      {
        if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, a1->m_data, 0, 0, 0xFFFFFFFF) )
          break;
      }
      v9 -= 0xA;
      if ( v9 < 0 )
      {
        BSStringT_Set(a1, EmptyString, 0);
        return 0;
      }
    }
  }
  return a1->m_data;
}
