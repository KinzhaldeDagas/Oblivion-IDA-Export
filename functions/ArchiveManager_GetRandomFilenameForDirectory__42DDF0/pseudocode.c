char __cdecl ArchiveManager_GetRandomFilenameForDirectory(char *Str1, char *Str, int a3)
{
  char *v3; // ebp
  bool v4; // zf
  unsigned int v5; // eax
  int v6; // ebx
  int v7; // esi
  int *v8; // esi
  int v9; // edi
  unsigned int v11; // esi
  unsigned int v12; // eax
  int FileNameByFolderAndIndex; // esi
  char *v14; // eax
  char *v15; // ecx
  char *v16; // edx
  char v17; // al
  size_t v18; // [esp-4h] [ebp-20h]
  size_t v19; // [esp-4h] [ebp-20h]
  unsigned int v20; // [esp+10h] [ebp-Ch] BYREF
  unsigned int v21[2]; // [esp+14h] [ebp-8h] BYREF
  char v22; // [esp+28h] [ebp+Ch]

  v3 = Str1; /*0x42ddf5*/
  v4 = *Str1 == 0x5C; /*0x42ddf9*/
  v20 = 0; /*0x42ddff*/
  if ( v4 ) /*0x42de07*/
    v3 = Str1 + 1; /*0x42de09*/
  LODWORD(v18) = 5; /*0x42de0c*/
  if ( !strncmp(v3, "Data\\", v18) || (LODWORD(v19) = 5, !strncmp(v3, "data\\", v19)) ) /*0x42de28*/
    v3 += 5; /*0x42de34*/
  v5 = strlen(v3); /*0x42de39*/
  if ( a3 == 0xFFFF && v3[v5 - 1] != 0x5C ) /*0x42de5a*/
    LOWORD(a3) = ArchiveManager_GetFileTypemask(&v3[strlen(v3) - 3]); /*0x42de79*/
  BSHash_constr(v21, v3, 1); /*0x42de84*/
  v6 = MEMORY[0xB338E4]; /*0x42de89*/
  if ( MEMORY[0xB338E4] /*0x42deaf*/
    && ((unsigned __int16)a3 & *(_WORD *)(MEMORY[0xB338E4] + 0x174)) != 0
    && Archive_ContainsFolder(MEMORY[0xB338E4], v21, (signed int *)&v20, 0) )
  {
    InterlockedIncrement((volatile LONG *)(v6 + 0x1A8)); /*0x42debf*/
    v7 = *(_DWORD *)(v6 + 0x178) + 0x10 * v20; /*0x42decc*/
  }
  else
  {
    v8 = (int *)MEMORY[0xB338E0]; /*0x42ded4*/
    if ( !MEMORY[0xB338E0] ) /*0x42dedc*/
      return 0; /*0x42dff1*/
    while ( 1 ) /*0x42dee2*/
    {
      v9 = *v8; /*0x42dee2*/
      if ( *v8 ) /*0x42dee2*/
      {
        if ( v9 != v6 /*0x42df08*/
          && ((unsigned __int16)a3 & *(_WORD *)(v9 + 0x174)) != 0
          && Archive_ContainsFolder(v9, v21, (signed int *)&v20, 0) )
        {
          break; /*0x42df08*/
        }
      }
      v8 = (int *)v8[1]; /*0x42df11*/
      if ( !v8 ) /*0x42df16*/
        return 0; /*0x42df21*/
    }
    MEMORY[0xB338E4] = v9; /*0x42df29*/
    v7 = *(_DWORD *)(v9 + 0x178) + 0x10 * v20; /*0x42df2f*/
    v6 = v9; /*0x42df35*/
  }
  if ( !v7 || !*(_DWORD *)(v7 + 8) ) /*0x42df3f*/
  {
    Arcghive_CheckDelete((volatile LONG *)v6); /*0x42dfe9*/
    return 0; /*0x42dfe9*/
  }
  v22 = 1; /*0x42df50*/
  if ( (*(_BYTE *)(v6 + 0x194) & 0x20) != 0 ) /*0x42df55*/
    v22 = 0; /*0x42df57*/
  else
    NiEnterCriticalSection( /*0x42df69*/
      (struct _RTL_CRITICAL_SECTION *)(v6 + 0x200),
      (int)"ArchiveManager::GetRandomFileNameForDirectory");
  v11 = *(_DWORD *)(v7 + 8); /*0x42df6e*/
  v12 = Game_RandomLargeInteger(0); /*0x42df73*/
  FileNameByFolderAndIndex = Archive_GetFileNameByFolderAndIndex((_DWORD *)v6, v20, v12 % v11); /*0x42df92*/
  v14 = strrchr(strcpy(Str, v3), 0x5C); /*0x42dfa7*/
  if ( !v14 ) /*0x42dfb1*/
    return 0; /*0x42dfb1*/
  v15 = (char *)FileNameByFolderAndIndex; /*0x42dfb6*/
  v16 = &v14[-FileNameByFolderAndIndex + 1]; /*0x42dfb8*/
  do /*0x42dfca*/
  {
    v17 = *v15; /*0x42dfc0*/
    v15[(_DWORD)v16] = *v15; /*0x42dfc2*/
    ++v15; /*0x42dfc5*/
  }
  while ( v17 ); /*0x42dfca*/
  if ( v22 ) /*0x42dfd0*/
    NiLeaveCriticalSection_0((LPCRITICAL_SECTION)(v6 + 0x200)); /*0x42dfd8*/
  return 1; /*0x42df18*/
}
