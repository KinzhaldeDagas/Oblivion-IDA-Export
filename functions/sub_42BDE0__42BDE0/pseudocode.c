UInt32 __cdecl sub_42BDE0(const char *a1, UInt32 a2, UInt32 a3, UInt32 a4)
{
  if ( OBSE_g_FileFinder )
    return OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, a1, a2, a3, a4);
  else
    return 0;
}
