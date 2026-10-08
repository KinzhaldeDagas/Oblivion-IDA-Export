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

  v3 = Str1; /*0x42e8ec*/
  v4 = *Str1 == 0x5C; /*0x42e8f1*/
  v12 = 0; /*0x42e8f4*/
  v13 = 0; /*0x42e8f8*/
  if ( v4 ) /*0x42e8fc*/
    v3 = Str1 + 1; /*0x42e8fe*/
  LODWORD(v10) = 5; /*0x42e901*/
  if ( !strncmp(v3, "Data\\", v10) || (LODWORD(v11) = 5, !strncmp(v3, "data\\", v11)) ) /*0x42e91d*/
    v3 += 5; /*0x42e929*/
  if ( a3 == 0xFFFF ) /*0x42e933*/
    LOWORD(a3) = ArchiveManager_GetFileTypemask(&v3[strlen(v3) - 3]); /*0x42e958*/
  HashFilePAth(v3, (int)v15, (int)v16); /*0x42e966*/
  v5 = MEMORY[0xB338E4]; /*0x42e96b*/
  v14 = MEMORY[0xB338E4]; /*0x42e976*/
  if ( MEMORY[0xB338E4] ) /*0x42e97a*/
  {
    if ( ((unsigned __int16)a3 & *(_WORD *)(MEMORY[0xB338E4] + 0x174)) != 0 ) /*0x42e987*/
    {
      if ( Archive_ContainsFolder(MEMORY[0xB338E4], (unsigned int *)v15, &v12, v3) ) /*0x42e996*/
      {
        v6 = v12; /*0x42e9a0*/
        if ( Archive_FolderContainFile(v5, v12, (unsigned int *)v16, &v13, v3, 0) ) /*0x42e9b2*/
          return Archive_GetFileByIndices(v5, v6, v13, a2, (ArchiveFile *)v3); /*0x42e9c8*/
      }
    }
  }
  v8 = (int *)MEMORY[0xB338E0]; /*0x42e9d4*/
  if ( !MEMORY[0xB338E0] ) /*0x42e9dc*/
    return 0; /*0x42ea33*/
  while ( 1 ) /*0x42e9e0*/
  {
    v9 = *v8; /*0x42e9e0*/
    if ( *v8 ) /*0x42e9e0*/
    {
      if ( v9 != v14 /*0x42ea23*/
        && ((unsigned __int16)a3 & *(_WORD *)(v9 + 0x174)) != 0
        && Archive_ContainsFolder(v9, (unsigned int *)v15, &v12, v3)
        && Archive_FolderContainFile(v9, v12, (unsigned int *)v16, &v13, v3, 0) )
      {
        break; /*0x42ea23*/
      }
    }
    v8 = (int *)v8[1]; /*0x42ea2c*/
    if ( !v8 ) /*0x42ea31*/
      return 0; /*0x42ea31*/
  }
  MEMORY[0xB338E4] = v9; /*0x42ea4d*/
  return Archive_GetFileByIndices(v9, v12, v13, a2, (ArchiveFile *)v3); /*0x42e9cd*/
}
