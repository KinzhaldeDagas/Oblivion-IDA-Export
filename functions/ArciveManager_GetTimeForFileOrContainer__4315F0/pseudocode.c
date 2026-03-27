char __cdecl ArciveManager::GetTimeForFileOrContainer(char *lpFileName, FILETIME *a2, int a3)
{
  const CHAR *v3; // edi
  int ArchiveForFile; // eax
  HANDLE FirstFileA; // eax
  DWORD dwHighDateTime; // ecx
  struct _WIN32_FIND_DATAA FindFileData; // [esp+8h] [ebp-144h] BYREF

  a2->dwLowDateTime = 0;
  v3 = lpFileName;
  a2->dwHighDateTime = 0;
  ArchiveForFile = ArchiveManager_GetArchiveForFile(lpFileName, a3);
  if ( ArchiveForFile )
    v3 = (const CHAR *)(ArchiveForFile + 0x3C);
  FirstFileA = FindFirstFileA(v3, &FindFileData);
  if ( FirstFileA == (HANDLE)0xFFFFFFFF )
    return 0;
  dwHighDateTime = FindFileData.ftLastWriteTime.dwHighDateTime;
  a2->dwLowDateTime = FindFileData.ftLastWriteTime.dwLowDateTime;
  a2->dwHighDateTime = dwHighDateTime;
  FindClose(FirstFileA);
  return 1;
}
