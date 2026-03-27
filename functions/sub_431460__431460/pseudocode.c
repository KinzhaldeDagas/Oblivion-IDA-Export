_DWORD *__cdecl sub_431460(char *lpFileName, char *Str, int a3, _DWORD *a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  HANDLE FirstFileA; // eax
  unsigned int v7; // esi
  char *v8; // edi
  char *v9; // eax
  unsigned int v10; // ecx
  const char *v11; // edi
  unsigned int v12; // esi
  void *v13; // ebx
  size_t v15; // [esp-Ch] [ebp-160h]
  _DWORD *v16; // [esp+Ch] [ebp-148h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+10h] [ebp-144h] BYREF

  v4 = a4;
  v16 = a4;
  if ( !a4 )
  {
    v5 = (_DWORD *)FormHeapAlloc(8u);
    if ( v5 )
    {
      *v5 = 0;
      v5[1] = 0;
    }
    else
    {
      v5 = 0;
    }
    v16 = v5;
    v4 = v5;
  }
  if ( !bInvalidateOlderFiles_Archive
    || (FirstFileA = FindFirstFileA(lpFileName, &FindFileData), FirstFileA == (HANDLE)0xFFFFFFFF) )
  {
    if ( !ArchiveManager_IsFileInArchives_(lpFileName, a3) )
      goto LABEL_14;
  }
  else
  {
    FindClose(FirstFileA);
  }
  v7 = strlen(Str);
  v8 = strrchr(Str, 0x5C);
  v9 = strrchr(lpFileName, 0x5C);
  if ( v8 )
  {
    if ( v9 )
    {
      v10 = strlen(v8 + 1);
      v11 = v9 + 1;
      v12 = v7 - v10;
      LODWORD(v15) = v12;
      v13 = (void *)FormHeapAlloc(strlen(v9 + 1) + v12 + 1);
      memcpy(v13, Str, v15);
      *((_BYTE *)v13 + v12) = 0;
      strcat((char *)v13, v11);
      BSSimpleList_PushFront(v16, (int)v13);
    }
  }
  v4 = v16;
LABEL_14:
  if ( v4[1] || *v4 )
    return v4;
  FormHeapFree((unsigned int)v4);
  return 0;
}
