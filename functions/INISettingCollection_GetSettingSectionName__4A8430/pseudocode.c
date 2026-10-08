void __cdecl INISettingCollection_GetSettingSectionName(int a1, char *a2)
{
  const char *v2; // esi
  const char *v3; // eax
  char *v4; // eax

  v2 = "MAIN"; /*0x4a8438*/
  if ( a2 ) /*0x4a843d*/
  {
    v3 = *(const char **)(a1 + 4); /*0x4a8443*/
    if ( v3 ) /*0x4a8448*/
    {
      v4 = strchr(v3, 0x3A); /*0x4a844d*/
      if ( v4 ) /*0x4a8457*/
        v2 = v4 + 1; /*0x4a8459*/
    }
    strcpy(a2, v2); /*0x4a845e*/
  }
}
