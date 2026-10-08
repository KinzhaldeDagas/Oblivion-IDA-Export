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

  if ( !MEMORY[0xB338E0] ) /*0x42ea73*/
    return 0; /*0x42ea73*/
  v2 = Str1; /*0x42ea79*/
  if ( *Str1 == 0x5C ) /*0x42ea7f*/
    v2 = Str1 + 1; /*0x42ea81*/
  LODWORD(v6) = 5; /*0x42ea84*/
  if ( !strncmp(v2, "Data\\", v6) || (LODWORD(v7) = 5, !strncmp(v2, "data\\", v7)) ) /*0x42eaa0*/
    v2 += 5; /*0x42eaac*/
  if ( a2 == 0xFFFF ) /*0x42eab6*/
    LOWORD(a2) = ArchiveManager_GetFileTypemask(&v2[strlen(v2) - 3]); /*0x42ead8*/
  HashFilePAth(v2, (int)v11, (int)v12); /*0x42eae6*/
  v3 = MEMORY[0xB338E4]; /*0x42eaeb*/
  v9 = MEMORY[0xB338E4]; /*0x42eaf6*/
  if ( !MEMORY[0xB338E4] /*0x42eb20*/
    || ((unsigned __int16)a2 & *(_WORD *)(MEMORY[0xB338E4] + 0x174)) == 0
    || !Archive_ContainsFile(
          (void *)MEMORY[0xB338E4],
          (unsigned int *)v11,
          (unsigned int *)v12,
          (signed int *)&v8,
          &v10,
          v2) )
  {
    v4 = (int *)MEMORY[0xB338E0]; /*0x42eb29*/
    if ( MEMORY[0xB338E0] ) /*0x42eb31*/
    {
      while ( 1 ) /*0x42eb33*/
      {
        v3 = *v4; /*0x42eb33*/
        if ( *v4 ) /*0x42eb33*/
        {
          if ( v3 != v9 /*0x42eb76*/
            && ((unsigned __int16)a2 & *(_WORD *)(v3 + 0x174)) != 0
            && Archive_ContainsFolder(v3, (unsigned int *)v11, (signed int *)&v8, v2)
            && Archive_FolderContainFile(v3, v8, (unsigned int *)v12, &v10, v2, 0) )
          {
            break; /*0x42eb76*/
          }
        }
        v4 = (int *)v4[1]; /*0x42eb7f*/
        if ( !v4 ) /*0x42eb84*/
          return 0; /*0x42eb84*/
      }
      MEMORY[0xB338E4] = v3; /*0x42eb8f*/
      return v3; /*0x42eb8f*/
    }
    return 0; /*0x42eb8e*/
  }
  return v3; /*0x42eb88*/
}
