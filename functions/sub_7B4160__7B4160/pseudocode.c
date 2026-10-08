// Builds a sibling texture variant path. Keeps the original extension, truncates the basename at its final underscore after the last separator, appends the requested suffix, and prefixes Data\\ for relative paths.
char *__cdecl BuildTextureVariantPath(char *outPath, const char *sourcePath, const char *suffix)
{
  char *v3; // edi
  char *v4; // esi
  char *result; // eax
  size_t v6; // [esp-4h] [ebp-128h]
  char v7[12]; // [esp+10h] [ebp-114h] BYREF
  char Str[260]; // [esp+1Ch] [ebp-108h] BYREF

  strcpy(Str, sourcePath); /*0x7b4174*/
  *outPath = 0; /*0x7b41a6*/
  v3 = strrchr(Str, 0x2E); /*0x7b41b4*/
  v4 = strrchr(Str, 0x5C); /*0x7b41c2*/
  result = strrchr(Str, 0x5F); /*0x7b41c4*/
  if ( v4 ) /*0x7b41ce*/
  {
    if ( result ) /*0x7b41d2*/
    {
      if ( result < v4 ) /*0x7b41d6*/
        result = 0; /*0x7b41d8*/
    }
  }
  if ( v3 ) /*0x7b41dc*/
  {
    strcpy(v7, v3); /*0x7b41e2*/
    if ( result ) /*0x7b41f4*/
      *result = 0; /*0x7b41f6*/
    *v3 = 0; /*0x7b41f8*/
    if ( Str[0] == 0x5C ) /*0x7b4200*/
      return (char *)_sprintf(outPath, "%s%s%s", Str, suffix, v7); /*0x7b4200*/
    if ( Str[1] == 0x3A ) /*0x7b4207*/
      return (char *)_sprintf(outPath, "%s%s%s", Str, suffix, v7); /*0x7b4207*/
    LODWORD(v6) = 4; /*0x7b4209*/
    if ( !_strnicmp(Str, "data", v6) ) /*0x7b4215*/
      return (char *)_sprintf(outPath, "%s%s%s", Str, suffix, v7); /*0x7b4244*/
    else
      return (char *)_sprintf(outPath, "Data\\%s%s%s", Str, suffix, v7); /*0x7b4231*/
  }
  return result; /*0x7b424c*/
}
