void __cdecl INISettingCollection_GetSettingSectionName(int a1, char *a2)
{
  const char *v2; // esi
  const char *v3; // eax
  char *v4; // eax

  v2 = "MAIN";
  if ( a2 )
  {
    v3 = *(const char **)(a1 + 4);
    if ( v3 )
    {
      v4 = strchr(v3, 0x3A);
      if ( v4 )
        v2 = v4 + 1;
    }
    strcpy(a2, v2);
  }
}
