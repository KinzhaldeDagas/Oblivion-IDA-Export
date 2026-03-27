int __userpurge BSA_InvalidateAgainstLooseFiles@<eax>(
        const char *a1@<eax>,
        int a2@<ecx>,
        const char *a3,
        char *a4,
        FILETIME *a5)
{
  unsigned int v6; // eax
  CHAR *v7; // edi
  CHAR *v9; // edi
  HANDLE FirstFileA; // esi
  int v13; // eax
  char v14; // cl
  unsigned int v15; // ebp
  char *v16; // eax
  CHAR *v17; // edx
  char v18; // cl
  unsigned int v19; // eax
  CHAR *v20; // edi
  CHAR *v22; // edi
  int v24; // eax
  FILETIME *v25; // [esp-4h] [ebp-38Ch]
  bool v26; // [esp+13h] [ebp-375h]
  int v27; // [esp+14h] [ebp-374h]
  unsigned int v28; // [esp+18h] [ebp-370h] BYREF
  FILETIME *lpFileTime2; // [esp+1Ch] [ebp-36Ch]
  const char *v30; // [esp+20h] [ebp-368h]
  char *v31; // [esp+24h] [ebp-364h]
  HANDLE hFindFile; // [esp+28h] [ebp-360h]
  unsigned int v33[2]; // [esp+2Ch] [ebp-35Ch] BYREF
  unsigned int v34[2]; // [esp+34h] [ebp-354h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+3Ch] [ebp-34Ch] BYREF
  CHAR FileName[259]; // [esp+17Ch] [ebp-20Ch] BYREF
  char FullPath[260]; // [esp+280h] [ebp-108h] BYREF

  v30 = a1;
  v31 = a4;
  lpFileTime2 = a5;
  v27 = 0;
  strcpy(FileName, a3);
  v6 = strlen(a4) + 1;
  v7 = &FindFileData.cAlternateFileName[0xF];
  while ( *++v7 )
    ;
  qmemcpy(v7, a4, v6);
  v9 = &FindFileData.cAlternateFileName[0xF];
  while ( *++v9 )
    ;
  *(_DWORD *)v9 = 0x2A2E2A;
  FirstFileA = FindFirstFileA(FileName, &FindFileData);
  hFindFile = FirstFileA;
  if ( FirstFileA == (HANDLE)0xFFFFFFFF )
    return 0;
  strcpy(FullPath, a4);
  v13 = &FullPath[strlen(FullPath) + 1] - &FullPath[1];
  if ( (unsigned __int8)v13 > 1u )
    FullPath[(unsigned __int8)v13 - 1] = v14;
  BSHash_constr(v34, FullPath, 2);
  v26 = Archive_ContainsFolder(a2, v34, (signed int *)&v28, 0) != 0;
  v15 = v28;
  do
  {
    if ( (FindFileData.dwFileAttributes & 0x10) == 0 || FindFileData.cFileName[0] == 0x2E )
    {
      if ( v26 && CompareFileTime(&FindFileData.ftLastWriteTime, lpFileTime2) > 0 )
      {
        BSHash_constr(v33, FindFileData.cFileName, 0);
        if ( Archive_FolderContainFile(a2, v15, v33, (signed int *)&v28, 0, 0) )
        {
          v24 = *(_DWORD *)(*(_DWORD *)(a2 + 0x178) + 0x10 * v15 + 0xC) + 0x10 * v28;
          *(_DWORD *)(v24 + 0xC) &= 0x80000000;
          ++v27;
        }
      }
    }
    else
    {
      v16 = v31;
      v17 = (CHAR *)(FileName - v31);
      do
      {
        v18 = *v16;
        v16[(_DWORD)v17] = *v16;
        ++v16;
      }
      while ( v18 );
      v19 = strlen(FindFileData.cFileName) + 1;
      v20 = &FindFileData.cAlternateFileName[0xF];
      while ( *++v20 )
        ;
      qmemcpy(v20, FindFileData.cFileName, v19);
      v22 = &FindFileData.cAlternateFileName[0xF];
      while ( *++v22 )
        ;
      v25 = lpFileTime2;
      *(_WORD *)v22 = *(_WORD *)SubStr;
      v27 += BSA_InvalidateAgainstLooseFiles((int)v30, a2, v30, FileName, v25);
      FirstFileA = hFindFile;
    }
  }
  while ( FindNextFileA(FirstFileA, &FindFileData) );
  FindClose(FirstFileA);
  return v27;
}
