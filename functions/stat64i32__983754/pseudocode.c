int __cdecl _stat64i32(const unsigned __int8 *lpFileName, int a2)
{
  unsigned __int8 *dwHighDateTime; // esi
  int v3; // eax
  char *v4; // eax
  char *v5; // esi
  __int64 v6; // rax
  DWORD LastError; // eax
  size_t v9; // [esp-4h] [ebp-90h]
  size_t v10; // [esp-4h] [ebp-90h]
  int v11; // [esp+Ch] [ebp-80h]
  struct _FILETIME LocalFileTime; // [esp+10h] [ebp-7Ch] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+18h] [ebp-74h] BYREF
  void *Memory; // [esp+28h] [ebp-64h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+2Ch] [ebp-60h] BYREF
  char FullPath[260]; // [esp+16Ch] [ebp+E0h] BYREF

  dwHighDateTime = (unsigned __int8 *)lpFileName;
  LocalFileTime.dwHighDateTime = (DWORD)lpFileName;
  if ( lpFileName && a2 )
  {
    if ( (unsigned int)_mbscspn(lpFileName, &byte_AA3ECC) )
    {
LABEL_5:
      *_errno() = 2;
      *__doserrno() = 2;
      return 0xFFFFFFFF;
    }
    if ( lpFileName[1] == 0x3A )
    {
      if ( *lpFileName && !lpFileName[2] )
        goto LABEL_5;
      v3 = _mbctolower(*(char *)lpFileName) - 0x60;
    }
    else
    {
      v3 = _getdrive();
    }
    v11 = v3;
    Memory = FindFirstFileA((LPCSTR)lpFileName, &FindFileData);
    if ( Memory == (void *)0xFFFFFFFF )
    {
      Memory = 0;
      if ( !(unsigned int)_mbscspn(lpFileName, &off_AA3EC8) )
        goto LABEL_5;
      LODWORD(v9) = 0x104;
      v4 = _fullpath(FullPath, (const char *)lpFileName, v9);
      if ( !v4 )
      {
        if ( *_errno() != 0x22 )
          goto LABEL_5;
        LODWORD(v10) = 0;
        v4 = _fullpath(0, (const char *)lpFileName, v10);
        Memory = v4;
      }
      v5 = v4;
      if ( !v4 || (unsigned int)strlen(v4) != 3 && !IsRootUNCName(v5) || GetDriveTypeA(v5) <= 1 )
      {
        if ( Memory )
          free(Memory);
        goto LABEL_5;
      }
      if ( Memory )
        free(Memory);
      FindFileData.dwFileAttributes = 0x10;
      FindFileData.nFileSizeHigh = 0;
      FindFileData.nFileSizeLow = 0;
      FindFileData.cFileName[0] = 0;
      v6 = __loctotime64_t(0x7BC, 1, 1, 0, 0, 0, 0xFFFFFFFF);
      dwHighDateTime = (unsigned __int8 *)LocalFileTime.dwHighDateTime;
      *(_QWORD *)(a2 + 0x20) = v6;
      *(_QWORD *)(a2 + 0x18) = v6;
      *(_QWORD *)(a2 + 0x28) = v6;
LABEL_44:
      *(_WORD *)(a2 + 6) = __dtoxmode(FindFileData.dwFileAttributes, dwHighDateTime);
      *(_DWORD *)(a2 + 0x14) = FindFileData.nFileSizeLow;
      *(_DWORD *)a2 = v11 - 1;
      *(_DWORD *)(a2 + 0x10) = v11 - 1;
      *(_WORD *)(a2 + 8) = 1;
      *(_WORD *)(a2 + 4) = 0;
      *(_WORD *)(a2 + 0xC) = 0;
      *(_WORD *)(a2 + 0xA) = 0;
      return 0;
    }
    if ( FindFileData.ftLastWriteTime.dwLowDateTime || FindFileData.ftLastWriteTime.dwHighDateTime )
    {
      if ( !FileTimeToLocalFileTime(&FindFileData.ftLastWriteTime, &LocalFileTime)
        || !FileTimeToSystemTime(&LocalFileTime, &SystemTime) )
      {
        goto LABEL_45;
      }
      *(_QWORD *)(a2 + 0x20) = __loctotime64_t(
                                 SystemTime.wYear,
                                 SystemTime.wMonth,
                                 SystemTime.wDay,
                                 SystemTime.wHour,
                                 SystemTime.wMinute,
                                 SystemTime.wSecond,
                                 0xFFFFFFFF);
    }
    else
    {
      *(_DWORD *)(a2 + 0x20) = 0;
      *(_DWORD *)(a2 + 0x24) = 0;
    }
    if ( FindFileData.ftLastAccessTime.dwLowDateTime || FindFileData.ftLastAccessTime.dwHighDateTime )
    {
      if ( !FileTimeToLocalFileTime(&FindFileData.ftLastAccessTime, &LocalFileTime)
        || !FileTimeToSystemTime(&LocalFileTime, &SystemTime) )
      {
        goto LABEL_45;
      }
      *(_QWORD *)(a2 + 0x18) = __loctotime64_t(
                                 SystemTime.wYear,
                                 SystemTime.wMonth,
                                 SystemTime.wDay,
                                 SystemTime.wHour,
                                 SystemTime.wMinute,
                                 SystemTime.wSecond,
                                 0xFFFFFFFF);
    }
    else
    {
      *(_DWORD *)(a2 + 0x18) = *(_DWORD *)(a2 + 0x20);
      *(_DWORD *)(a2 + 0x1C) = *(_DWORD *)(a2 + 0x24);
    }
    if ( !FindFileData.ftCreationTime.dwLowDateTime && !FindFileData.ftCreationTime.dwHighDateTime )
    {
      *(_DWORD *)(a2 + 0x28) = *(_DWORD *)(a2 + 0x20);
      *(_DWORD *)(a2 + 0x2C) = *(_DWORD *)(a2 + 0x24);
LABEL_43:
      FindClose(Memory);
      goto LABEL_44;
    }
    if ( FileTimeToLocalFileTime(&FindFileData.ftCreationTime, &LocalFileTime)
      && FileTimeToSystemTime(&LocalFileTime, &SystemTime) )
    {
      *(_QWORD *)(a2 + 0x28) = __loctotime64_t(
                                 SystemTime.wYear,
                                 SystemTime.wMonth,
                                 SystemTime.wDay,
                                 SystemTime.wHour,
                                 SystemTime.wMinute,
                                 SystemTime.wSecond,
                                 0xFFFFFFFF);
      goto LABEL_43;
    }
LABEL_45:
    LastError = GetLastError();
    _dosmaperr(LastError);
    FindClose(Memory);
    return 0xFFFFFFFF;
  }
  *__doserrno() = 0;
  *_errno() = 0x16;
  _invalid_parameter(0, 0, 0, 0, 0);
  return 0xFFFFFFFF;
}
