bool __cdecl ArchiveManager_IsFileInArchives_(char *Str1, int a2)
{
  return ArchiveManager_GetArchiveForFile(Str1, a2) != 0;
}
