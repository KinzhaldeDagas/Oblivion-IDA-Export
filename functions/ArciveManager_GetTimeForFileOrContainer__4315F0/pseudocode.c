char __cdecl ArciveManager::GetTimeForFileOrContainer(char *lpFileName, FILETIME *a2, int a3)
{
  const CHAR *v3; // edi
  int ArchiveForFile; // eax
  HANDLE FirstFileA; // eax
  DWORD dwHighDateTime; // ecx
  struct _WIN32_FIND_DATAA FindFileData; // [esp+8h] [ebp-144h] BYREF

  a2->dwLowDateTime = 0; /*0x43160e*/
  v3 = lpFileName; /*0x431611*/
  a2->dwHighDateTime = 0; /*0x431618*/
  ArchiveForFile = ArchiveManager_GetArchiveForFile(lpFileName, a3); /*0x431624*/
  if ( ArchiveForFile ) /*0x43162e*/
    v3 = (const CHAR *)(ArchiveForFile + 0x3C); /*0x431630*/
  FirstFileA = FindFirstFileA(v3, &FindFileData); /*0x431639*/
  if ( FirstFileA == (HANDLE)0xFFFFFFFF ) /*0x431642*/
    return 0; /*0x43167c*/
  dwHighDateTime = FindFileData.ftLastWriteTime.dwHighDateTime; /*0x431648*/
  a2->dwLowDateTime = FindFileData.ftLastWriteTime.dwLowDateTime; /*0x43164d*/
  a2->dwHighDateTime = dwHighDateTime; /*0x43164f*/
  FindClose(FirstFileA); /*0x431652*/
  return 1; /*0x431658*/
}
