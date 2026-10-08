// Decoded animation/model-loader helper. Builds a BSSimpleList of file paths for an input path that may contain wildcards; merges loose-file FindFirstFile results when archive invalidation is enabled, then asks archive/file systems to append matches. Used by KF/model discovery, not a CustomAnim override registry.
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

  v4 = Str; /*0x431995*/
  if ( !Str || !a2 ) /*0x4319aa*/
    return 0; /*0x431b4c*/
  if ( !strstr(Str, "*") && !strstr(Str, "?") ) /*0x4319c8*/
    return (char **)sub_431460(Str, a2, a3, a4); /*0x4319df*/
  v6 = a4; /*0x431a02*/
  if ( !a4 ) /*0x431a04*/
  {
    v7 = (char **)FormHeapAlloc(8u); /*0x431a08*/
    if ( v7 ) /*0x431a12*/
    {
      *v7 = 0; /*0x431a14*/
      v7[1] = 0; /*0x431a16*/
    }
    else
    {
      v7 = 0; /*0x431a1b*/
    }
    v6 = v7; /*0x431a1d*/
  }
  if ( bInvalidateOlderFiles_Archive ) /*0x431a26*/
  {
    hFindFile = FindFirstFileA(Str, &FindFileData); /*0x431a3b*/
    if ( hFindFile != (HANDLE)0xFFFFFFFF ) /*0x431a3f*/
    {
      v8 = strlen(a2); /*0x431a47*/
      v9 = strrchr(a2, 0x5C); /*0x431a60*/
      if ( v9 ) /*0x431a6a*/
        v8 -= strlen(v9 + 1); /*0x431a7d*/
      do /*0x431ae2*/
      {
        LODWORD(v15) = v8; /*0x431a9c*/
        v10 = (void *)FormHeapAlloc(v8 + strlen(FindFileData.cFileName) + 1);// MEF v42 verified wildcard path allocation guard: reject wrapped total size when total<=directory prefix EDI; on overflow/OOM remove pending size and skip only current file to FindNextFile at 0x431AD8. /*0x431a9d*/
        memcpy(v10, a2, v15); /*0x431aa1*/
        *((_BYTE *)v10 + v8) = 0; /*0x431aa9*/
        v11 = strrchr((const char *)v10, 0x5C); /*0x431aad*/
        if ( v11 ) /*0x431ab7*/
        {
          cFileName = FindFileData.cFileName; /*0x431ab9*/
          v13 = v11 - FindFileData.cFileName + 1; /*0x431ac1*/
          do /*0x431ace*/
          {
            v14 = *cFileName; /*0x431ac4*/
            cFileName[v13] = *cFileName; /*0x431ac6*/
            ++cFileName; /*0x431ac9*/
          }
          while ( v14 ); /*0x431ace*/
          BSSimpleList_PushFront(v6, (int)v10); /*0x431ad3*/
        }
      }
      while ( FindNextFileA(hFindFile, &FindFileData) );// MEF v42 per-entry failure continuation: no path/list mutation occurred, so continue enumeration with the next WIN32_FIND_DATA entry. /*0x431ae2*/
      FindClose(hFindFile); /*0x431af1*/
      v4 = Str; /*0x431af7*/
    }
  }
  sub_42EC70(v6, v4, a2, a3); /*0x431b06*/
  if ( !v6[1] && !*v6 ) /*0x431b14*/
  {
    FormHeapFree((unsigned int)v6); /*0x431b1b*/
    return 0; /*0x431b23*/
  }
  return v6; /*0x4319e7*/
}
