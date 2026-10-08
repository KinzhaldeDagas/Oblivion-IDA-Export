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

  v30 = a1; /*0x42d2d6*/
  v31 = a4; /*0x42d2da*/
  lpFileTime2 = a5; /*0x42d2de*/
  v27 = 0; /*0x42d2e2*/
  strcpy(FileName, a3); /*0x42d2f0*/
  v6 = strlen(a4) + 1; /*0x42d307*/
  v7 = &FindFileData.cAlternateFileName[0xF]; /*0x42d312*/
  while ( *++v7 ) /*0x42d31d*/
    ; /*0x42d315*/
  qmemcpy(v7, a4, v6); /*0x42d326*/
  v9 = &FindFileData.cAlternateFileName[0xF]; /*0x42d336*/
  while ( *++v9 ) /*0x42d348*/
    ; /*0x42d340*/
  *(_DWORD *)v9 = 0x2A2E2A; /*0x42d35d*/
  FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x42d365*/
  hFindFile = FirstFileA; /*0x42d36a*/
  if ( FirstFileA == (HANDLE)0xFFFFFFFF ) /*0x42d36e*/
    return 0; /*0x42d370*/
  strcpy(FullPath, a4); /*0x42d37e*/
  v13 = &FullPath[strlen(FullPath) + 1] - &FullPath[1]; /*0x42d3a1*/
  if ( (unsigned __int8)v13 > 1u ) /*0x42d3a5*/
    FullPath[(unsigned __int8)v13 - 1] = v14; /*0x42d3aa*/
  BSHash_constr(v34, FullPath, 2); /*0x42d3bf*/
  v26 = Archive_ContainsFolder(a2, v34, (signed int *)&v28, 0) != 0; /*0x42d3e0*/
  v15 = v28; /*0x42d3e5*/
  do /*0x42d507*/
  {
    if ( (FindFileData.dwFileAttributes & 0x10) == 0 || FindFileData.cFileName[0] == 0x2E ) /*0x42d400*/
    {
      if ( v26 && CompareFileTime(&FindFileData.ftLastWriteTime, lpFileTime2) > 0 ) /*0x42d4b3*/
      {
        BSHash_constr(v33, FindFileData.cFileName, 0); /*0x42d4c0*/
        if ( Archive_FolderContainFile(a2, v15, v33, (signed int *)&v28, 0, 0) ) /*0x42d4d6*/
        {
          v24 = *(_DWORD *)(*(_DWORD *)(a2 + 0x178) + 0x10 * v15 + 0xC) + 0x10 * v28; /*0x42d4f1*/
          *(_DWORD *)(v24 + 0xC) &= 0x80000000; /*0x42d4f5*/
          ++v27; /*0x42d4fc*/
        }
      }
    }
    else
    {
      v16 = v31; /*0x42d406*/
      v17 = (CHAR *)(FileName - v31); /*0x42d411*/
      do /*0x42d41d*/
      {
        v18 = *v16; /*0x42d413*/
        v16[(_DWORD)v17] = *v16; /*0x42d415*/
        ++v16; /*0x42d418*/
      }
      while ( v18 ); /*0x42d41d*/
      v19 = strlen(FindFileData.cFileName) + 1; /*0x42d42c*/
      v20 = &FindFileData.cAlternateFileName[0xF]; /*0x42d437*/
      while ( *++v20 ) /*0x42d448*/
        ; /*0x42d440*/
      qmemcpy(v20, FindFileData.cFileName, v19); /*0x42d451*/
      v22 = &FindFileData.cAlternateFileName[0xF]; /*0x42d461*/
      while ( *++v22 ) /*0x42d46c*/
        ; /*0x42d464*/
      v25 = lpFileTime2; /*0x42d478*/
      *(_WORD *)v22 = *(_WORD *)SubStr; /*0x42d480*/
      v27 += BSA_InvalidateAgainstLooseFiles(v30, a2, v30, FileName, v25); /*0x42d490*/
      FirstFileA = hFindFile; /*0x42d494*/
    }
  }
  while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x42d507*/
  FindClose(FirstFileA); /*0x42d516*/
  return v27; /*0x42d520*/
}
