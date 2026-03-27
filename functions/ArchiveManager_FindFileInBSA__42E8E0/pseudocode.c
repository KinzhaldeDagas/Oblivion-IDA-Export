ArchiveFile *__cdecl ArchiveManager_FindFileInBSA(char *Str1, int a2, int a3)
{
  char *v3; // edi
  bool v4; // zf
  int v5; // ebx
  int v6; // esi
  int *v8; // ebx
  int v9; // esi
  size_t v10; // [esp-4h] [ebp-2Ch]
  size_t v11; // [esp-4h] [ebp-2Ch]
  int v12; // [esp+Ch] [ebp-1Ch] BYREF
  int v13; // [esp+10h] [ebp-18h] BYREF
  int v14; // [esp+14h] [ebp-14h]
  int v15[2]; // [esp+18h] [ebp-10h] BYREF
  int v16[2]; // [esp+20h] [ebp-8h] BYREF

  v3 = Str1;
  v4 = *Str1 == 0x5C;
  v12 = 0;
  v13 = 0;
  if ( v4 )
    v3 = Str1 + 1;
  LODWORD(v10) = 5;
  if ( !strncmp(v3, "Data\\", v10) || (LODWORD(v11) = 5, !strncmp(v3, "data\\", v11)) )
    v3 += 5;
  if ( a3 == 0xFFFF )
    LOWORD(a3) = ArchiveManager_GetFileTypemask(&v3[strlen(v3) - 3]);
  HashFilePAth(v3, (int)v15, (int)v16);
  v5 = ArchiveProvidedLastFile;
  v14 = ArchiveProvidedLastFile;
  if ( ArchiveProvidedLastFile )
  {
    if ( ((unsigned __int16)a3 & *(_WORD *)(ArchiveProvidedLastFile + 0x174)) != 0 )
    {
      if ( Archive_ContainsFolder(ArchiveProvidedLastFile, (unsigned int *)v15, &v12, v3) )
      {
        v6 = v12;
        if ( Archive_FolderContainFile(v5, v12, (unsigned int *)v16, &v13, v3, 0) )
          return Archive_GetFileByIndices(v5, v6, v13, a2, (ArchiveFile *)v3);
      }
    }
  }
  v8 = (int *)ArchiveList;
  if ( !ArchiveList )
    return 0;
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 )
    {
      if ( v9 != v14
        && ((unsigned __int16)a3 & *(_WORD *)(v9 + 0x174)) != 0
        && Archive_ContainsFolder(v9, (unsigned int *)v15, &v12, v3)
        && Archive_FolderContainFile(v9, v12, (unsigned int *)v16, &v13, v3, 0) )
      {
        break;
      }
    }
    v8 = (int *)v8[1];
    if ( !v8 )
      return 0;
  }
  ArchiveProvidedLastFile = v9;
  return Archive_GetFileByIndices(v9, v12, v13, a2, (ArchiveFile *)v3);
}
