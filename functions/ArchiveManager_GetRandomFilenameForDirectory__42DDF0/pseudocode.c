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
  unsigned int RandomLargeInteger; // eax
  int v13; // esi
  char *v14; // eax
  char *v15; // ecx
  char *v16; // edx
  char v17; // al
  size_t v18; // [esp-4h] [ebp-20h]
  size_t v19; // [esp-4h] [ebp-20h]
  unsigned int v20; // [esp+10h] [ebp-Ch] BYREF
  unsigned int v21[2]; // [esp+14h] [ebp-8h] BYREF
  char v22; // [esp+28h] [ebp+Ch]

  v3 = Str1;
  v4 = *Str1 == 0x5C;
  v20 = 0;
  if ( v4 )
    v3 = Str1 + 1;
  LODWORD(v18) = 5;
  if ( !strncmp(v3, "Data\\", v18) || (LODWORD(v19) = 5, !strncmp(v3, "data\\", v19)) )
    v3 += 5;
  v5 = strlen(v3);
  if ( a3 == 0xFFFF && v3[v5 - 1] != 0x5C )
    LOWORD(a3) = ArchiveManager_GetFileTypemask(&v3[strlen(v3) - 3]);
  BSHash_constr(v21, v3, 1);
  v6 = ArchiveProvidedLastFile;
  if ( ArchiveProvidedLastFile
    && ((unsigned __int16)a3 & *(_WORD *)(ArchiveProvidedLastFile + 0x174)) != 0
    && Archive_ContainsFolder(ArchiveProvidedLastFile, v21, (signed int *)&v20, 0) )
  {
    InterlockedIncrement((volatile LONG *)(v6 + 0x1A8));
    v7 = *(_DWORD *)(v6 + 0x178) + 0x10 * v20;
  }
  else
  {
    v8 = (int *)ArchiveList;
    if ( !ArchiveList )
      return 0;
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        if ( v9 != v6
          && ((unsigned __int16)a3 & *(_WORD *)(v9 + 0x174)) != 0
          && Archive_ContainsFolder(v9, v21, (signed int *)&v20, 0) )
        {
          break;
        }
      }
      v8 = (int *)v8[1];
      if ( !v8 )
        return 0;
    }
    ArchiveProvidedLastFile = v9;
    v7 = *(_DWORD *)(v9 + 0x178) + 0x10 * v20;
    v6 = v9;
  }
  if ( !v7 || !*(_DWORD *)(v7 + 8) )
  {
    Arcghive_CheckDelete((volatile LONG *)v6);
    return 0;
  }
  v22 = 1;
  if ( (*(_BYTE *)(v6 + 0x194) & 0x20) != 0 )
    v22 = 0;
  else
    NiEnterCriticalSection(
      (struct _RTL_CRITICAL_SECTION *)(v6 + 0x200),
      (int)"ArchiveManager::GetRandomFileNameForDirectory");
  v11 = *(_DWORD *)(v7 + 8);
  RandomLargeInteger = GetRandomLargeInteger_(0);
  v13 = sub_42CC00((_DWORD *)v6, v20, RandomLargeInteger % v11);
  v14 = strrchr(strcpy(Str, v3), 0x5C);
  if ( !v14 )
    return 0;
  v15 = (char *)v13;
  v16 = &v14[-v13 + 1];
  do
  {
    v17 = *v15;
    v15[(_DWORD)v16] = *v15;
    ++v15;
  }
  while ( v17 );
  if ( v22 )
    NiLeaveCriticalSection_0((LPCRITICAL_SECTION)(v6 + 0x200));
  return 1;
}
