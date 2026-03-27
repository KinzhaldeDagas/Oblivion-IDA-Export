BOOL __thiscall TESFile_GetLastWriteTime(int this, LPSYSTEMTIME lpSystemTime)
{
  struct _FILETIME LocalFileTime; // [esp+0h] [ebp-8h] BYREF

  FileTimeToLocalFileTime((const FILETIME *)(this + 0x2A4), &LocalFileTime);
  return FileTimeToSystemTime(&LocalFileTime, lpSystemTime);
}
