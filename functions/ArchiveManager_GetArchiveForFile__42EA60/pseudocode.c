int __cdecl ArchiveManager_GetArchiveForFile(char *Str1, int a2)
{
  char *v2; // edi
  int v3; // esi
  int *v4; // ebx
  size_t v6; // [esp-4h] [ebp-2Ch]
  size_t v7; // [esp-4h] [ebp-2Ch]
  unsigned int v8; // [esp+Ch] [ebp-1Ch] BYREF
  int v9; // [esp+10h] [ebp-18h]
  signed int v10; // [esp+14h] [ebp-14h] BYREF
  int v11[2]; // [esp+18h] [ebp-10h] BYREF
  int v12[2]; // [esp+20h] [ebp-8h] BYREF

  if ( !ArchiveList )
    return 0;
  v2 = Str1;
  if ( *Str1 == 0x5C )
    v2 = Str1 + 1;
  LODWORD(v6) = 5;
  if ( !strncmp(v2, "Data\\", v6) || (LODWORD(v7) = 5, !strncmp(v2, "data\\", v7)) )
    v2 += 5;
  if ( a2 == 0xFFFF )
    LOWORD(a2) = ArchiveManager_GetFileTypemask(&v2[strlen(v2) - 3]);
  HashFilePAth(v2, (int)v11, (int)v12);
  v3 = ArchiveProvidedLastFile;
  v9 = ArchiveProvidedLastFile;
  if ( !ArchiveProvidedLastFile
    || ((unsigned __int16)a2 & *(_WORD *)(ArchiveProvidedLastFile + 0x174)) == 0
    || !Archive_ContainsFile(
          (void *)ArchiveProvidedLastFile,
          (unsigned int *)v11,
          (unsigned int *)v12,
          (signed int *)&v8,
          &v10,
          v2) )
  {
    v4 = (int *)ArchiveList;
    if ( ArchiveList )
    {
      while ( 1 )
      {
        v3 = *v4;
        if ( *v4 )
        {
          if ( v3 != v9
            && ((unsigned __int16)a2 & *(_WORD *)(v3 + 0x174)) != 0
            && Archive_ContainsFolder(v3, (unsigned int *)v11, (signed int *)&v8, v2)
            && Archive_FolderContainFile(v3, v8, (unsigned int *)v12, &v10, v2, 0) )
          {
            break;
          }
        }
        v4 = (int *)v4[1];
        if ( !v4 )
          return 0;
      }
      ArchiveProvidedLastFile = v3;
      return v3;
    }
    return 0;
  }
  return v3;
}
