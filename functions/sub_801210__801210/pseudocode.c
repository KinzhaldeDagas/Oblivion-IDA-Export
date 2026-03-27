void __cdecl sub_801210(char *a1, char *a2, const char *a3)
{
  char *v3; // ecx
  char *v4; // esi
  char v5; // dl
  char *v6; // ecx

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        v3 = &CacheOrNullString;
        if ( !CacheOrNullString )
          v3 = FullPath;
        v4 = (char *)(a1 - v3);
        do
        {
          v5 = *v3;
          v3[(_DWORD)v4] = *v3;
          ++v3;
        }
        while ( v5 );
        if ( UseHDR )
        {
          v6 = &a1[strlen(a1)];
          *(_DWORD *)v6 = dword_A93478;
          v6[4] = byte_A9347C;
        }
        strcat(a1, a3);
      }
    }
  }
}
