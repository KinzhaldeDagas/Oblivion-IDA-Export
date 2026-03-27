char **__cdecl sub_431970(char *Str, char *a2, int a3, char **a4)
{
  char *v4; // edi
  char **v6; // ebp
  char **v7; // eax
  unsigned int v8; // edi
  char *v9; // eax
  void *v10; // esi
  char *v11; // eax
  CHAR *cFileName; // ecx
  int v13; // edx
  CHAR v14; // al
  size_t v15; // [esp-Ch] [ebp-164h]
  HANDLE hFindFile; // [esp+Ch] [ebp-14Ch]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+14h] [ebp-144h] BYREF

  v4 = Str;
  if ( !Str || !a2 )
    return 0;
  if ( !strstr(Str, "*") && !strstr(Str, "?") )
    return (char **)sub_431460(Str, a2, a3, a4);
  v6 = a4;
  if ( !a4 )
  {
    v7 = (char **)FormHeapAlloc(8u);
    if ( v7 )
    {
      *v7 = 0;
      v7[1] = 0;
    }
    else
    {
      v7 = 0;
    }
    v6 = v7;
  }
  if ( bInvalidateOlderFiles_Archive )
  {
    hFindFile = FindFirstFileA(Str, &FindFileData);
    if ( hFindFile != (HANDLE)0xFFFFFFFF )
    {
      v8 = strlen(a2);
      v9 = strrchr(a2, 0x5C);
      if ( v9 )
        v8 -= strlen(v9 + 1);
      do
      {
        LODWORD(v15) = v8;
        v10 = (void *)FormHeapAlloc(v8 + strlen(FindFileData.cFileName) + 1);
        memcpy(v10, a2, v15);
        *((_BYTE *)v10 + v8) = 0;
        v11 = strrchr((const char *)v10, 0x5C);
        if ( v11 )
        {
          cFileName = FindFileData.cFileName;
          v13 = v11 - FindFileData.cFileName + 1;
          do
          {
            v14 = *cFileName;
            cFileName[v13] = *cFileName;
            ++cFileName;
          }
          while ( v14 );
          BSSimpleList_PushFront(v6, (int)v10);
        }
      }
      while ( FindNextFileA(hFindFile, &FindFileData) );
      FindClose(hFindFile);
      v4 = Str;
    }
  }
  sub_42EC70(v6, v4, a2, a3);
  if ( !v6[1] && !*v6 )
  {
    FormHeapFree((unsigned int)v6);
    return 0;
  }
  return v6;
}
